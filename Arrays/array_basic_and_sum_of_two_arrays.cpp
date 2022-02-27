#include <iostream>
using namespace std; 

int main(){

//first array

    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    int x[n];
for (int i = 0; i < n; ++i)
{
    cout << "Enter array["<< i+1 <<"] : ";
    cin>> x[i];
}

//for sum of elements of array

int sum = 0;
for (int i = 0; i<n; i++){
    sum = sum + x[i];
}
cout<< "The sum of the elements of the array is: " << sum<< endl;

//for average of elements of array 

float avg;
avg = sum/n;
cout<< "The average of the elements is: " <<avg<< endl;

//second array

int n2;
cout<<"Enter the number of elements in the second array: ";
cin>>n2;
int x2[n2];
for (int i = 0; i < n2; ++i)
{
    cout << "Enter array["<< i+1 <<"] : ";
    cin>> x2[i];
}

//sum of two arrays in a resultant array

int len;
if (n>n2){
len = n;
}
else {
len = n2;}

int sumarray[len];
for (int i = 0; i<len; i++){
    sumarray[i] = x[i] + x2[i];
}

for (int j = 0; j < len; j++){
    cout<<"sum_array["<<j+1<<"] = "<< sumarray[j]<<endl;
}
}