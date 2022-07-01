n, m, k = map(int, input().split())
print(min(abs(i) for i, a in enumerate(map(int, input().split()), 1 - m) if 0 < a <= k) * 10)
