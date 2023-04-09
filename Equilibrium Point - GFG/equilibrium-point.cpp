//{ Driver Code Starts
#include <iostream>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
    
        // Your code here
        int temp=0;
        int temp1=n-1;
        int sum=a[temp];
        int sum1=a[temp1];
        if(n==1)
        return 1;
        while(temp1-temp!=1)
        {
            if(sum<sum1)
            {
                temp++;
                sum=sum+a[temp];
            }
            else if(sum>sum1)
            {
                temp1--;
                sum1=sum1+a[temp1];
            }
            else if((sum==sum1)&&(temp1-temp==2))
            {
                 return temp+2;
            }
         else if((sum==sum1)&&(temp1-temp!=2))
            {
                temp++;
                temp1--;
                sum1=sum1+a[temp1];
                sum=sum+a[temp];
            }
            
        }
        return -1;
    }

};

//{ Driver Code Starts.


int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        Solution ob;

        //calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends