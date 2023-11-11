# 실패
n = int(input())
ox = list(input())

for i in range(n):
    ox[i] = list(input())

for i in range(n):
    for j in ox:
        print(j)

# 재시도
sum = 0
chain = 0 # O가 연달아 있을때 증가. X로 인해 끊기면 감소.

n = int(input()) # 입력갯수

for _ in range(n):
    str_ox = input() # OX 입력
    list_ox = list(str_ox) # 리스트 저장 -> ['O', 'X', 'O', 'X'] 이런식으로 저장됨

    for i in list_ox: # 리스트 요소만큼 반복. 이때 리스트 요소 하나하나가 변수 i로 들어간다.
        if i=='O':
            sum += 1 # O 일경우 원래 더해지는 합
            sum += chain # O 가 연속된 횟수만큼 sum에 더함
            chain += 1 # O 이므로 연속 휫수 +1
        else:
            chain = 0 # X 이므로 연속 횟수 초기화

    print(sum) # 과정을 다 돌았으므로 결과 출력
    sum = 0 # 다음 과정을 위한 값 초기화
    chain = 0 # 다음 과정을 위한 값 초기화