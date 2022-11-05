class Solution:
    def segregateElements(self, arr, n):
        # Your code goes here
        pc = 0
        nc = 0
        p = []
        ne = []
        for i in range(n):
            if(arr[i]<0):
                nc+=1
                ne.append(arr[i])
            else:
                pc+=1
                p.append(arr[i])
        for j in range(nc):
            arr[j]=ne[j]
        for k in range(pc):
            arr[nc+k]=p[k]
        return arr
def main():
	T = int(input())
	while(T>0):
		n = int(input())
		a = [int(x) for x in input().strip().split()]
		ob = Solution()
		ob.segregateElements(a,n)
		print(*a)
		T-=1
if __name__ == "__main__":
	main()
