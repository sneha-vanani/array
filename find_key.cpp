#include<iostream>
using namespace std;

//searching key
bool search(int arr[], int size, int key)
{
    for(int i=0; i<size; i++)
    {
        if(arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int a[10] = {54, 2, 5, 7, 1, -4, 6, 61, 9, 0};

    int key;
    cout << "enter key : ";
    cin >> key;

    bool ans = search(a, 10, key);

    if(ans)
    {
        cout << "the key is present" << endl;
    }
    else 
    {
        cout << "the key is absent" << endl;
    }
    return 0;
}