#include <bits/stdc++.h>
using namespace std;

int doUnion(int arr1[], int arr2[], int size1, int size2);
int main(){
    int arr1[] = {1,2,3,4,5};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int arr2[] = {1, 2, 3};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    int count = doUnion(arr1, arr2, size1, size2);
    cout << count << endl;
return 0;
}
/**
int doUnion(int arr1[], int arr2[], int size1, int size2){

    int totalSize = size1 + size2;
    int array[totalSize];
    int count = 0;
    for (int i = 0; i < size1; i++)
    {
        array[i] = arr1[i];
    }

    for (int i = size1, j = 0; j < size2; i++, j++)
    {
        array[i] = arr2[j];
    }
    
    sort(array, array + totalSize);

    for(int i = 0; i < totalSize; i++)
    {
        if (array[i] != array[i + 1])
        {
            count++;
        }
    }
    
    return count;

}
**/

/*
int doUnion(int arr1[], int arr2[], int size1, int size2)
{
    map <int, int> unionMap;
    for (int i = 0; i < size1; i++)
    {
        unionMap.insert({arr1[i], i});
    }

    for (int i = 0; i < size2; i++){
        unionMap.insert({arr2[i], i});
    }

    return unionMap.size();
    
    
}
*/

int doUnion(int arr1[], int arr2[], int size1, int size2)
{
    set<int> unSet;
    for (int i = 0; i < size1; i++)
    {
        unSet.insert(arr1[i]);
    }

    for (int i = 0; i < size2; i++)
    {
        unSet.insert(arr2[i]);
    }
    
    return unSet.size();
    
}
