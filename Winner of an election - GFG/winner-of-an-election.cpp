//{ Driver Code Starts
#include <iostream>
#include <map>
#include <algorithm>
#include <cstdlib>
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{
  public:
  
    //Function to return the name of candidate that received maximum votes.
    vector<string> winner(string arr[],int n)
    {
        vector<string>ans;
        int max=0;
        map<string,int>umap;
        for(int i=0;i<n;i++)
        {
            umap[arr[i]]++;
        }
        int i=0;
         for(auto it=umap.begin();it!=umap.end();it++)
        {
            if(it->second>max)
            {
                if(i==0)
                {
                max=it->second;
                ans.push_back(it->first);
                ans.push_back(to_string(it->second));
                i=1;
                }
                else
                {
                ans.pop_back();
                ans.pop_back();
                max=it->second;
                ans.push_back(it->first);
                ans.push_back(to_string(it->second)); 
                }
            }
        }
        return ans;
        // Your code here
        // Return the string containing the name and an integer
        // representing the number of votes the winning candidate got
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    
    for(int i=0;i<t;i++)
    {
        
        
        int n;
        cin>>n;
        
        string arr[n];
        
        for (int i=0;i<n;i++)
        cin>>arr[i];
        Solution obj;
        vector<string> result = obj.winner(arr,n);
        
        cout<<result[0] << " " << result[1] << endl;
    }
    return 0;
}

// } Driver Code Ends