#include <iostream>
using namespace std;
int circqueue[5];
int front = -1, rear = -1, n=5;

void insertCircQ(int val){
   if ((front == 0 && rear == n-1) || (front == rear+1)) {
      cout<<"Queue Overflow \n";
      return;
   }
    cout<<"Element for insertion: "<<endl;
    cin>>val;
   if (front == -1) {
      front = 0;
      rear = 0;
   } 
   else {
      if (rear == n-1)
      rear = 0;
      else
      rear = rear + 1;
   }
   circqueue[rear] = val;
}

void deleteCircQ(){
   if (front == -1){
      cout<<"Queue Underflow";
      return;
   }
   
   cout<<"Element deleted from queue is : "<<circqueue[front]<<endl;
   if (front == rear){ //last element
      front = -1;
      rear = -1;
   } else {
      if (front == n-1) //front is the last element
      front = 0;
      else
      front = front+1; 
   }
}

void displayCircQ(){
   int f = front, r = rear;
   if (front == -1){ //Underflow
      cout<<"Queue is empty"<<endl;
      return;
   }
   cout<<"Queue elements are : "<<endl;
   if (f <= r){
      while (f <= r){
         cout<<circqueue[f]<<" ";
         f++;
      }
   }
   else {
      while (f <= n-1) {
         cout<<circqueue[f];
         f++;
      }
      f = 0;
      while (f <= r) {
         cout<<circqueue[f]<<" ";
         f++;
      }
   }
   cout<<endl;
}

int main(){
   int choice, val;
   cout<<"\n 1)Insert\n 2)Delete\n 3)Display\n 4)Exit\n";
   do{
      cout<<"Enter choice : "<<endl;
      cin>>choice;
      switch(choice) {
         case 1:
         insertCircQ(val);
         break;

         case 2:
         deleteCircQ();
         break;

         case 3:
         displayCircQ();
         break;

         case 4:
         cout<<"Exit\n";
         break;
         default: cout<<"Incorrect!\n";
      }
   } while(choice!=4);
   return 0;
}


