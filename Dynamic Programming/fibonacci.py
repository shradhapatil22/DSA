n=int(input())
dp=[-1]*1000


def fibonacci(n):

    if n == 0 or n == 1:
        return n;

    if dp[n]!=-1:
        return dp[n];

    dp[n]=fibonacci(n-1)+fibonacci(n-2)
    return dp[n]

print(fibonacci(n))