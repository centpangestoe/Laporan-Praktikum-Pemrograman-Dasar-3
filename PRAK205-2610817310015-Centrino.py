import math

data = []
while len(data) < 2:
    data = data + input().split()

A = int(data[0])
B = int(data[1])

alas = math.sqrt(B ** 2 - A ** 2)
tinggi = A
keliling = alas + tinggi + B
luas = 0.5 * alas * tinggi
 
print(f"Alas = {alas:g} cm")
print(f"Tinggi = {tinggi:g} cm")
print(f"Keliling = {keliling:g} cm")
print(f"Luas = {luas:g} cm^2")