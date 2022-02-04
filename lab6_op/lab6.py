def input_a():
    a = float(input('Input a: '))
    while a <= 0:
        a = float(input('Input correct a: '))
    return a




def newton_form(k: int, x, n: int):
    a = input_a()
    x1 = x
    for i in range(n):
        x1 = (1 / k) * ((x / (x1 ** (k - 1))) + x1 * (k - 1))
    return x1


func_t = (newton_form(3, a, 14) - (newton_form(6, ((a ** 2) + 1), 14)))
func_d = (1 + (newton_form(7, (3 + a), 14)))
print(func_t / func_d)
