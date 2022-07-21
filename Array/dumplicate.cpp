#include<bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int> &nums);
int main(){

	vector<int> nums{3,1,3,4,2};
	int duplicates = findDuplicate(nums);
	cout << duplicates<<endl;
	
}

int findDuplicate(vector<int> &nums){
    unordered_map<int,int> frequency;
    int duplicate;

    for(int i = 0; i < nums.size(); i++)
    {
    	frequency[nums[i]]++;
    }

    for(auto it : frequency)
    {
    	if(it.second > 1)
    	{
    		duplicate = it.first;
    	}
    }

    return duplicate;
    
}