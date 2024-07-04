#include<iostream>
using namespace std;

//pair sum
void psum(int arr[], int n, int s)    
{
    int a[10];
    
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[i] + arr[j] == s) 
            {
                cout << (min(arr[i], arr[j])) << " " << (max(arr[i], arr[j])) << endl;
            }
        }
    }
}

void input(int arr[], int n)
{
    cout << "enter values for array : ";
    for(int i=0; i<n; i++)
    {
       cin >> arr[i]; 
    }
    cout << endl;
}

int main ()
{
    int a[10],size,s;
    

    cout << "enter size for array : ";
    cin >> size;

    cout << "\nenter value for sum : ";
    cin >> s;

    input(a, size);
    psum(a, size, s);
  
}