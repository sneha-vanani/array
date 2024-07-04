#include<iostream>
using namespace std;

//find all duplicate 
void duplicate(int arr[], int n)
{
    int i=0,j=1;

    while(i<n && j<n)
    {
        if( arr[i] == -12345)
        {
            i++;
            j = i+1;
        }
        else if(arr[i] == arr[j])
        {
            cout << arr[j] << " ";
            arr[j] = -12345;
            i++;
            j = i+1;
        }
        else if(j == n-1 )
        {
            i++;
            j = i+1;
        }
        else 
        {
            j++;
        }
    }
}

void input(int arr[], int n)
{
    cout << "\nenter values : ";
    for(int i=0; i<n; i++)
    {
       cin >> arr[i]; 
    }
    cout << endl;
}

int main()
{
    int a[10],n;

    cout << "enter size : ";
    cin >> n;
    
    input(a, n);
    duplicate(a, n);
    return 0;
}