#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> moreThanNbyK(int arr[], int size, int key);
};
int main(){

    int key, size;
    Solution s1;
    cin >> key >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    vector<int> ans = s1.moreThanNbyK(arr, size, key);
    
    for (auto &&i : ans)
    {
        cout << i << " ";
    }
    

return 0;
}

vector<int> Solution :: moreThanNbyK(int arr[], int size, int key){
    int x = size / key;
    vector<int> ans;
    map<int, int> map;
    for (int i = 0; i < size; i++)
    {
            map[arr[i]]++;
    }

    for (auto &&i : map)
    {
        // cout << i.first << " " << i.second << "\n";
        if (i.second > x)
        {
            ans.push_back(i.first);
        }
        
    }
    
    return ans;
}