
def max_cost(n: int) -> int:
    if n == 1:
        return 1
    if n == 2:
        return 9
    interior = 5 * (n*n - n - 1)
    edge_best = 4 * n*n - n - 4
    return max(interior, edge_best)

t = int(input())
for _ in range(t):
    n = int(input())
    result = max_cost(n)
    print(result)


