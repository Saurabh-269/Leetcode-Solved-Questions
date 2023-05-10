//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
    bool isPallindrome(string &s, int &n){
        int i = 0, j = n-1;
        
        while(i < j){
            if(s[i] == '?' || s[j] == '?' || s[i] == s[j]){
                // matched
                i++;
                j--;
            }
            else return false;
        }
        
        return true;
    }
  public:
    int minimumSum(string s) {
        int n = s.size();
        // check for pallindrome
        if(!isPallindrome(s, n)) return -1;
        
        int i = 0, j = n-1;
        
        // if any compliment in pallindrome is character, then make both equal
        // a--a---, then make a--a--a 
        while(i < j){
            if(s[i] == '?' && s[j] == '?'){
                // do nothing
            }
            else if(s[i] == '?') s[i] = s[j];
            else if(s[j] == '?') s[j] = s[i];
            
            i++; j--;
        }
        
        // now calculate difference
        
        int sum = 0;
        
        for(int i = 1; i <= n/2; i++){
            if(s[i] == '?'){
                s[i] = s[i-1];
            }
            else if(s[i-1] != '?') {
                sum += abs(s[i]-s[i-1]);
            }
        }
        
        return sum*2;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        Solution ob;
        int ans = ob.minimumSum(s);
        cout << ans;
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends