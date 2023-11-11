n = int(input()) #입력받아 정수형으로 변환하여 변수에 저장

for _ in range(n): #n만큼 반복
    a,b = map(int,input().split()) #입력받아 값 분리 및 정수형으로 변환하여 각 변수에 저장
    print(a+b)