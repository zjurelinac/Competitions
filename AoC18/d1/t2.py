from itertools import accumulate, cycle
from functools import reduce

s = set()
print(reduce(lambda r, t: r if r else (t if t in s else s.add(t)), accumulate(cycle(int(l) for l in open('1.in').readlines()))))
