# 2742 - 기찍 N
n = int(input())
for i in range(n): # n은 고정된 숫자. i는 0부터 시작해 n의 값으로 다가간다.
    print(n-i)



# 여담
n = int(input())
for i in range(n):
    print('i는',i)
    print('n은',n)
    print()
#i는 0
#n은 3

#i는 1
#n은 3

#i는 2
#n은 3

#이렇게 출력된다.
#즉, i는 0으로 셋팅되고, for이 돌면서 i 값이 1씩 늘어난다.

