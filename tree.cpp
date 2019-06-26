#include<iostream>

using namespace std;

struct node{
    int key;
    node *left;
    node *right;

};



class tree{

    public:
            node *root;
            void inorder(node *leaf);
            
            tree(){
        root=NULL;
    }
              
            void insert(int key){
        if(root!=NULL){
            insert_node(key,root);
        }
        else
        {
            root=new node;
            root->key=key;
            root->left=NULL;
            root->right=NULL;
        }
        
    }
            void print(){
                return print(root);
            }
    private:
            void insert_node(int key,node *leaf){

        if(key<leaf->key){
            if(leaf->left!=NULL)
            {
                insert_node(key,leaf->left);
            }
            else
            {
                leaf->left=new node;
                leaf->left->key=key;
                leaf->left->left=NULL;
                leaf->left->right=NULL;
            }
            
        }
        else if(key>=leaf->key){
            if(leaf->right!=NULL)
            {
                insert_node(key,leaf->right);
            }
            else
            {
                leaf->right=new node;
                leaf->right->key=key;
                leaf->right->left=NULL;
                leaf->right->right=NULL;
            }
            
        }
        


    }
          
    void print(node *leaf){
        if(leaf!=NULL){
        
        cout<<leaf->key<<" ";
        if(leaf->left!=NULL){
            print(leaf->left);
        }
        if(leaf->right!=NULL){
            print(leaf->right);
        }
        }

        
    }

};

void tree::inorder(node *leaf){


if(leaf->left!=NULL){

inorder(leaf->left);
}
cout<<leaf->key<<" ";

if(leaf->right!=NULL)
{
inorder(leaf->right);
}
}

int main(){

    tree T;
    
    
    T.insert(5);
    T.insert(4);
    T.insert(6);
    T.insert(3);
    T.insert(7);
    T.print();
    cout<<"\n";
    node *root=T.root;
    T.inorder(root);

}
