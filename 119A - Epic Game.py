from fractions import gcd
a, b, n = map(int, raw_input().split())
p = [b, a]
t = 1
k = a
while n - gcd(n, k) >= 0:
  n -= gcd(n, k)
  t = 1 - t
  k = p[t]
print t
