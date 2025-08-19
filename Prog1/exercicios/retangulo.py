x1, y1 = map(float, input().split())
x2, y2 = map(float, input().split())
x3, y3 = map(float, input().split())

if x1 <= x3 <= x2 and y1 >= y3 >= y2:
    print("S")
else: 
    print("N")