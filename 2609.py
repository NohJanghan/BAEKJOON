def gcm(a: int, b: int):
    factorA = set()
    for i in range(1, a + 1):
        if a % i == 0:
            factorA.add(i)
    
    factorAB = set()
    for i in factorA:
        if b % i == 0:
            factorAB.add(i)
    
    return max(factorAB)

a, b = map(int, input().split())

gcmOfAB = gcm(a, b)
print(gcmOfAB)
print(a*b//gcmOfAB)