import sys

def solve():

    input_data = sys.stdin.read().split()

    if not input_data:
        return 
    

    t = int(input_data[0])

    pointer = 1

    results = []

    for _ in range(t):

        n = int(input_data[pointer])

        p = list(map(int, input_data[pointer +1: pointer + 1+ n]))
        pointer += 1 + n

        idx_of_n = 0

        for i in range(n):
            if p[i] == n:
                idx_of_n = i
                break


        p[0], p[idx_of_n] = p[idx_of_n],p[0]

        results.append(" ".join(map(str, p)))


    print("\n".join(results))

if __name__ == "__main__":
    solve()