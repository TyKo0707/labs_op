for i in range(100):
    if int(i / 10) == i % 10 or i < 10:
        powr = i ** 2
        for z in range(len(str(powr))):
            if int(powr / 10) == powr % 10 or int(powr / 100) == powr % 10 or len(str(powr)) == 1:
                print(i)
                break
