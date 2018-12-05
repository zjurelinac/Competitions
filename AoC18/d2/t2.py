ids = sorted(l.strip() for l in open('1.in'))
n = len(ids[0])
print(list(filter(lambda x: len(x) == n-1, [''.join(a if a == b else '' for a, b in zip(s1, s2)) for s1, s2 in zip(ids, ids[1:])]))[0])