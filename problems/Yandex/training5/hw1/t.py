def decrypt(word):
    decrypted_word = ''
    for i in range(len(word)):
        if i % 2 == 0:
            decrypted_word += chr(ord(word[i]) - 1)
        else:
            decrypted_word += chr(ord(word[i]) + 1)
    return decrypted_word

encrypted_word = "НЦОЪСЪЭДХ КЯЧЯС"
decrypted_word = decrypt(encrypted_word)
print("Расшифрованное слово:", decrypted_word)
