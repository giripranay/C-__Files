#include<iostream>
using namespace std;

struct node{
    int data;
    node* next;
};

node* head = NULL;

class linkedList{
    public:
        void insertNode(int data);
        void deleteNode(int data);
        void printNodes();
          
};

void linkedList::insertNode(int data){
            if(head == NULL){
                head = new node();
                head->data = data;
                head->next = NULL;
            }
            else{
                node* temp = head;
                while (temp->next!=NULL){
                    temp = temp->next;
                }
                temp->next = new node();
                temp->next->data = data;
                temp->next->next = NULL;
            }
}

void linkedList::deleteNode(int data){
    node* temp = head;
    if(temp->data==data){
        head = temp->next;
        return;
    }
    node* prev;
    while(temp->next!=NULL && temp->data!=data){
        prev = temp;
        temp = temp->next;
    }
    prev->next = temp->next;
}

void linkedList::printNodes(){
    node* temp = head;
    while (temp->next!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }  
    cout<<temp->data<<"\n";  
}

int main(){
    linkedList l;
    l.insertNode(6);
    l.insertNode(7);
    l.insertNode(8);
    l.deleteNode(8);
    l.deleteNode(6);
    l.printNodes();
    return 0;
}