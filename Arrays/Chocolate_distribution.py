# Given an array of N integers where each value represents the number of chocolates in a packet. Each packet can have a variable number of chocolates. There are m students, the task is to distribute chocolate packets such that: 

# Each student gets one packet.
# The difference between the number of chocolates in the packet with maximum chocolates and the packet with minimum chocolates given to the students is minimum.

# Input : arr[] = {7, 3, 2, 4, 9, 12, 56} , m = 3 
# Output: Minimum Difference is 2 
# Explanation:
# We have seven packets of chocolates and we need to pick three packets for 3 students 
# If we pick 2, 3 and 4, we get the minimum difference between maximum and minimum packet sizes.

# Input : arr[] = {3, 4, 1, 9, 56, 7, 9, 12} , m = 5 
# Output: Minimum Difference is 6 

# Input : arr[] = {12, 4, 7, 9, 2, 23, 25, 41, 30, 40, 28, 42, 30, 44, 48, 43, 50} , m = 7 
# Output: Minimum Difference is 10 


# arr[0..n-1] represents sizes of packets
# m is number of students.
# Returns minimum difference between maximum
# and minimum values of distribution.
def findMinDiff(arr, n, m):

	# if there are no chocolates or number
	# of students is 0
	if (m == 0 or n == 0):
		return 0

	# Sort the given packets
	arr.sort()

	# Number of students cannot be more than
	# number of packets
	if (n < m):
		return -1

	# Largest number of chocolates
	min_diff = arr[n-1] - arr[0]

	# Find the subarray of size m such that
	# difference between last (maximum in case
	# of sorted) and first (minimum in case of
	# sorted) elements of subarray is minimum.
	for i in range(len(arr) - m + 1):
		min_diff = min(min_diff, arr[i + m - 1] - arr[i])

	return min_diff


# Driver Code
if __name__ == "__main__":
	arr = [12, 4, 7, 9, 2, 23, 25, 41,
		30, 40, 28, 42, 30, 44, 48,
		43, 50]
	m = 7 # Number of students
	n = len(arr)
	print("Minimum difference is", findMinDiff(arr, n, m))

# This code is contributed by Smitha
