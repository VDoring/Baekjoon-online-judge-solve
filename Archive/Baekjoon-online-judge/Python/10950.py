n = int(input())
for i in range(0,n):
    a,b = input().split()
    print(int(a)+int(b))

# for i in range(n) -> (n)만 적어도 작동한다.
# for _ in range(n) -> _를 적어 for문 변수를 생략할 수도 있다.