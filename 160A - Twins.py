input()
l = sorted(map(int, raw_input().split()))
m = sum(l) * 1.0 / 2
s = 0
n = 0
while s <= m:
  s += l.pop()
  n += 1
print n
