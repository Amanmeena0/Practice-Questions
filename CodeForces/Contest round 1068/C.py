import sys

# Increase recursion depth just in case, though not strictly needed for this iterative solution
sys.setrecursionlimit(2000)

def solve():
    # Fast I/O
    input = sys.stdin.read
    data = input().split()
    iterator = iter(data)
    
    try:
        num_test_cases = int(next(iterator))
    except StopIteration:
        return
        
    results = []
    
    for _ in range(num_test_cases):
        n = int(next(iterator))
        k = int(next(iterator))
        
        a = []
        for _ in range(n):
            a.append(int(next(iterator)))
        
        # We work with unique sorted elements to process from smallest to largest
        set_a = set(a)
        sorted_a = sorted(list(set_a))
        m_len = len(sorted_a)
        
        covered = set()
        ans = []
        possible = True
        
        for x in sorted_a:
            # If x is already covered by a previously chosen valid divisor, skip it
            if x in covered:
                continue
            
            # Heuristic Optimization: 
            # If the number of multiples of x (which is k // x) is greater than the total 
            # number of available elements in a, x cannot possibly be valid.
            # (Pigeonhole principle: we need space for k//x distinct multiples)
            if (k // x) > m_len:
                possible = False
                break
            
            # Check Validity: Are all multiples of x up to k present in a?
            is_valid_x = True
            # We iterate multiples: x, 2x, 3x...
            for val in range(x, k + 1, x):
                if val not in set_a:
                    is_valid_x = False
                    break
            
            if not is_valid_x:
                # x is not valid, and it wasn't covered by any smaller valid number.
                # Therefore, x has no valid divisors at all. Solution impossible.
                possible = False
                break
            
            # If x is valid, add to our result set
            ans.append(x)
            
            # Mark all multiples of x as covered
            for val in range(x, k + 1, x):
                # We only need to mark elements that actually exist in a
                if val in set_a:
                    covered.add(val)
        
        if possible:
            results.append(f"{len(ans)}")
            results.append(" ".join(map(str, ans)))
        else:
            results.append("-1")
            
    print('\n'.join(results))

if __name__ == '__main__':
    solve()