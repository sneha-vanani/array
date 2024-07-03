#include<iostream>
using namespace std;

//reverse array
void rev(int arr[], int size)
{
    int start=0;
    int end= size-1;
    while(start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

//printing array
void printA(int arr[], int size)
{
    for(int i=0; i<size ; i++)
    {
       cout << arr[i] << " "; 
    }
    cout << endl;
}


int main()
{
    int a[5] = {2, 5, 7, 9, -1};
    int b[6] = {3, 5, 1, 4, 8, 10};

    rev(a, 5);
    rev(b, 6);

    printA(a, 5);
    printA(b, 6);

    
    return 0;
}