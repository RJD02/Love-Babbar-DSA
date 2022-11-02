def getMinMax(a,n):
	maxi = max(a)
	mini = min(a)
	return mini,maxi

if __name__ == "__main__":
	t = int(input())
	while(t>0):
		n = int(input())
		a = [int (x) for x in input().strip().split()]
		product = getMinMax(a,n)
		print(product[0],end = " ")
		print(product[1])
		t-=1
