#include <iostream>

using namespace std;

struct Node{
    int num;
    Node *next;
};

struct Node *head=NULL;

void insert_at_head_Node(int n){
    struct Node *new_node=new Node;
    new_node->num=n;
    new_node->next=head;
    head=new_node;
}

void insert_at_tail_Node(int n){
    struct Node *new_node=new Node;
    new_node->num=n;
    new_node->next=NULL;
    if(head==NULL){
        head=new_node;
        return;
    }
    struct Node *temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=new_node;
}

void insert_at_position_Node(int n,int pos){
    struct Node *new_node=new Node;
    new_node->num=n;
    if(pos==0){
        new_node->next=head;
        head=new_node;
        return;
    }
    struct Node *temp=head;
    for(int i=0;i<pos-1;i++){
        if(temp==NULL){
            cout<<"Position out of bounds\n";
            return;
        }
        temp=temp->next;
    }
    new_node->next=temp->next;
    temp->next=new_node;
}

void display_all_nodes(){
    cout<<"The list contains the data entered:\n";
    struct Node *temp = head;
    while(temp!=NULL){
        cout<<temp->num<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){
    insert_at_tail_Node(1);
    insert_at_tail_Node(3);
    insert_at_tail_Node(5);
    insert_at_tail_Node(7);
    insert_at_tail_Node(9);
    insert_at_tail_Node(11);
    display_all_nodes();
    return 0;
}
