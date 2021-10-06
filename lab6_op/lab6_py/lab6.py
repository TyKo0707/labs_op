a = float(input('Введите значение а: '))
while a <= 0:
    a = float(input('Введите значение а правильно: '))


def newton_form(k, x, n):
    x1 = x
    for i in range(n):
        x1 = (1 / k) * ((x / (x1 ** (k - 1))) + x1 * (k - 1))
    return x1


func_t = (newton_form(3, a, 14) - (newton_form(6, ((a ** 2) + 1), 14)))
func_d = (1 + (newton_form(7, (3 + a), 14)))
print(func_t / func_d)
