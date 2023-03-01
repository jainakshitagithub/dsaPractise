    int countNonLeafNodes(Node* root) {
//        // Code here
//        if(root==NULL)
//        return 0;
//        int l=countNonLeafNodes(root->left);
//        int r=countNonLeafNodes(root->right);
//        if(root->left ==NULL &&  root->right ==NULL)
//        return 0;
//        else
//        return l+r+1
//    }