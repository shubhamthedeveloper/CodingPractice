//https://practice.geeksforgeeks.org/problems/check-for-bst/1

bool bstCheck(Node* root, Node* left=NULL, Node* right=NULL){
    if(root == nullptr)
    return true;
    if(left != NULL && left->data > root->data){
        return false;
    }
    if(right != NULL && right->data < root->data){
        return false;
    }
    
    return bstCheck(root->left,left,root) && bstCheck(root->right,root,right);
}

bool isBST(Node* root) {
   return bstCheck(root,NULL,NULL);
}