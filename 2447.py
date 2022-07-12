#BOJ Silver I - 별 찍기 - 10
#재귀

def starPaint(a):
    if a == 3:
        paint = list()
        paint.append("***")
        paint.append("* *")
        paint.append("***")
    else:
        smallPaint = starPaint(a//3)
        
        paint = list()
        for i in range(len(smallPaint)):
            #이전의 행 하나 당 행 세개
            paint.append(str())
            paint.append(str())
            paint.append(str())
            for char in smallPaint[i]: #각 행의 문자에 대해
                if char == '*':
                    paint[i*3 + 0] = paint[i*3 + 0] + '***'
                    paint[i*3 + 1] = paint[i*3 + 1] + '* *'
                    paint[i*3 + 2] = paint[i*3 + 2] + '***'
                elif char == ' ':
                    paint[i*3 + 0] = paint[i*3 + 0] + ' ' *3
                    paint[i*3 + 1] = paint[i*3 + 1] + ' ' *3
                    paint[i*3 + 2] = paint[i*3 + 2] + ' ' *3
    return paint

 

N = int(input())
res = starPaint(N)

for i in res:
    print(i)