# 시도 1
n = int(input())
for i in range(n):
    for _ in range(i+1):
        print('*',end='')
    print()


# 시도 2
n = int(input())
for i in range(1,n+1):
    for j in range(i):
        print('*',end='')
    print()


# 인터넷 답지
n=int(input())
for i in range(1,n+1):
    print("*"*i) # * 를 i의 값만큼 곱해서 출력