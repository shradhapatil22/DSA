# program to reverse an array or string

# def rev(start,end,a):
#     while start<end:
#         temp=a[start]
#         a[start]=a[end]
#         a[start]=temp
#         start+=1
#         end-=1
#     return a
#
# a=list(input().split())
# start=0
# end=len(a)-1
# print(rev(start, end, a))


def reverse_list(arr):
    left = 0
    right = len(arr) - 1
    while (left < right):
        # Swap
        temp = arr[left]
        arr[left] = arr[right]
        arr[right] = temp
        left += 1
        right -= 1

    return arr


arr = [1, 2, 3, 4, 5, 6, 7]
print(reverse_list(arr))