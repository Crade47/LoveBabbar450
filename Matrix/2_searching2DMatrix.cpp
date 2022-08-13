#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int targetRow = 0;
        int oColumn = matrix[0].size();
        for (int i = 0; i < matrix.size(); i++)
        {
            if (matrix[i][0] == target || matrix[i][oColumn - 1] == target)
            {
                return 1;
            }

            if (matrix[i][0] < target && matrix[i][oColumn - 1] > target)
            {
                targetRow = i;
            }   
        }
        
        for (int i = 0; i < oColumn; i++)
        {
            if (matrix[targetRow][i] == target)
            {
                return 1;
            }
            
        }
        
        return 0;
        
    }
};


int main(){
    int r,c, target;
    cin>>r>>c>>target;
    vector<vector<int> > matrix(r); 

    for(int i=0; i<r; i++)
    {
        matrix[i].assign(c, 0);
        for( int j=0; j<c; j++)
        {
            cin>>matrix[i][j];
        }
    }
    Solution ob;
    ob.searchMatrix(matrix, target) == 1 ? cout << "True" : cout << "False";
return 0;
}