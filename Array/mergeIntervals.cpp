#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> merge(vector<vector<int>>& intervals);

void display(vector<vector<int>> arr);

int main(){

	vector<vector<int>> arr{{1,3},{2,6},{8,10},{15,18}};

	cout << "\nBefore Merge\n";
	display(arr);

	cout << "\nAfter Merge\n";

	vector<vector<int>> mergedArray = merge(arr);

	display(mergedArray);



}
vector<vector<int>> merge(vector<vector<int>>& intervals){

	sort(intervals.begin(), intervals.end());


	int size = intervals.size();
	vector<vector<int>> merged;


	for(auto interval : intervals)
	{
		if(merged.empty() or merged.back()[1] < interval[0])
		{
			merged.push_back(interval);
		}
		else
		{
			merged.back()[1] = max(merged.back()[1], interval[1]);
		}

	}
	return merged;
}

void display(vector<vector<int>> arr){

	cout << "| ";
	for(auto it : arr)
	{
		for(auto i : it)
		{
			cout << i << " ";
		}
		cout << "| ";
	}
	
}

