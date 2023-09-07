# Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

def dup(a):
    for i in range(len(a)):
        if a[i] ==a[i+1]:
            return False
    return True

a=list(map(int,input("Enter array elements: ").split()))
a.sort()

print(dup(a))