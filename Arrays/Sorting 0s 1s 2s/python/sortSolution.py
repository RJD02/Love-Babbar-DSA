#time complexity of O(N logN)
class Solution:
	def sort012(self,arr,n):
	    return arr.sort()

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
