def reverter_string(string):
    string_revertida = ''
    for i in range(len(string) - 1, -1, -1):
        string_revertida += string[i]
    return string_revertida

# Exemplo de uso:
string_original = "Hello, world!"
string_revertida = reverter_string(string_original)
print("String original:", string_original)
print("String revertida:", string_revertida)