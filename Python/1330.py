a,b = map(int,input().split())
if a > b:
    print('>')
elif a < b:
    print('<')
else:
    print('==')


# 인터넷 정답
# 삼항 연산자 - https://ooyoung.tistory.com/116
print('>') if a > b else print('<') if a < b else print('==')

# 위의 코드를 분리하면 이렇게된다.
print('>') if a > b    else    print('<') if a < b    else    print('==')
# a > b이면 > 출력     else    a < b이면 < 출력       else    == 출력 (이전 조건이 모두 거짓일때)