t = int(input())
for _ in range(t):
    n = int(input())
    y,r = map(int, input().split())


    suspension_from_yellow = y // 2
    suspension_from_red = r

    max_suspended = min(n,suspension_from_yellow+suspension_from_red)


    print(max_suspended)