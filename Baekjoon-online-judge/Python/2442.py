n = int(input())

for i in range(n):
    print(' '*(n-(i+1)) + '*'*(i+1) + '*'*i)
    
    
# 인터넷 답안
a = int(input())
for i in range(a):
    print(' '*(a-i-1)+('*' * (2*i+1)))