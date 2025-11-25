def function(matric: list[list[int]])->int:
    row = len(matric)
    current_max_speed = matric[0][0]/matric[0][1]
    fastest = 0
    for r in range(1,row):
        current_speed = matric[r][0]/matric[r][1]

        if current_speed > current_max_speed:
            current_max_speed = current_speed
            fastest = r    

    return fastest+1


if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        N = int(input())
        matrix = [list(map(int,input().split())) for _ in range(N)]
        print(function(matrix))
