def max_score(n, s):
    if s <= 5 * n:
        return 6 * n 
    
    else:

        k = s- 5 * n
        return 6 * n - k
    

if __name__ == "__main__":
    t  = int(input().strip())
    for _ in range(t):
        n, s = map(int, input().split())

        print(max_score(n,s))