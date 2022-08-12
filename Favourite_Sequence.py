for _ in range(int(input())):
	n = int(input())
	a = list(map(int, input().split()))
	for i in range(n//2):
		print(a[i],a[-1-i],end=" ")
	if(n%2):
		print(a[n//2],end="")
	print()
