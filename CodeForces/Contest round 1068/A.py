import sys

def solve():
    # Reading input efficiently
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
        s = next(iterator)

        awake_count = 0
        cooldown = 0

        for char in s:
            if char == '1':
                # It's an important class, must stay awake
                awake_count += 1
                # Reset the forced awake timer to k
                cooldown = k
            else:
                # It's not important
                if cooldown > 0:
                    # But we are forced to stay awake due to previous class
                    awake_count += 1
                    cooldown -= 1
                else:
                    # Not important and no cooldown -> Sleep
                    pass

        # Calculate sleeping classes
        sleeping_classes = n - awake_count
        results.append(str(sleeping_classes))

    print('\n'.join(results))

if __name__ == "__main__":
    solve()