#include <bits/stdc++.h>
using namespace std;


class Solution{   
public:
    int median(vector<vector<int>> &matrix, int r, int c){
        /*
        
        int min = INT_MAX, max = INT_MIN;

        for (int i = 0; i < r; i++)
        {
            if (matrix[i][0] < min)
            {
                min = matrix[i][0];
            }
            if (matrix[i][c - 1] > max)
            {
                max = matrix[i][c-1];
            }
               
        }

        
        int desiredValue = ((r * c) / 2) + 1;

        while (min < max)
        {
            int place = 0;
            int mid = (min + min)/ 2;
            for (int i = 0; i < r; i++)
            {
                place += (upper_bound(matrix[i].begin(), matrix[i].end(), mid)) - matrix[i].begin();
            }
            if(place < desiredValue)
            {
                min = mid + 1;
            }
            else
            {
                max = mid;
            }
        }
        
        */
        int req_val = (r * c) / 2;
        int temp = 0;
        vector<int> sortedArray;
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                temp = matrix[i][j];
                sortedArray.push_back(temp);
            }
            
        }
        sort(sortedArray.begin(), sortedArray.end());


        
        return sortedArray[req_val];

    }
};


int main()
{

    int r, c;
    cin>>r>>c;
    vector<vector<int>> matrix(r, vector<int>(c));
    for(int i = 0; i < r; ++i)
        for(int j = 0;j < c; ++j)
            cin>>matrix[i][j];
    Solution obj;
    cout<<obj.median(matrix, r, c)<<endl;        
    
    return 0;
}
