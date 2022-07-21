  #include <bits/stdc++.h>
using namespace std;

void sort012(int a[], int n);


int main(){
    
    int a[] = {0, 2, 1, 2, 0};
    int n = 5;
    sort012(a, n);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    
return 0;
}


void sort012(int a[], int n)
{

    int low = 0, mid = 0;
    int high = n - 1;
    while(mid <= high)
    {
        switch (a[mid])
        {
        case 0:
            swap(a[low++], a[mid++]);
            break;
        case 1:
            mid++;
            break;
        case 2: 
            swap(a[mid], a[high--]);
        default:
            break;
        }
    }
}
