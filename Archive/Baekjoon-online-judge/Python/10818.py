# 실패
n = int(input())
numlist = list(map(int, input().split()))

max = -99999999
min = 99999999
for i in range(n):
    if max < numlist[n]:
        max = i
    elif min > numlist[n]:
        min = i
print(min,max)


# 인터넷 답안 1
n = int(input())
numlist = list(map(int, input().split()))
print(min(numlist), max(numlist))