#include<iostream>
using namespace std;

//swap alternate  i/p: {1,2,3,4,5,6}   o/p: {2,1,4,3,6,5}
void swap(int arr[], int n)
{
    int temp;
    for(int i=0; (i+1)<n; i = i+2)
    {
        swap(arr[i], arr[i+1]);
        // temp = arr[i];
        // arr[i] = arr[i+1];
        // arr[i+1] = temp;
    }

}

void print(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
       cout << arr[i] << " "; 
    }
    cout << endl;
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
    int a[20],size;
    cout << "enter size of array : "<<endl;
    cin >> size;
    
    input(a, size);
    swap(a, size);
    print(a, size);
    return 0;
}