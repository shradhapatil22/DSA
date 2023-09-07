# Given an unsorted array of size n. Array elements are in the range of 1 to n. One number from set {1, 2, …n} is missing and one number occurs twice in the array. Find these two numbers.

# Examples: 

# Input: arr[] = {3, 1, 3}
# Output: Missing = 2, Repeating = 3
# Explanation: In the array, 2 is missing and 3 occurs twice 

# Input: arr[] = {4, 3, 6, 2, 1, 1}
# Output: Missing = 5, Repeating = 1

# a=list(map(int,input("Enter array elements: ").split()))
# a.sort()
# for i in range(len(a)):
#     if i not in a:
#         missing =i
#     if a[i] == a[i+1]:
#         repeating = a[i]
# print(missing,"\t",repeating)

a = list(map(int, input("Enter array elements: ").split()))
a.sort()

missing = -1
repeating = -1

for i in range(len(a) - 1):  # Iterate up to len(a) - 1
    if a[i] == a[i + 1]:
        repeating = a[i]
    elif a[i] + 1 != a[i + 1]:
        missing = a[i] + 1

# Special case for the last element
if a[-1] != len(a):
    missing = len(a)

print("Missing =", missing)
print("Repeating =", repeating)
