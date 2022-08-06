#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
        sort(a.begin(), a.end());

        int i = 0;
        long long ans = LLONG_MAX, value = 0;
        while((i + m - 1) < n)
        {
            value = a[i + m - 1] - a[i] ;
            ans = min(value, ans);
            i++;
        }
        return ans;
    
    }   
};

int main(){

    vector<long long> a;
    long long size, students;
    cin >> size;
    cin >> students;

    for (int i = 0; i < size; i++)
    {
        int temp;
        cin >> temp;
        a.push_back(temp);
    }
    Solution ob;
    long long ans = ob.findMinDiff(a, size, students);
    cout << ans;

return 0;
}