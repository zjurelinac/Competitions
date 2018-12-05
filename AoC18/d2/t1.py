from collections import Counter
from functools import reduce

a, b = reduce(lambda x, y: (int(x[0]) + int(y[0]), int(x[1]) + int(y[1])), map(lambda c: (2 in c, 3 in c), (Counter(l).values() for l in open('1.in').readlines())))
print(a*b)
