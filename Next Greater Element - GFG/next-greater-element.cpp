//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        // Your code here  
        vector<long long>rem;
        stack<long long>temp;
        for(int i=arr.size()-1;i>=0;i--)
        {
         if(temp.empty())   
            rem.push_back(-1);
         else if(temp.top()>arr[i])
         rem.push_back(temp.top());
         else
         {
             while(!temp.empty()&&temp.top()<=arr[i])
             temp.pop();
             if(temp.empty())
             rem.push_back(-1);
             else
             rem.push_back(temp.top());
         }
         temp.push(arr[i]);
        }
        reverse(rem.begin(), rem.end());
        return rem;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        
        int n;
        cin>>n;
        vector<long long> arr(n);
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        Solution obj;
        vector <long long> res = obj.nextLargerElement(arr, n);
        for (long long i : res) cout << i << " ";
        cout<<endl;
    }
	return 0;
}
// } Driver Code Ends