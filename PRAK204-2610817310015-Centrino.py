PI = 22 / 7 

data = []
while len(data) < 2:
    data = data + input().split()

r = float(data[0])
t = float(data[1])

volume = PI * r * r * t
luas = 2 * PI * r * (r + t)
keliling = 2 * PI * r

print(f"Volume: {volume:.2f}")
print(f"Luas: {luas:.2f}")
print(f"Keliling: {keliling:.2f}")