def fibonacci_generator(n):
    a, b = 0, 1
    count = 0
    while count < n:
        yield a
        a, b = b, a + b
        count += 1

# Example usage:
n = 10  # Change this to the desired number of Fibonacci numbers
fib = fibonacci_generator(n)

for number in fib:
    print(number)
