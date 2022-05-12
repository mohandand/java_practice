from math import gcd
def encryptEnglishText(a,b,alphabets,englishplainText):
    resultcipherText = ""

    for i in englishplainText:
        if i != " ":
            resultcipherText += alphabets[(a*alphabets.index(i) + b)%len(alphabets)]
        else:
            resultcipherText += " "

    return resultcipherText

def decryptCipherText(a,b,alphabets,resultcipherText):
    englishplainText = ""

    c = 0 
    for i in range(1,len(alphabets)):
        if a*i%len(alphabets) == 1:
            c = i
            break

    for i in resultcipherText:
        if i != " ":
            index = (c*(alphabets.index(i) - b))%len(alphabets)
            if index < 0:
                index += len(alphabets)
            englishplainText += alphabets[index]
        else:
            englishplainText += " "

    return englishplainText



if __name__ == "__main__":
    a = int(input("Please Enter Key value for a: "))
    b = int(input("Please Enter Key value for b:"))

    f = open("language", "r")
    text = f.read()
    text = text.split("\n")
    alphabets = text[0].upper()
    print("The defined language is: "+alphabets)

    while a == 0 or gcd(a,len(alphabets)) != 1:
        a = int(input("Key value of a is Invalid"))

    englishplainText = input("Please Enter Plain text to Convert into CipherText: ")
    resultcipherText = encryptEnglishText(a, b, alphabets, englishplainText.upper())
    print("After Conversion Cipher text : "+resultcipherText)
    print("After Conversion Plain Text is: "+ decryptCipherText(a,b,alphabets,resultcipherText))