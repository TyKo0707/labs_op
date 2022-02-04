# def split_str(s: str, delim: str):
#     arr = []
#     st_l = s + ' '
#     while st_l != '':
#         token = st_l[0:st_l.find(delim)]
#         arr.append(token)
#         st_l = st_l[st_l.find(delim) + 1::]
#
#     return arr
#
#
# def checker(arr, a, b):
#     res = []
#     for i in range(len(arr)):
#         if arr[i][0] == a and arr[i][-1] == b:
#             res.append(arr[i])
#
#     return res
#
#
# if __name__ == '__main__':
#     string = str(input('Input string: '))
#     delimiter = ' '
#     words = split_str(string, delimiter)
#     a = str(input('Input start letter: '))
#     b = str(input('Input finish letter: '))
#     result = checker(words, a, b)
#     print(f'All words, that starts with {a} and finishes with {b}: ', result)


def lab9(cum):
    l = cum.split()
    max_n = 0
    for k in range(len(l)):
        loc_max = 1
        for i in range(len(l)):
            if i != len(l) - 1 and l[k][0] == l[i + 1][0] and l[k][-1] == l[i + 1][-1]:
                loc_max += 1

        if loc_max > max_n:
            max_n = loc_max

    return max


a = str(input('Input string: '))
print(lab9(a))
