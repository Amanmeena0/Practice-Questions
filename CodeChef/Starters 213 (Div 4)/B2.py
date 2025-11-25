def function(x:int, y:int)->int:
    
    moves = 0
    if x < y:
        moves = x
    else:
        moves = x // y
        left = x % y
        moves+=left
    return moves
    
if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        X,Y = map(int, input().split())
        result = function(X,Y)
        print(result)