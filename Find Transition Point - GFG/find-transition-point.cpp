//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int transitionPoint(int arr[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], i;
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        cout << transitionPoint(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends


int transitionPoint(int arr[], int n) {
    // code here
    if(n==1&&arr[0]==1)
    return 0;
    else if(n==1&&arr[0]==0)
    return -1;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]!=arr[i+1])
        return i+1;
    }
    if(arr[0]==1)
    return 0;
    else
    return -1;
}