#include<iostream>
using namespace std;

int main() { 
     int t; 
     cout << "Enter number of test cases: ";
     cin>>t;
     while(t--) 
    { 
        int n;
        cout << "Enter number of people: ";
        cin>>n;
        int a[n]; 
        int add=0;
        for(int i=0; i<n;i++) {
        cout << "Enter Position: ";
        cin>>a[i];}
        
        for(int i=0;i<n;i++)
        {
            if(a[i]==1){
                for(int j=i+1; j<i+6;j++){
                    if(a[j]==1){ 
                        add=1; 
                        break;
                        }
                    }
                  
                }
        }
         
        if(add==1)  
        cout<<"NO"<<endl;
        else 
        cout<<"YES"<<endl;
    } 
	return 0;
}
