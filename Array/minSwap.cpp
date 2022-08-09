#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minSwap(int arr[], int n, int k) { // n is the size of the array, k is the target.
        int count = 0;
        int bad = 0;
        
        for (int i = 0; i < n; i++)
        {
            if(arr[i] <= k) count++;
        }
        // cout << count << endl;
        for (int i = 0; i < count; i++)
        {
            if (arr[i] > k)
            {
                bad++;
            }
            
        }

        int ans = bad;
        for (int i = 0, j = count; j < n; i++, j++)
        {
            if(arr[j] > k) bad++;
            if(arr[i] > k) bad--;

            ans = min(ans, bad);
        }
        
        return ans;
        
        
    }
};

int main() {

	int t,n,k;
	
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cin>>k;
    Solution ob;
    cout << ob.minSwap(arr, n, k) << "\n";
    
	return 0;
}