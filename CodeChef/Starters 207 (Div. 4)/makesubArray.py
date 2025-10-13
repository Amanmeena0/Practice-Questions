t = int(input())
for _ in range(t):
    n = int(input())
    s = int(input())

    first = -1
    last = -1

    black_count = 0;

    for i, ch in enumerate(s):
        if ch == 1:
            black_count+=1
            if first == -1:
                first = i
            last = i
 