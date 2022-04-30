#include <iostream>

using namespace std;

int main(){
    int N,num,num1,i=0,temp;
    cout << "Enter number of numbers in the series: ";
    cin >> N;
    int arr[N];
    while(i<N){
        cout << "Enter Number : ";
        cin >> num;
        arr[i]=num;
        i++;
    }
    for(int j=0;j<N;j++)
	{		
		for(int k=j+1;k<N;k++)
		{
			if(arr[j]>arr[k])
			{
				temp=arr[j];
				arr[j]=arr[k];
				arr[k]=temp;
			}
		}
	}
cout << "Sum of lowest numbers: " << arr[0]+arr[1];
return 0;
}