//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // code here 
      int temp=0;
      int count=0;
      for(int i=0;i<n;i++)
      {
          if(a[i]==0)
          {
              if(count!=i)
              {
                  int temp=a[count];
                  a[count]=a[i];
                  a[i]=temp;
              }
              count++;
          }
      }
        for(int i=0;i<n;i++)
      {
          if(a[i]==1)
          {
              if(count!=i)
              {
                  int temp=a[count];
                  a[count]=a[i];
                  a[i]=temp;
              }
              count++;
          }
      }
      for(int i=0;i<n;i++)
      {
          if(a[i]==2)
          {
              if(count!=i)
              {
                  int temp=a[count];
                  a[count]=a[i];
                  a[i]=temp;
              }
              count++;
          }
      }
    }
    
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}


// } Driver Code Ends