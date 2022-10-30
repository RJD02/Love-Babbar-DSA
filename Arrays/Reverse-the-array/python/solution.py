n = int(input())
while(n!=0):
    n-=1
    t = int(input())
    li = list(map(int,input().split()))[:t]
    a = li[::-1]
    b = ''.join(str(a).split(','))
    print(b.rstrip(']').lstrip('['))
