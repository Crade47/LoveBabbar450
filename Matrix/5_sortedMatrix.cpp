#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<vector<int>> sortedMatrix(int N, vector<vector<int>> Mat) {
        vector<vector<int>> sorted = Mat;
        vector<int> arrConv;
        int index = 0;
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                arrConv.push_back(Mat[i][j]);
            }
            
        }
        sort(arrConv.begin(), arrConv.end());

        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                sorted[i][j] = arrConv[index];
                index++;
            }
        }
        
        return sorted;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<vector<int>> v(N, vector<int>(N));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < N; j++) cin >> v[i][j];
        Solution ob;
        v = ob.sortedMatrix(N, v);
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) cout << v[i][j] << " ";
            cout << "\n";
        }
    }
}
// } Driver Code Ends