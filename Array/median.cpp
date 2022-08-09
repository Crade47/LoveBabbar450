//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
	public:
		int find_median(vector<int> v)
		{
		    int n = v.size() / 2;
		    sort(v.begin(), v.end());
		    if (v.size() % 2 == 0)
            {
                return((v[n] + v[n - 1]) / 2);
            }
            else
            {
                return v[n];
            }
            
		}
};

//{ Driver Code Starts.
int main(){

    int n; 
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++)
        cin>>v[i];
    Solution ob;
    int ans = ob.find_median(v);
    cout << ans <<"\n";
    
	return 0;
}