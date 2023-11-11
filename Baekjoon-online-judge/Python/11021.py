# 내 풀이
n = int(input())
for i in range(n):
    a, b = map(int,input().split())
    print('Case #', i+1, ':', a+b) #이렇게하면 Case # 1 과 같이 띄어적이지게 된다.


# 온라인 답안
n = int(input())

for i in range(1,n+1): # 초기값 1로 설정, 끝나는값 역시 1을 더함
    a,b = map(int, input().split())
    print("Case #"+str(i)+':',a+b) # for문 안에서 선언된 i는 문자형 상태이다.
                                    # 그래서 str()함수를 사용해 문자열을 이어적음으로써 띄어쓰기가 발생하지 않도록 한다.
                                    # 대신 str() 앞뒤로 + 를 적어주어야 한다. (쉼표 사용 불가)