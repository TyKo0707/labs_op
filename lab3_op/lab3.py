import math
while True:
    x = float(input('Введите значение х: '))
    while not 0 <= x <= 5:
        x = float(input('Х не пренадлежит промежутку [0, 5]. Введите значение х ещё раз: '))
    e = 10**-4
    curr_res = 1
    prev_res = 0
    summ = 1
    n = 1
    fact = 1
    ind = 1

    while abs(prev_res - curr_res) > e:
        for i in range(ind, n * 4 + 1):
            fact *= i
            ind += 1
        prev_res = curr_res
        curr_res = (x ** (4 * n)) / fact
        summ += curr_res
        n += 1


    print(summ)


