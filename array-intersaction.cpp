#include<iostream>
using namespace std;


//array intersaction, array is sorted in non-decresing order

void inter(int arr[],int n, int brr[], int n2)
{
    int ans,i=0,j=0;
    cout << "the intersaction is : ";
    
    while(i<n && j<n2)
    {
        if(arr[i] == brr[j])
        {
            ans = arr[i];
            cout << ans << " ";
           // brr[j] = -12345;
            i++;
            j++;
        }
        else if (arr[i] < brr[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
}    

void input(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
       cin >> arr[i]; 
    }
    cout << endl;
}

int main()
{
    int a[10] = {1, 2, 3, 4},n;
    int b[10] = {2, 4, 6, 8},n2;

    cout << "enter size : ";
    cin >> n;
    cout << "\nenter values for a : ";
    input(a, n);

    cout << "enter size : ";
    cin >> n2;
    cout << "\nenter values for b : ";
    input(b, n2);

    inter(a, n, b, n2);
    return 0;
}