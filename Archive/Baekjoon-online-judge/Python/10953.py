n = int(input())
for _ in range(n):
    a, b = map(int,input().split(',')) # split()함수에 구분할 값을 넣으면 구분해준다.
    print(a+b)