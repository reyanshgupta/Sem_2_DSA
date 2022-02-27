#include <iostream>
using namespace std;

int stack[50], n=50, top=-1;
//push function
void push(int val) {
   if(top>=n-1){
   cout<<"Stack has overflowed"<<endl;}
   else {
   top = top + 1;
   stack[top]=val;
   }
}

//pop function
void pop() {
   if(top<=-1)
   cout<<"Stack is under flowed"<<endl;
   else {
      cout<<"The element that was popped is: "<< stack[top] <<endl;
      top--;
   }
}

//peek function
void display() {
   if(top>=0) {
      cout<<"Stack elements:";
      for(int i=top; i>=0; i--) cout<<stack[i]<<" ";
      cout<<endl;
   } 
   else
   cout<<"Empty Stack" << endl;
}

//driver code
int main() {
   int choice, value;
   cout << " 1 - Push in stack \n 2 - Pop from stack \n 3 - Display stack"<<endl;
      cout << "Enter choice: ";
      cin>>choice;
      switch(choice) {
         case 1: {
            cout<<"Enter value to be pushed: ";
            cin>>value;
            push(value);
            break;
         }
         
         case 2: {
            pop();
            break;
         }
         
         case 3: {
            display();
            break;
         }
         
         default: {
            cout<<"Invalid Choice"<<endl;
         }
      }
}