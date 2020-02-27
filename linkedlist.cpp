#include<iostream>
using namespace std;

struct node{
    int data;
    node* next;
};



class linkedList{
    public:
        node* head = NULL;
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
    linkedList l1,l2;
    l1.insertNode(6);
    l1.insertNode(7);
    l2.insertNode(8);
    //l.deleteNode(8);
    //l.deleteNode(6);
    l1.printNodes();
    return 0;
}