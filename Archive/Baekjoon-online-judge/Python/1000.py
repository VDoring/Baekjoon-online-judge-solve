a,b = input().split() #파이썬은 입력을 받을때 문자열로 받는다.
                      #그렇기때문에 입력을 받은 후 split()으로 문자열을 나누어야 한다.
                      #(split()은 문자열을 공백을 기준으로 잘라서 저장한다.)

print(int(a)+int(b))  #각 변수 a,b는 나눠지긴 했지만 정수가 아닌 문자형 자료형으로 저장된상태이다.
                      #따라서 int()를 이용해 a,b를 정수화시켜주어야 한다.