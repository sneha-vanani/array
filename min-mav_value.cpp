#include<iostream>
using namespace std;

//minimum value
int min(int arr[],int size)
{
    int a= arr[0];
    for(int i=0; i<size; i++)
    {
        a = min (a, arr[i]);
        // if(a > arr[i])
        // {
        //     a = arr[i];
        // }
    }
    return a;
}

//maximum value
int max(int arr[],int size)
{
    int a= arr[0];          
    for(int i=0; i<size; i++)
    {
        a = max(a,arr[i]);
        // if(a < arr[i])
        // {
        //     a = arr[i];
        // }
    }
    return a;
}

int main ()
{
    int size;

    cout << "enter size : ";
    cin >> size;

    int array[20];
    cout << "enter values : ";

    for (int i=0; i<size; i++)
    {
        cin >> array[i];
    }

    int n = min(array,size);
    int m = max(array,size);
   
    
    cout << "\nmaximum value is : " << m << endl;
    cout << "minimum value is : " << n << endl;
   
    return 0;
}