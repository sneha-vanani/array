#include<iostream>
using namespace std;

//sort 0,1 & 2
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

void sort0_1_2(int a[], int n)
{
    int i=0, j=0, k=n-1 ;

    while(j <= k)
    {
        if(a[j] == 0)
        {
            swap(a[i] , a[j]);
            i++;
            j++;
        }
        else if(a[j] == 1)
        {
            j++;
        }
        else if(a[j] == 2)
        {
            swap(a[j] , a[k]);
            k--;
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
    sort0_1_2(a, n);

    return 0;
}