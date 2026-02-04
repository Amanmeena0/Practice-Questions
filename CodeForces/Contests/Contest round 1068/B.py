import sys

def solve():
    # Use fast I/O for competitive programming
    input = sys.stdin.read
    data = input().split()
    
    iterator = iter(data)
    t = int(next(iterator))
    
    results = []
    
    for _ in range(t):
        n = int(next(iterator))
        
        # Read arrays a and b
        a = [int(next(iterator)) for _ in range(n)]
        b = [int(next(iterator)) for _ in range(n)]
        
        # Initialize current max and min scores
        cur_max = 0
        cur_min = 0
        
        for i in range(n):
            val_a = a[i]
            val_b = b[i]
            
            # Calculate candidates for the next step
            
            # Path 1: Choose Red (subtract a)
            # max comes from max, min comes from min
            res_from_red_max = cur_max - val_a
            res_from_red_min = cur_min - val_a
            
            # Path 2: Choose Blue (b minus score)
            # max comes from min (because of double negative), min comes from max
            res_from_blue_max = val_b - cur_min
            res_from_blue_min = val_b - cur_max
            
            # Update state
            cur_max = max(res_from_red_max, res_from_blue_max)
            cur_min = min(res_from_red_min, res_from_blue_min)
            
        results.append(str(cur_max))
        
    print('\n'.join(results))

if __name__ == '__main__':
    solve()