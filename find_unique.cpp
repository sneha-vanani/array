#include<iostream>
using namespace std;

//find unique element
void f_unique(int arr[],int n)
{
    int ans=0;
    for(int i=0; i<n; i++)
    {
        ans = ans ^ arr[i];
    }
    cout << "the unique element is : " << ans;
}


int main()
{   int a[20] = {1, 3, 1, 3, 6, 6, 7, 10, 7};
    
    f_unique(a, 9);
    
    return 0;
}

