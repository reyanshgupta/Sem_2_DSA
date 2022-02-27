
#include <iostream>
using namespace std; 

int main(){
int arr[6]={10, 90, 20, 70, 30, 43};

//traversing array 

cout << "Elements of the array (Array traversal) are: ";
for (int i: arr)   
    {    

         cout<< i << endl;    
    }    

return 0;
}