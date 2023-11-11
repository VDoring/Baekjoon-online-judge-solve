#최초 시도
#for _ in range(input()):
#    a,b = map(int,input().split())
#    print(a+b)

#답안
while True: #코드 반복 유지
    try: #일단 이 코드 실행
        a,b = map(int,input().split())
        print(a+b)
    except: #오류나면
        break

# try - except문 설명)
# try 안에있는 코드가 작동중 오류가 발생하면 except로 바로 넘어간다.