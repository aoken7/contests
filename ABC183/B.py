sx, sy, gx, gy = map(int,input().split())

def calc_slope_intersept(x1, y1, x2, y2):
    a = (y1 - y2) / (x1 - x2)
    b = y1 - a * x1
    return (a, b)

a, b = calc_slope_intersept(sx, sy, gx, -gy)

print((-b) / a)