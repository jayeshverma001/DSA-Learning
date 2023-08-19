#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    // constructor
    Node(int d){
        this-> data = d;
        this->prev = NULL;
        this->next= NULL;
    }
};
// traversing a linked list
void print(Node* head){
    Node* temp = head;
    
    while(temp != NULL){
        cout<< temp ->data<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}
// length of a linked list
int getLength(Node* head){
    int len = 0;
    Node* temp = head;
    while(temp != NULL){
        len++;
        temp = temp -> next;
    }
    return len;
}

void insertAtHead(Node* &tail,Node* &head,int d){
    // Empty List
    if(head == NULL){
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else{
    Node* temp = new Node(d);
    temp -> next = head;
    head -> prev = temp;
    head = temp;
    }
}

void insertAtTail(Node* &tail,Node* &head,int d){
    if(tail == NULL){
        Node* temp = new Node(d);
        tail = temp;
        head = temp;
    }
    else{
    Node* temp = new Node(d);
    tail -> next = temp;
    temp -> prev = tail;
    tail = temp;
    }
}

// nth position insertion
void inserAtPosition(Node* &tail,Node* &head,int position,int d){
    //  starting insert
    if(position == 1){
        insertAtHead(head,tail,d);
        return;
    }
    // mid insert
    Node* temp = head;
    int cnt = 1;

    while(cnt < position-1){
        temp = temp->next;
        cnt++;
    }
    // inserting at last position
    if(temp->next == NULL){
        insertAtTail(head,tail,d);
        return;
    }
    // creating a node for d
    Node* nodeToInsert = new Node(d);

    nodeToInsert -> next = temp -> next;
    temp -> next -> prev = nodeToInsert;
    temp -> next = nodeToInsert;
    nodeToInsert -> prev = temp;

}

int main(){
    
    Node* node1 = new Node(10);
    Node* head = NULL;
    Node* tail = NULL;

    print(head);
    // cout<<getLength(head)<<endl;

    insertAtHead(tail,head,11);
    print(head);

    insertAtHead(tail,head,13);
    print(head);

    insertAtHead(tail,head,7);
    print(head);

    insertAtTail(head,tail,25);
    print(head);

    inserAtPosition(tail,head,2,100);
    print(head);

    inserAtPosition(tail,head,1,101);
    print(head);

    inserAtPosition(tail,head,7,103);
    print(head);

    return 0;
}