#include<iostream>
using namespace std;
int stack[100],n=100,top=-1;
void push(int x)
{
    if(top>=n-1){
        cout<<"Stack Overflow\n";
    }
    else
    {
        top++;
        stack[top]=x;
    }
}
void pop()
{
    if(top==-1){
        cout<<"Stack Underflow\n";
    }
    else{
        top--;
    }
}
void display(){
    if(top==-1){
        cout<<"Stack is empty\n";
    }
    else{
        for(int i=top;i>=0;i--){
            cout<<stack[i]<<" ";
        }
        cout<<"\n";
    }
}
int main(){
    push(10);
    push(20);
    push(30);
    push(40);
    display();
    pop();
    display();
    pop();
    display();
    pop();
    display();
    pop();
    display();
    pop();
    return 0;
}