#include<iostream>
using namespace std;

struct node
{
    node *left;
    int item;
    node *right;
}

class BST
{
private:
node *root;
protected:
        void preorderrec(node *);
        void inorderrec(node *);
        void postorderrec(node *);

public:
BST();
bool isEmpty();
void preorder();


};


BST::~BST()
{
    root=nullptr; //root pointer with null
}

bool BST:: isEmpty()
{
    return root = nullptr;
}

void BST:: insertElement(int data)
{
node *ptr; 
node *n=new node;
n->item=data;
n->left=nullptr;
n->right=nullptr;
if(isEmpty())
root=n;
ptr=root;
while(ptr->item!=data)
{
    if(data<ptr->item)
    {//left subtree
        if(ptr->left!=nullptr)
        ptr=ptr->left;
        else{
            ptr->left=n;
            break;
        }

    }

    else{   //right tree
        if(ptr->right!=nullptr)
        ptr=ptr->right;
        else{
            ptr->right=n;
            break;
        }

        
    }
    if(ptr->item==data)
    delete n;
}
}


void BST::preorder()
{
    preorderrec(root);
}

void BST::preorderrec(node *ptr)
{
    if(ptr!=nullptr)
    {
        cout<<" "<<ptr->item;
        preorderrec(ptr->left);
        preorderrec(ptr->right);
        
    }
}




void BST::inorder()
{
    inorderrec(root);
}

void BST::inorderrec(node *ptr)
{
    if(ptr!=nullptr)
    {
        inorderrec(ptr->left);
        cout<<" "<<ptr->item;
        inorderrec(ptr->right);
        
    }
}





void BST::postorder()
{
    postorderrec(root);
}

void BST::postorderrec(node *ptr)
{
    if(ptr!=nullptr)
    {
       postorderrec(ptr->left);
        cout<<" "<<ptr->item;
       postorderrec(ptr->right);
        
    }
}


node *BST::search(int data)
{
    node *ptr=root;
    while(ptr!=nullptr)
    {
        if (data==ptr->item)
        return ptr;

        if(data>ptr->item)
        ptr=ptr->right;
        else
        ptr=ptr->left;
    }

     return ptr;
}







void BST::del(int data)  //NAHI SMAJH ME AAYA DELETE WLALA

{
    root=deleteNode(root,data);
}
node* BST::deleteNode(node *ptr,int data)     //NAHI SMAJH ME AAYA DELETE WLALA
{
    if(ptr==nullptr)
        return ptr;
    if(data < ptr->item)
        ptr->left=deleteNode(ptr->left,data);
    else if(data > ptr->item)
        ptr->right=deleteNode(ptr->right,data);
    else
    { //node found 

        //No Child
        if(ptr->left==nullptr && ptr->right==nullptr)  
        {
            delete ptr;
            return nullptr;
        }
        //Single Child
        if(ptr->left==nullptr || ptr->right == nullptr)
        {
            node *child=ptr->left!=nullptr?ptr->left:ptr->right;
            delete ptr;
            return child;
        }
        //Two children
        node *pred, *parpred;
        parpred=ptr;
        pred=ptr->left;
        while(pred->right!=nullptr)
        {
            parpred=pred;
            pred=pred->right;
        }
        ptr->item=pred->item;
        if(parpred->right==pred) //pred is right child of parpred
            parpred->right=deleteNode(pred,pred->item);
        else //pred is left child of parpred
            parpred->left=deleteNode(pred,pred->item);

    }
    return ptr;
}    //NAHI SMAJH ME AAYA DELETE WLALA


BST::~BST()
{
    while (root!=nullptr)
   del(root->item);
    
}