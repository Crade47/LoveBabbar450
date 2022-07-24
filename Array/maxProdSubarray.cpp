#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long maxProduct(vector<int> arr, int n);
};



int main(){
        int n, i;

        cin >> n;
        vector<int> arr(n);
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }

        Solution ob;
        auto ans = ob.maxProduct(arr, n);
        cout << ans << "\n";
    
return 0;
}


//O(n) time complexity and O(1) Space complexity
long long Solution :: maxProduct(vector<int> arr, int n){ 
    //n is the size
    long long maxProduct = INT_MIN, tmp = 0;
    long long current_max = 1, current_min = 1;
    for (int i = 0; i < n; i++)
    {   
        tmp = max({1LL*arr[i], 1LL*arr[i] * current_max, 1LL*arr[i] * current_min}); //1*LL is to convert integer into longlong

        current_min = min({1LL*arr[i], 1LL*arr[i] * current_max, 1LL*arr[i] * current_min});

        current_max = tmp;
        maxProduct = max(maxProduct, current_max);
    }
    return maxProduct;
}