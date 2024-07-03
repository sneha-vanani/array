#include<iostream>
using namespace std;

//find duplicate, array has 1 to n-1 values at least once, there is a single value that is present in the array twice
void duplicate(int arr[], int n)
{
    int ans=0;
    //first xor all elements of array
    for (int i=0; i<n; i++)
    {
        ans = ans ^ arr[i];
    }
    //and then xor ing ans with 1 to n-1, so that all element cancle which are 1 time, and remain that elemet which is 2 times, that is answer 
    for (int i=0; i<n; i++)
    {
        ans = ans ^ i;
    }
    cout << "the duplicate is : " << ans << endl;
}


int main()
{   int a[20] = {6, 3, 1, 5, 4, 3, 2};
   
    duplicate(a, 7);
   
    return 0;
}
