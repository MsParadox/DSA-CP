str = input("Enter the string :")

def isPalindrome(s):

    cleanS =(s.replace(" ","")).lower()
    reverseS = cleanS[::-1]
    
    if cleanS == reverseS:
        print("Yes")
    else:
        print("No")

isPalindrome(str)