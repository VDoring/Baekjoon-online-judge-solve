# 8393 - 합

n = int(input())
sum = 0

for i in range(n): # 3 입력시 여기서 i는 0,1,2 순서로 값을 저장함
    sum += i+1 # 다만 우리가 계산해야할껀 1부터 시작하는 수이므로 i에 +1을 한다.
print(sum)


# 인터넷 답안
sum = 0
inp = int(input())
for i in range(inp+1):
    sum  = sum + i
print(sum)