for _ in range(int(input())):
    a,b,c,x,y= map(int, input().split())
    print("YES" if a+b+c>=x+y and a+c>=x and b+c>=y else "NO")
