from collections import Counter

def function(my_list: list, M:int) -> int:

    if M < 2:
        return 0
    
    cnt = Counter(my_list)

    c1 = cnt[1]
    c2 = cnt[2]
    c3 = cnt[3]

    max_keep = max(c1,c3) + (1 if c2 > 0 else 0)

    return M - max_keep


if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        M = int(input())
        my_list = list(map(int, input().split()))
        result = function(my_list, M)
        print(result)

