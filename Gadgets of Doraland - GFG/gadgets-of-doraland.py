#User function Template for python3

class Solution:
   def TopK(self, array, k):
        # code here
        d={}
        x=[]
        out=[]
        for i in array:
            if i in d:
                d[i] += 1
            else:
                d[i] = 1
        for i in d:
            x.append([i,d[i]])
        x.sort(reverse=True,key=lambda x:(x[1],x[0]))
        for i in range(k):
            out.append(x[i][0])
        return out


#{ 
#  Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        n = int(input())
        array = [int(x) for x in input().strip().split()]
        k = int(input())
        obj = Solution()
        res = obj.TopK(array, k)
        for each in res:
            print(each, end=' ')
        print()

# } Driver Code Ends