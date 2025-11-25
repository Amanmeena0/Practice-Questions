import sys

input = sys.stdin.readline

t = int(input())
for _ in range(t):
    n, x = map(int, input().split())
    arr = list(map(int,input().split()))

    has_less = has_greater = has_equal = False
    
    for v in arr:
        if v < x:
            has_less = True
        elif v > x:
            has_greater = True
        else:
            has_equal = True
    
    if has_equal:
        print("Yes")
    elif has_less and has_greater:
        print("No")
    else:
        print("Yes")
    
