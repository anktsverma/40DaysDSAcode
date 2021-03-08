#include<iostream>
#include<string>
using namespace std;

class queue{
   private:
     int arr[5];
     int front;
     int rear;
   public:
     queue(){
         front=rear=-1;
         for(int i=0;i<5;i++){
             arr[i]=0;
         }
     }

     bool isEmpty(){
         if(front==-1 && rear==-1){
             return true;
         }
         else{
             return false;
         }
     }

     bool isFull(){
         if(rear==4){
             return true;
         }
         else{
             return false;
         }
     }

     int Enqueue(int val){
         if(isFull()){
             cout<<"Queue is Full"<<endl;
             return 0;
         }
         else if(isEmpty()){
             rear=front=0;
         }
         else{
             rear++;
         }
         arr[rear]=val;
     }

     int Dequeue(){
         int x;
         if(isEmpty()){
             return 0;
         }
         else if(front==rear){
             x=arr[front];
             arr[front]=0;
             front=rear=-1;
             return x;
         }
         else{
             x=arr[front];
             arr[front]=0;
             front++;
             return x;
         }
     }

     int count(){
         return (rear-front+1);
     }

     void display(){
         for(int i=0;i<5;i++){
             cout<<arr[i]<<" ";
         }
         cout<<endl;
     }

};

int main(){
  queue q1;
  int option,value;
  do{
      cout<<"What operations do you want to perform? Select Options number. Enter 0 to Exit."<<endl;
      cout<<"1. Enqueue()"<<endl;
      cout<<"2. Dequeue()"<<endl;
      cout<<"3. isEmpty()"<<endl;
      cout<<"4. isFull()"<<endl;
      cout<<"5. count()"<<endl;
      cout<<"6. display()"<<endl;
      cout<<"7. clear Screen"<<endl;
      cin>>option;
      switch(option){
          case 1:
          cout<<"Enqueue operation"<<endl<<"Enter the value"<<endl;
          int value;
          cin>>value;
          q1.Enqueue(value);
          break;

          case 2:
          cout<<"Dequeue operation called"<<endl<<"The Dequed value is:"<<q1.Dequeue()<<endl;
          break;

          case 3:
          if(q1.isEmpty()){
              cout<<"Queue is Empty"<<endl;
          }
          else{
              cout<<"Queue is not Empty"<<endl;
          }
          break;

          case 4:
          if(q1.isFull()){
              cout<<"Queue is Full"<<endl;
          }
          else{
              cout<<"Queue id not Full"<<endl;
          }
          break;

          case 5:
          cout<<"Total elements in Queue is:"<<q1.count()<<endl;
          break;

          case 6:
          cout<<"Dipay function called"<<endl;
          q1.display();
          break;

          case 7:
          system("cls");
          break;

          default:
          cout<<"Please enter correct option number"<<endl;
          break;
      }


  }while(option!=0);
}