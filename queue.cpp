#include<iostream>
using namespace std;
int queue[100],n=100,front=-1,rear=-1;
void enqueue(int x){
    if(rear>=n-1){
        cout<<"queue overflow\n";
    }
    else{
        if(front==-1){
            front=0;
        }
            rear++;
            queue[rear]=x;
    }
}
void dequeue(){
    if(front==-1||front>rear){
        cout<<"queue underflow\n";
    }
    else{
        cout<<queue[front]<<" is removed\n";
        front++;
    }
}
void display(){
    if(front==-1||front>rear){
        cout<<"queue is empty\n";
    }
    else{
        cout<<"the queue is ";
        for(int i=front;i<=rear;i++){
            cout<<queue[i]<<" ";
        }
        cout<<"\n";
    }
}
int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
    dequeue();
    display();
    dequeue();
    display();
    dequeue();
    display();
    dequeue();
    display();
}