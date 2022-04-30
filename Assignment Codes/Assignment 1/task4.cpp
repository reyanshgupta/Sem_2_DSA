#include<iostream>
using namespace std;
int main(){
	int n,i,j,m=0,count=0,s=0;
    cout << "Enter number of students: ";
	cin>>n;
	int a[n];
	for(i=0;i<n;i++){
       cout << "Enter Marks: ";
		cin>>a[i];
		m=max(m,a[i]);
	}
	for(i=0;i<n;i++){
		if(a[i]<31){
		count++;
		continue;}
		else
		s=s+a[i];
	}
	cout<<"Test cases: "<<count<<endl;
	cout << "Average Marks (Passed students - Total number of students): "<< (s/(float)n)<<endl;
	for(i=n-1;i>=0;i--)
	if(a[i]==m)
	cout<<"Backlog Students: "<<count<<endl;
	for(i=0;i<n;i++)
	{
		cout<<"Topper marks - Student marks: "<<m-a[i]<<"\n";
	}
}
