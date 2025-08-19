x = 0
listnum = []
listx = []

while x < 10:
    num = int(input())
    if num < 0 or num == 0:
        listnum += [1]
    else:
        listnum += [num]
    listx += [x]
    x += 1

for i in range(len(listx)):
    print(f"X[{listx[i]}] = {listnum[i]}")
