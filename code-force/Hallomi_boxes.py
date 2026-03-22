# link => https://codeforces.com/problemset/problem/1903/A

t = int(input())

while t>=0:
    n,k = map(int,input().split())
    arr = list(map(int,input().split()))
    if k ==1:
        if arr == sorted(arr):
            print("YES")
        else:
            print("NO")
    else:
        print("NO")
    
    t-=1
    