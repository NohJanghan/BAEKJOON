#BOJ Silver Iv - 카드 2
import sys
input = sys.stdin.readline

def do(deckList :list, start = 1) -> list: #시행
    initLen = len(deckList)

    if initLen == 1:
        return deckList
    elif initLen % 2: #odd
        newDeck = list(deckList[start::2])
        if start == 1:
            start = 0
        else:
            start = 1
        return do(newDeck, start)
    else: #even
        newDeck = list(deckList[start::2])
        return do(newDeck, start)
    

N = int(input())
deck = list(range(1, N+1)) #[0]위->[N-1]아래

resDeck = do(deck)
print(resDeck[0])