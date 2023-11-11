s = input()
if s == '1 2 3 4 5 6 7 8':
    print('ascending')
elif s == '8 7 6 5 4 3 2 1':
    print('descending')
else:
    print('mixed')

# 인터넷 답안
a = list(map(int, input().split()))
print(a)
if a == sorted(a):
    print('ascending')
elif a == sorted(a, reverse=True):
    print('descending')
else:
    print('mixed') 