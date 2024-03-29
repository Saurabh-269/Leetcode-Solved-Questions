//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
   bool isStraightHand(int N, int groupSize, vector<int> &hand) {
        unordered_map<int, int> mp;
        for(int a : hand) mp[a]++;
        sort(hand.begin(), hand.end());
        for(int i= 0; i<N; i++){
            if(mp[hand[i]] != 0){
                for(int k=hand[i]; k<hand[i]+groupSize; k++){
                    if(mp[k] <= 0) return false;
                    mp[k]--;
                }
            }
        }
        return true;
    }

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, groupSize;
        cin >> N >> groupSize;

        vector<int> hand(N);
        for (int i = 0; i < N; i++) cin >> hand[i];

        Solution obj;
        int ans = obj.isStraightHand(N, groupSize, hand);
        if (ans)
            cout << "True" << endl;
        else
            cout << "False" << endl;
    }
    return 0;
}
// } Driver Code Ends