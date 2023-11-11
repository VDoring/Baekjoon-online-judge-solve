n = int(input())

for i in range(n):
    a,b = map(int,input().split())
    sum = a + b
    print('Case #' + str(i+1) +': ' + str(a) + ' + ' + str(b) + ' = ' + str(a+b))


# 인터넷 정답
case = int(input())
for i in range(case):
    a, b = map(int, input().split())
    print('Case #%d: %d + %d = %d' %(i+1, a, b, a+b))