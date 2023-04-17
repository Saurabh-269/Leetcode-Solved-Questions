//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    void findsubsetsum(int ind,stack<int>&s1,vector<int>&ds,vector<int>&arr,int N, int sum)
    {
        if(ind==N)
        {
            ds.push_back(sum);
            return;
        }
        s1.push(arr[ind]);
        findsubsetsum(ind+1,s1,ds,arr,N,sum+s1.top());
        s1.pop();
        findsubsetsum(ind+1,s1,ds,arr,N,sum);
    }
public:
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        vector<int>ds;
        stack<int>s1;
        findsubsetsum(0,s1,ds,arr,N,0);
        return ds;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends