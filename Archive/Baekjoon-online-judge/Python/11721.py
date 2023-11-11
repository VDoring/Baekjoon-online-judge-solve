# 실패
cnt = 0
s = list(input())
for i in s:
    cnt += 1
    if cnt % 10 == 0:
        print('\n')
    print(i)


# 인터넷 답지 1
a = input()
d = len(a)
for b in range(0,d,10):
    e=b+10
    print(a[b:e])

# 인터넷 답지 1
a = input()
for b in range (0,len(a),10):
    print(a[b:b+10])

# 인터넷 답지 2
n = input() # 문자열 입력

for i in range(0, len(n), 10): # 0부터 len(n)으로 n의 문자열의 길이까지 10씩 끊어서 i를 입력해줌
                               # range(시작값, 종료값, step)
    print(n[i:i + 10]) # 마지막으로 입력받은 문자열 n을 i ~ i+10 만큼 끊어서 출력한다.(슬라이싱 사용)
                       # n[시작값:종료값+1]
                       # 이렇게하면 n[0:10], n[10:20]와 같이 끊어진다. 0부터 9까지 출력, 10부터 19까지 출력하게 된다.