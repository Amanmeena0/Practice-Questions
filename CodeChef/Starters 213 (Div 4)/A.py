def function(N:int,K:int,R:int):
    remaining = abs(N - K)
    return R*remaining

if __name__ == "__main__":
    N,K,R = map(int, input().split())
    result = function(K,N,R)
    print(result)