#include <bits/stdc++.h>
using namespace std;
int median(vector<int> &array1, vector<int> &array2);
int main(){
    int size1, size2;
    cin >> size1;
    cin >> size2;
    vector<int> arr1, arr2;
    for (int i = 0; i < size1; i++)
    {   
        int temp;
        cin >> temp;
        arr1.push_back(temp);
    }
    for (int i = 0; i < size2; i++)
    {
        int temp;
        cin >> temp;
        arr2.push_back(temp);
    }
    
    int ans = median(arr1, arr2);
    cout << ans << endl;
    
return 0;
}

int median(vector<int> &array1, vector<int> &array2){

    if(array2.size() < array1.size()) return median(array2, array1);
    int n1 = array1.size();
    int n2 = array2.size();
    int low = 0, high = n1;
    while (low <= high)
    {
        int cut1 = (low + high) / 2;
        int cut2 = (n1 + n2 + 1) / 2 - cut1;

        int left1 = cut1 == 0 ? INT_MIN : nums1[cut1 - 1];
        int left2 = cut2 == 0 ? INT_MIN : nums2[cut2 - 1];
        int right1 = cut1 == n1 ? INT_MAX : nums1[cut1];
        int right2 = cut2 == n2 ? INT_MAX : nums2[cut2];

        if(left1 <= right2 && left2 <= right1){
            if((n1 + n2) % 2 == 0)
            {
                return (max(left1, left2) + min(right1, right2)) / 2.0;
        
            }

            else
            {
                return max(left1, left2);
            }

        }

        else if(left1 > right2){
            high = cut1 - 1;
        }

        else{
            low = cut1 + 1;
        }
    }
    return 0.0;
    

}