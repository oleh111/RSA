# RSA
RSA encrypting and decrypting algorithm

The RSA algorithm involves three steps: key generation, encryption and decryption.

#Key generation
RSA involves a public key and a private key. The public key can be known by everyone and is used for encrypting messages. Messages encrypted with the public key can only be decrypted in a reasonable amount of time using the private key. The keys for the RSA algorithm are generated the following way:

1. Choose two distinct prime numbers p and q.
  For security purposes, the integers p and q should be chosen at random, and should be of similar bit-length. Prime integers   can be efficiently found using a primality test.
2. Compute n = pq.
  n is used as the modulus for both the public and private keys. Its length, usually expressed in bits, is the key length.
3. Compute φ(n) = φ(p)φ(q) = (p − 1)(q − 1) = n - (p + q -1), where φ is Euler's totient function.
4. Choose an integer e such that 1 < e < φ(n) and gcd(e, φ(n)) = 1; i.e., e and φ(n) are coprime.
  e is released as the public key exponent.
  e having a short bit-length and small Hamming weight results in more efficient encryption – most commonly 216 + 1 = 65,537. 5. However, much smaller values of e (such as 3) have been shown to be less secure in some settings.[5]
  Determine d as d ≡ e−1 (mod φ(n)); i.e., d is the multiplicative inverse of e (modulo φ(n)).
  This is more clearly stated as: solve for d given d⋅e ≡ 1 (mod φ(n))
  This is often computed using the extended Euclidean algorithm. Using the pseudocode in the Modular integers section, inputs   a and n correspond to e and φ(n), respectively.
  d is kept as the private key exponent.
The public key consists of the modulus n and the public (or encryption) exponent e. The private key consists of the modulus n and the private (or decryption) exponent d, which must be kept secret. p, q, and φ(n) must also be kept secret because they can be used to calculate d.

An alternative, used by PKCS#1, is to choose d matching de ≡ 1 (mod λ) with λ = lcm(p − 1, q − 1), where lcm is the least common multiple. Using λ instead of φ(n) allows more choices for d. λ can also be defined using the Carmichael function, λ(n
#Encryption
Alice transmits her public key (n, e) to Bob and keeps the private key d secret. Bob then wishes to send message M to Alice.

He first turns M into an integer m, such that 0 ≤ m < n by using an agreed-upon reversible protocol known as a padding scheme. He then computes the ciphertext c corresponding to
 c = m^e (mod n) 
 
This can be done efficiently, even for 500-bit numbers, using Modular exponentiation. Bob then transmits c to Alice.
Note that at least nine values of m will yield a ciphertext c equal to m,

#Decryption
Alice can recover m from c by using her private key exponent d via computing

 m = c^d (mod n) 
Given m, she can recover the original message M by reversing the padding scheme.
(In practice, there are more efficient methods of calculating cd using the precomputed values below.)

#A worked example
Here is an example of RSA encryption and decryption. The parameters used here are artificially small, but one can also use OpenSSL to generate and examine a real keypair.

1. Choose two distinct prime numbers, such as
p = 61 and q = 53
2. Compute n = pq giving
n = 61 * 53 = 3233
3. Compute the totient of the product as φ(n) = (p − 1)(q − 1) giving
φ(3233) = (61 - 1)(53 - 1) = 3120
4. Choose any number 1 < e < 3120 that is coprime to 3120. Choosing a prime number for e leaves us only to check that e is not a divisor of 3120.
Let e = 17
5. Compute d, the modular multiplicative inverse of e (mod φ(n)) yielding,
d = 2753
  Worked example for the modular multiplicative inverse:
e * d mod φ(n) = 1
17 * 2753  mod 3120 = 1
The public key is (n = 3233, e = 17). For a padded plaintext message m, the encryption function is
c(m) = m^17 mod 3233

The private key is (n = 3233, d = 2753). For an encrypted ciphertext c, the decryption function is
m(c) = c^2753 mod 3233

For instance, in order to encrypt m = 65, we calculate
c = 65^17 mod 3233 = 2790 

To decrypt c = 2790, we calculate
m = 2790^2753 mod 3233 = 65 
Both of these calculations can be computed efficiently using the square-and-multiply algorithm for modular exponentiation. In real-life situations the primes selected would be much larger; in our example it would be trivial to factor n, 3233 (obtained from the freely available public key) back to the primes p and q. Given e, also from the public key, we could then compute d and so acquire the private key.
