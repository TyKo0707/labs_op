import math
x = float(input('Введите значение х: '))
e = 10**-4

while not (0 <= x <= 5):
    x = float(input('Х не пренадлежит промежутку [0, 5]. Введите значение х ещё раз: '))

curr_res = 1
prev_res = 1
summ = 1
n = 1

while True:
    if prev_res != 0:
        prev_res = curr_res
        curr_res = (x ** (4 * n)) / math.factorial(4 * n)
        summ += curr_res
        absl = abs(prev_res - curr_res)
        n += 1
        if absl <= e:
            break

print(summ)


