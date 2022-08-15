I=input
for _ in' '*int(I()):
    n,k=map(int,I().split())
    s=I()
    print('YNEOS'[2*k==n or s[:k]!=s[-1:-k-1:-1]::2])
