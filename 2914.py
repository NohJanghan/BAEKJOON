# BOJ Silver 4 - 크로아티아 알파벳
word = input()

count = 0
last_char = ''
croatia = (
    'c=', 'c-', 'dz=', 'd-', 'lj', 'nj', 's=', 'z='
)
croatia_possible = set(i[0] for i in croatia) |  set(i[0: 2] for i in croatia if len(i) > 2)

count = 0
for char in word:
    last_char += char
    if last_char in croatia_possible:
        pass
    elif last_char in croatia:
        count += 1
        last_char = ''
    else:
        if len(last_char) > 1: # last_char가 cd, ljh같은 경우
            count += len(last_char) - 1 # croatia에는 ab, abc같은 조합이 없으므로 가능
            last_char = last_char[-1]
        else:
            count += 1
            last_char = ''
count += len(last_char)
print(count)