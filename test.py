#1712

fixed, variable, price = map(int, input().split())


production = 0
if price <= variable and fixed > 0:
    print('-1')
else:
    boo = fixed/(price-variable)
    N = int(boo+1)
    print(N)