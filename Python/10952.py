# 내 풀이
while True:
    a,b = input().split()
    if int(a)==0 and int(b)==0:
        break
    print(int(a)+int(b))

# 인터넷 솔루션
while True:
    a, b = map(int, input().split()) #입력된 값을 공백기준 분리 후 정수형으로 변환
    if a == 0 and b == 0:
        break
    print(a+b)