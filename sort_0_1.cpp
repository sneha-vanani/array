#include<iostream>
using namespace std;

//sort 0 & 1
void input(int arr[], int n)
{
    cout << "\nenter values : ";
    for(int i=0; i<n; i++)
    {
       cin >> arr[i]; 
    }
    cout << endl;
}

void print(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
       cout << arr[i] << " "; 
    }
    cout << endl;
}

void sort0_1(int a[], int n)
{
    int i=0, j = n-1;
    while(i <= j)
    {
        while(a[i] == 0)
        {
            i++;
        }
        while(a[j] == 1)
        {
            j--;
        }
        if(i < j)
        {
            swap (a[i], a[j]);
        }
    }
    print(a, n);
}

int main()
{
    int a[10],n;

    cout << "enter size : ";
    cin >> n;

    input(a, n);
    sort0_1(a, n);

    return 0;
}
