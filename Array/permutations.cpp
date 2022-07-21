#include<bits/stdc++.h>
using namespace std;

void nextPermutation(vector<int>& nums);
void display(vector<int> array);
int main(){

	vector<int> array{2, 3, 1};
	nextPermutation(array);
	// next_permutation(array.begin(), array.end());

	display(array);

}

void nextPermutation(vector<int>& nums){


	int index = -1, j = nums.size() - 1;

	for (int i = nums.size() - 1; i > 0; i--)
	{
		if(nums[i - 1] < nums[i])
		{
			index = i - 1;
			break;
		}
	}

	if(index == -1)
	{
		reverse(nums.begin(), nums.end());
		return;
	}

	for (int i = nums.size() - 1; i >= index + 1; i--)
	{
		if(nums[i] > nums[index])
		{
			j = i;
			break;
		}
	}

	swap(nums[index], nums[j]);
	reverse(nums.begin() + index + 1, nums.end());
	

}


void display(vector<int> array)
{
	for(auto i : array)
	{
		cout << i << " ";
	}
}