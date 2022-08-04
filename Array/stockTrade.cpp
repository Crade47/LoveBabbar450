#include <bits/stdc++.h>
using namespace std;
class Solution
{
    public:
        int maxProfit(vector<int> arr);
};
int main(){

    vector<int> arr;
    int size;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        int a;
        cin >> a;
        arr.push_back(a);
    }
    Solution s1;
    int ans = s1.maxProfit(arr);
    cout << ans;

return 0;
}

int Solution :: maxProfit(vector<int> arr){

    int firstBuy = INT_MIN;
    int firstSell = 0;
    int secondBuy = INT_MIN;
    int secondSell = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        firstBuy = max(firstBuy, -arr[i]);
        firstSell = max(firstSell, firstBuy + arr[i]);
        secondBuy = max(secondBuy, firstSell - arr[i]);
        secondSell = max(secondSell, secondBuy + arr[i]);
    }
    
    return secondSell;

}