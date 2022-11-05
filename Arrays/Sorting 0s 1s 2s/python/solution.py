class Solution:
	def sort012(self,arr,n):
		z=arr.count(0)
		o=arr.count(1)
		t=arr.count(2)
		arr.clear()
		for i in range(z):
			arr.append(0)
		for j in range(o):
			arr.append(1)
		for k in range(t):
			arr.append(2)

if __name__ == '__main__':
	t = int(input())
	for _ in range(t):
		n=int(input())
		arr = [int (x) for x in input().strip().split()]
		ob=Solution()
		ob.sort012(arr,n)
		for i in arr:
			print(i,end=' ')
		print()
