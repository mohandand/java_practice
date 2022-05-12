from math import gcd
def encryptEnglishText(a,b,englishplainText):
    resultcipherText = ""

    for i in englishplainText:
        if i != " ":
            resultcipherText = resultcipherText + chr(((a*(ord(i)-ord('A')) + b)%26) + ord('A'))
        else:
            resultcipherText = resultcipherText + " "

    return resultcipherText

def decryptCipherText(a,b,resultcipherText):
    englishplainText = ""

    c = 0 
    for i in range(1,26):
        if a*i%26 == 1:
            c = i
            break

    for i in resultcipherText:
        if i != " ":
            englishplainText = englishplainText + chr((c*(ord(i)+ord('A') - b)%26) + ord('A'))
        else:
            englishplainText = englishplainText + " "

    return englishplainText



if __name__ == "__main__":
    a = int(input("Please Enter Key value For a : "))
    b = int(input("Please Enter Key value For b: "))

    while a == 0 or gcd(a,26) != 1:
        a = int(input("Key Value of a is Invalid"))

    englishplainText = input("Please Enter Plain Text to Convert into CipherText: ")
    resultcipherText = encryptEnglishText(a, b, englishplainText.upper())
    print("After Conversion Cipher Text is : "+resultcipherText)
    print("After Conversion Plain Text is : "+decryptCipherText(a,b,resultcipherText))
