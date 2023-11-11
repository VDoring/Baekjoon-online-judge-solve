# 문제풀기 실패 겸 인터넷 정답 참조한 것
n = int(input()) # 입력만 받고 활용하지 않음!
num = list(input()) # 54321입력시 ['5', '4', '3', '2', '1'] 출력. (리스트로 변환)
sum = 0

for i in num: # 리스트 갯수만큼 동작. 작동시 리스트 요소 1개씩 변수 i에 대입됨
    sum += int(i) #리스트의 값을 하나씩 int로 바꿔주어 더해준다.
print(sum)


# 인터넷 정답 1
sum = 0
inp = int(input())
num = input()
for each in num: # num 값을 하나씩 each에 대입해 사용
                 # 파이썬은 자료형 지정을 안하면 자동으로 문자열 처리가 된다.
                 # 그렇기에 input()으로 숫자값을 받은 num은 문자열로 처리되고,
                 # for문에서 each 변수로 대입시킬 때 문자열 하나 단위로 잘라 처리하게 된다.
        sum += int(each)
print(sum)


# 인터넷 정답 2
n = input() # 입력만 받고 활용하지 않음!
print(sum(map(int,input()))) # 숫자가 공백 없는 문자열인 점을 이용함
                             # map()으로 각 자리수를 int로 변환하였고, sum()을 통해 합한 값 출력


# 인터넷 정답 3
n = int(input())
nums = input()
total = 0
for i in range(n): # 0부터 n-1까지
    total += int(nums[i])
print(total)