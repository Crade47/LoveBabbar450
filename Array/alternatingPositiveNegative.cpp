#include <iostream>
#include <vector>
using namespace std;


class Solution
{
public:
    void alternateArray(vector<int> &arr);
};

void rightRotate(vector<int> &arr, int outOfPlace, int nextElement)
{
    int temp = arr[nextElement];
    for(int i = nextElement; i > outOfPlace; i--)
    {
        arr[i] = arr[i - 1];
    }
   
        arr[outOfPlace] = temp;
}

int main(){
    vector<int> arr = {-5, -2, 5, 2, 4, 7, 1, 8, 0, -8};
    Solution s1;

    cout << "BEFORE:" << endl;
    for(auto i : arr)
    {
        cout << i << " ";
    }

    s1.alternateArray(arr);

    cout << "\nAFTER:" << endl;
    for(auto i : arr)
    {
        cout << i << " ";
    }

return 0;
}

void Solution :: alternateArray(vector<int> &arr){

    int outOfPlace, nextElement = 0;
    int k = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        if((i%2 == 0) && (arr[i] >= 0))
        {
            outOfPlace = i;
            k = outOfPlace;
            while (k < arr.size())
            {
                if(arr[k] < 0)
                {
                    nextElement = k;
                    break;
                }
                k++;
            }
            if(k >= arr.size()) break;
            else rightRotate(arr, outOfPlace, nextElement);
            
        }

        if((i%2 > 0) && (arr[i] < 0))
        {
            outOfPlace = i;
            k = outOfPlace;
            while (k < arr.size())
            {
                if(arr[k] > 0)
                {
                    nextElement = k;
                    break;
                }
                k++;
            }
            if(k >= arr.size()) break;
            else rightRotate(arr, outOfPlace, nextElement);
            
        }
    }
    
    
}