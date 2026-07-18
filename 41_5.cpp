#include <iostream>
using namespace std;

template <class T>
void Reverse(T *arr, int iSize)
{
    int i = 0;
    int j = iSize - 1;
    T temp;

    while (i < j)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;

        i++;
        j--;
    }
}

int main()
{
    int arr [] = {10,20,30,10,30,40,10,40,10};
    
    for (int i = 0; i < 9; i++)
    {
        cout<<arr[i]<<"\n";    
    }

    Reverse(arr,9);
    cout<<"Reversed array is : \n";
    for (int i = 0; i < 9; i++)
    {
        cout<<arr[i]<<"\n";    
    }

    return 0;
}