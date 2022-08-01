#BOJ Bronze 3 - 직사각형에서 탈출
X, Y, W, H = map(int, input().split())

isOverVertical, isOverHorizontal = False, False
if 0 < X < W:
    isOverHorizontal = False
else:
    isOverHorizontal = True

if 0 < Y < H:
    isOverVertical = False
else:
    isOverVertical = True

distance = 987654321
if isOverHorizontal and isOverVertical:
    distance = (X ** 2 + Y ** 2) ** 0.5
    distance = min(distance, (X ** 2 + (Y - H) ** 2) ** 0.5)
    distance = min(distance, ((X - W) ** 2 + Y ** 2) ** 0.5)
    distance = min(distance, ((X - W) ** 2 + (Y - H) ** 2) ** 0.5)
if not isOverHorizontal:
    distance = min(abs(Y), abs(Y - H))
if not isOverVertical:
    distance = min(distance, abs(X), abs(X - W)) #isOverHorizontal이 False일 수 있으므로 distance도 인자로 넘겨야함

print(distance)