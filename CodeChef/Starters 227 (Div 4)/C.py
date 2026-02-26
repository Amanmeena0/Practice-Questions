t = int(input())

for _ in range(t):
    
    N, K = map(int, input().split())
    prices = list(map(int, input().split()))
    S = input().strip()

    available_prices = []

    for i in range(N):
        
        if S[i] == '0':
            available_prices.append(prices[i])
    
    if len(available_prices) < K:
        print(-1)
        continue

    available_prices.sort()
    total_cost = sum(available_prices[:K])

    print(total_cost)