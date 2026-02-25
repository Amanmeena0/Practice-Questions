t = int(input())

for _ in range(t):
    
    N, K = map(int, input().split())
    prices = input().split()
    S = input()
    totalCost = 0

    if K > N:
        print(-1)

    for i in range(1,N):
        
        if S[i] == 0:
            cost += N[i]
            K -= 1

    if K == 0:
        print(cost)
    else: 
        print(-1)