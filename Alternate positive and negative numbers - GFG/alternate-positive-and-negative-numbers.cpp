//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:

	void rearrange(int arr[], int n) {
	    // code here
	    vector<int>nums1;
	    vector<int>nums2;
	    int temp1=0,temp2=0,rem=0;
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]>=0)
	        nums1.push_back(arr[i]);
	        else
	        nums2.push_back(arr[i]);
	    }
	    for(int i=0;i<n;i++)
	    {
	        if(temp1==nums1.size())
	        {
	            rem=i;
	            break;
	        }
	        else if(temp2==nums2.size())
	        {
	            rem=i;
	            break;
	        }
	        if(i%2==0)
	        {
	            arr[i]=nums1[temp1];
	            temp1++;
	        }
	        else if(i%2!=0)
	        {
	            arr[i]=nums2[temp2];
	            temp2++;
	        }
	    }
	    if(temp2==nums2.size()&&temp1!=nums1.size())
	    {
	        while(temp1!=nums1.size())
	        {
	            arr[rem]=nums1[temp1];
	            temp1++;
	            rem++;
	        }
	    }
	    	    if(temp1==nums1.size()&&temp2!=nums2.size())
	    {
	        while(temp2!=nums2.size())
	        {
	            arr[rem]=nums2[temp2];
	            temp2++;
	            rem++;
	        }
	    }
	    
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.rearrange(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends