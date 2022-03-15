#include <iostream>
using namespace std;

int queue[5], n=5, front = -1, rear = -1;
void insert(){
    int val;
    if (rear == n-1)  //overflow check
    cout << "Queue is overflowed"<<endl;
    else{
        if (front == -1){
            front = 0;
        }
        cout << "Insert value to be inserted: ";
        cin >> val;
        rear++;
        queue[rear] = val;
    }
}

void Delete(){
    if (front == -1 || front > rear) {
      cout<<"Queue Underflow ";
      return;
   }
   else {
      cout<<"Element deleted from queue is : "<< queue[front] <<endl;
      front++;
   }
}
void Display(){
   if (front == -1)
   cout<<"Queue is empty"<<endl;
   else {
      cout<<"Queue elements are : ";
      for (int i = front; i <= rear; i++)
      cout<<queue[i]<<" ";
   }
}

int main() {
   int ch;
   cout<<"1) Insert element to queue \n 2) Delete element from queue \n 3) Display all the elements of queue \n 4) Exit"<<endl;
   do {
      cout<<"Enter your choice : ";
      cin>>ch;
      switch (ch) {
         case 1: 
         insert();
         break;
         case 2: 
         Delete();
         break;
         case 3: 
         Display();
         break;
         case 4: 
         cout<<"Exit"<<endl;
         break;
         default: 
         cout<<"Invalid choice"<<endl;
      }
   } while(ch!=4);
   return 0;
}

