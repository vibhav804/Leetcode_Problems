#User function Template for python3

#User function Template for python3

class Solution:
    def countMin(self, S):
        # code here
        n = len(S)
        dp = [[0]*n for i in range(n)]
        for i in range(n-1, -1, -1):
            for j in range(0, n):
                if(i >= j):
                    dp[i][j] = 0 
                elif(S[i] == S[j]):
                    dp[i][j] = dp[i+1][j-1]
                else:
                    dp[i][j] = 1+ min(dp[i+1][j], dp[i][j-1])
        return (dp[0][n-1])

#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':

    t = int(input())

    for _ in range(t):
        Str = input()
        

        solObj = Solution()

        print(solObj.countMin(Str))
# } Driver Code Ends