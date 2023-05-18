//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution {
    public:
    bool isValid(int i,int j,int n, int m,vector<vector<int>>& matrix){
        if(i>=0 && j>=0 && i<n && j<m && matrix[i][j]==1){
            return true;
        }
        return false;
    }
    void dfs(int i,int j,int n, int m,vector<vector<int>>& matrix){
        matrix[i][j]=0;
        int dx[4]={1,-1,0,0};
        int dy[4]={0,0,1,-1};
        for(int k=0;k<4;k++){
            int newX=i+dx[k];
            int newY=j+dy[k];
            if(isValid(newX,newY,n,m,matrix)){
                    dfs(newX,newY,n,m,matrix);
            }
        }
    }
    int closedIslands(vector<vector<int>>& matrix, int N, int M) {
        // Code here
        //boundary dfs
        for(int i=0;i<N;i++){
            for(int j=0;j<M;j++){
                if(i*j==0 || i==N-1 || j==M-1){
                   if(matrix[i][j]==1){
                       dfs(i,j,N,M,matrix);
                   } 
                }
            }
        }
        int ans=0;
        //call dfs in whole grid
        for(int i=0;i<N;i++){
            for(int j=0;j<M;j++){
                if(matrix[i][j]==1){
                    dfs(i,j,N,M,matrix);
                    ans++;
                }
            }
        }
        return ans;
    }
};



//{ Driver Code Starts.
int main() {
	int t;
	cin>>t;
	while(t--)
	{
        int N, M;
        cin >> N >> M;
        vector<vector<int>>matrix(N, vector<int>(M, 0));
        for(int i=0; i<N; i++)
            for(int j=0; j<M; j++)
                cin >> matrix[i][j];
                
        Solution obj;
        int ans = obj.closedIslands(matrix, N, M);
        cout << ans << "\n";
    }
	
	return 0;
	
}


// } Driver Code Ends