def rotate(arr,n):
	temp = arr[n-1] #storing last number in a variable
	for i in range(n-1,0,-1):
		arr[i] = arr[i-1]
	arr[0] = temp
	#running a for loop from total size-1 to 0 and swapping/replacing the value
if __name__ == "__main__":
	t = int(input())
	while(t>0):
		t-=1
		n=int(input())
		arr = [int (x) for x in input().strip().split()]
		rotate(arr,n)
		print(*arr)
