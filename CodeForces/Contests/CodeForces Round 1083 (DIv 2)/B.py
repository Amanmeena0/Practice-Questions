import sys

def solve():


    line = sys.stdin.read().split()

    if not line: return

    t = int(line[0])

    idx = 1

    results = []

    for _ in range(t):

        n = int(line[idx])
        idx += 1

        k = 1
        d = 2

        temp_n = n

        while d * d <= temp_n:
            if temp_n % d == 0:
                k *= d
                while temp_n % d == 0:
                    temp_n //= d

            d += 1
        if temp_n > 1:
            k *= temp_n
            
        results.append(str(k))

    print("\n".join(results))


if __name__ == "__main__":
    solve()