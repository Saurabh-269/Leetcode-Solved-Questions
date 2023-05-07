class Solution:
    def stringMirror(self, str : str) -> str:
        # code here
        new_string = ''
        ans = ''
        new_string=str[0]
        for i in range(1,len(str)):
            if str[i-1]>=str[i] and str[0]!=str[1]:
                new_string=new_string+str[i]
            else:
                break
        
        ans = new_string
        for i in range(len(new_string)-1,-1,-1):
            new_string+=ans[i]
        return new_string
        # code here
        



#{ 
 # Driver Code Starts
if __name__=="__main__":
    t = int(input())
    for _ in range(t):
        
        str = (input())
        
        obj = Solution()
        res = obj.stringMirror(str)
        
        print(res)
        

# } Driver Code Ends