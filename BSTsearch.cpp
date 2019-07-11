/*
Search a given node in the BST
*/

bool search(Node* root, int x)
{
    if(root==NULL)
    return false;
   
   else if(root->data > x)
   search(root->left,x);
   
   else if(root->data<x)
   search(root->right,x);
   
   else return true;
   
}
