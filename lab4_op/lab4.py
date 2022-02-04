while True:

    a = float(input("Введите значение а: "))

    x = float(input("Введите значение x: "))

    n = int(input("Введите значение n: "))

    if a < 0 or x < 0 or n < 0:

        print('Введено некорректное значение!')

    else:

        prev = 0.5 * (a + (x / a))

        function = 0

        for i in range(1, n + 1):
            if i == 1:
                function = prev
            else:
                function = 0.5 * (prev + (x / prev))
                prev = function

        print(function)






