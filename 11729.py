#BOJ Silver I - 하노이 탑 이동순서
#재귀

def hanoiTower(tower: list, departure, arrival, depth) -> list:
    if(depth == 1):
        hand = tower[departure].pop()
        tower[arrival].append(hand)
        print(departure + 1, arrival + 1)
        # print(tower)
    else:
        otherTowerIndex = 3 - arrival - departure
        tower = hanoiTower(tower, departure, otherTowerIndex, depth -1)
        tower = hanoiTower(tower, departure, arrival, 1)
        tower = hanoiTower(tower, otherTowerIndex, arrival, depth - 1)
    return tower

N = int(input())
board1 = list(range(N, 0, -1)) #1이 가장 큰거
board2 = list()
board3 = list()

hanoiTower([board1, board2, board3], 0, 2, N)