a = float(input("Введите значение а: "))
while a < 0:
    a = float(input("Введите значение а правильно: "))

x = float(input("Введите значение x: "))
while x < 0:
    a = float(input("Введите значение x правильно: "))

n = int(input("Введите значение n: "))

prev = 0.5 * (a + (x / a))

for i in range(1, n + 1):
    if i == 1:
        function = prev
    else:
        function = 0.5 * (prev + (x / prev))
        prev = function
    if i == n:
        print(function)