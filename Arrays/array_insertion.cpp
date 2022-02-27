#include <iostream>
using namespace std; 

int* insertelement(int sizeofarray, int arr[], int number, int pos)
{
    sizeofarray++; //increasing size of array
    for (int i = sizeofarray; i >= pos; i--)
        arr[i] = arr[i - 1];
    arr[pos - 1] = number; 
    return arr;
}

int main()
{
    int i, number, pos, sizeofarray;
    cout << "Enter Size of array: ";
    cin >> sizeofarray;
    int arr[sizeofarray];
    for (i = 0; i < sizeofarray; i++){
       cout << "Enter Array[" << i+1 <<  "]: ";
       cin >> arr[i];
       cout << endl;
    } 
    cout << "Initial Array: ";
    for (i = 0; i < sizeofarray; i++)
        cout << arr[i] << " ";
    cout << endl;
    cout << "Enter the element to be added and the position at which you want it to be: ";
    cin >> number >> pos;
    insertelement(sizeofarray, arr, number, pos);
    for (i = 0; i < sizeofarray + 1; i++)
        cout << arr[i] << " ";
    cout << endl;
  
    return 0;
}