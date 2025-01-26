/*

    ## InOrder Successor - minimum value of the RST
    
                    (10)
                    /  \
                 (5)   (15)
                /  \    /  \    
              (2) (6) (11) (20)
        
    # Q()---> Inorder Successor of 10
        ans = 11

    # Hint - Inorder traversal of Binary search tree & just one next element from that node val

            ans -  2  5  6  10  11  15  20
        .                    *
    # Ex - inorder Successor of 10 ----> 11


    # Steps - 
            1. go right once
            2. keep going left  & if its left NULL return that node

    # Code 
            if(root->right == NULL) return NULL;
            Node* pred = root->right;
            while(pre->left!=NULL){
                pred = pred->left;
            }
            return pred;
*/