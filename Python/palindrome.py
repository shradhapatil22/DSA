def palindrome(s):
    return s == s[::-1]

s=input("Enter string: ")
if palindrome(s):
    print("palindrome")
else:
    print("not palindrome")