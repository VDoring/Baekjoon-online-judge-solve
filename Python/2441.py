n = int(input())
for i in range(n, 0, -1):
    for _ in range(n-i):
        print(' ', end='')
    print('*'*i)


# 인터넷 답안
n=int(input())
for i in range(1,n+1):
    print(" "*(i-1) + "*"*(n-i+1))