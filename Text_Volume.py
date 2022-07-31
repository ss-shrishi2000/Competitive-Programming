input()
print(max(map(lambda x: sum(c.isupper() for c in x), input().split())))
