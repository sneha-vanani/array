#include<iostream>
using namespace std;

//sum of the all elements of array
int sum(int arr[], int size)
{
    int total=0;
    for (int i=0; i<size; i++)
    {
        total = total + arr[i];
    }
    return total;
}

void input(int arr[], int n)
{
    cout << "enter values : ";
    for(int i=0; i<n; i++)
    {
       cin >> arr[i]; 
    }
    cout << endl;
}

int main()
{
    int size;
    cout << "enter size for array : " ;
    cin >> size;

    int a[20];
    input(a, size);

    int total = sum (a, size);
    cout << "sum is : " << total << endl;
}