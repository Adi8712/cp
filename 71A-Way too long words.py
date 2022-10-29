t = int(input())
l = []

for i in range(t):
    w = input()
    if len(w) > 10 :
        l.append(w[0] + str(len(w)-2) + w[-1])
    else :
        l.append(w)
for i in l:
    print(i)
