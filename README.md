
<h1> Cryptography Workshop in C </h1>

<h2> Description </h2>

This repository contains materials and exercises for a workshop on Cryptography in C. It's aimed at providing introductory-level cryptographic exercises, including implementations of the Caesar Cipher, Substitution Cipher, and XOR Cipher.


<h2> Installation and Setup </h2>
Clone the repository to your local machine:

```
git clone https://github.com/FrancoisDupontEpitech/Workshop-Cryptography.git
```

Navigate to the cloned directory:

```
cd Workshop-Cryptography
```


<h2> Usage </h2>
Each exercise is contained in its own directory. Follow these instructions to compile and run each one:

<h2> Exercice 1: Caesar Cipher Encryption </h2>
Description: This exercise demonstrates the basic Caesar Cipher encryption method, where each letter in the plaintext is shifted a certain number of places down or up the alphabet.

```
gcc caesar_encrypt.c
./a.out [text_to_encrypt] [shift]
```

<h2> Exercice 2: Caesar Cipher Decryption </h2>
Description: This exercise focuses on decrypting a text that was encrypted using the Caesar Cipher. It reverses the encryption process.

```
gcc caesar_decrypt.c
./a.out [text_to_decrypt] [shift]
```

<h2> Exercice 3: Substitution Cipher Encryption </h2>
Description: Here, you'll implement a simple substitution cipher, a basic yet effective form of encryption where each letter in the plaintext is replaced by another letter.

```
gcc substitute_encrypt.c
./a.out [text] [shift]
```

<h2> Exercice 4: Substitution Cipher Decryption </h2>
Description: This exercise involves decrypting a text encrypted using the substitution cipher, teaching the concept of reversing an encryption algorithm.

```
gcc substitute_decrypt.c
./a.out [text] [shift]
```

<h2> Exercice 5: XOR Cipher </h2>
Description: The XOR Cipher exercise introduces the concept of symmetric-key cryptography, where the same key is used for both encryption and decryption.

```
gcc xor_encrypt_decrypt.c
./a.out [text] [key]
```
