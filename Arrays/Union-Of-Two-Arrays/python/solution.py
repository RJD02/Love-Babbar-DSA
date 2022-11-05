class Solution:
	def doUnion(self,a,b,n,m):
		ans = a+b
		ans = set(ans)
		return len(ans)
if __name__ == "__main__":
	t = int(input())
	for _ in range(t):
		n,m=[int (x) for x in input().strip().split()]
		a = [int (x) for x in input().strip().split()]
		b = [int (x) for x in input().strip().split()]
		ob=Solution()
		print(ob.doUnion(a,b,n,m))
