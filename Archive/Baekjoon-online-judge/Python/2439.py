n = int(input())

for i in range(1,n+1):
    for _ in range(n-i): # 띄어쓰기 출력
        print(' ',end='')

    for _ in range(n-(n-i)): # 별 출력
        print('*',end='')

    print() # 다음라인 넘어감


# 인터넷 답안
n=int(input())
for i in range(1,n+1):
    print(" "*(n-i) + "*"*i) # 띄어쓰기 출력 후 별 출력