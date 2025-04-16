#include <iostream> // Including input-output stream header file

using namespace std; // Using standard namespace

// Declare node structure
struct Node{
    int num;
    Node *next;
};

// Starting (Head) node
struct Node *head=NULL;

// Function to insert node at the start
void insert_Node(int n){
    struct Node *new_node=new Node; // Creating a new node
    new_node->num=n; // Assigning data to the new node
    new_node->next=head; // Pointing the new node to the current head
    head=new_node; // Making the new node as the head
}

// Function to display all nodes
void display_all_nodes(){
    cout<<"The list contains the data entered:\n"; // Displaying a message
    struct Node *temp = head; // Temporary node to traverse the list
    while(temp!=NULL){ // Loop to iterate through the list
        cout<<temp->num<<" "; // Displaying the data in the current node
        temp=temp->next; // Moving to the next node
    }
    cout<<endl; // Displaying newline after printing all nodes
}

int main(){
    insert_Node(1); // Inserting a node with value 1
    insert_Node(3); // Inserting a node with value 3
    insert_Node(5); // Inserting a node with value 5
    insert_Node(7); // Inserting a node with value 7
    insert_Node(9); // Inserting a node with value 9
    insert_Node(11); // Inserting a node with value 11
    display_all_nodes(); // Displaying all nodes in the list
    return 0; // Returning from the main function
}