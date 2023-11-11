# 인터넷 정답 1
s = input().split()
print(len(s))

# (상세설명)
# input()으로 "Hello FX World"를 입력하고 split()에 의해 띄어쓰기가 된 문자를 자르면
# s - [Hello, FX, World] 가 된다.
# 여기서 len()을 사용해서 s의 길이(들어가 있는 개수)를 출력한다. 3이 출력된다.



# 인터넷 정답 2
s = input().strip() # strip()은 문자열의 양쪽 공백을 모두 삭제한다.
if len(s) == 0: # 단어 하나도 없이 공백만 있는경우를 대비
    print(0)
else:
    print(s.count(' ') + 1)  # 공백의 갯수를 세어 출력한다.


# 여담 - strip() 함수에 대하여
# https://dojang.io/mod/page/view.php?id=1334
s = '   Python   '
s.lstrip() # 'Python   ' 출력
s.rstrip() # '   Python' 출력
s.strip()  # 'Python'    출력