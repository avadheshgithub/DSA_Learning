/*

    ## InOrder Predecessor - maximum value of the LST
    
                    (10)
                    /  \
                 (5)   (15)
                /  \    /  \    
              (2) (6) (11) (20)
        
    # Q()---> Inorder Predecessor of 10
        ans = 6

    # Hint - Inorder traversal of Binary search tree & just one previous element from that node val

            ans -  2  5  6  10  11  15  20
        .                    *
    # Ex - inorder Predecessor of 10 ----> 6


    # Steps - 
            1. go left once
            2. keep going right  & if its right NULL return that node

    # Code 
            if(root->left == NULL) return NULL;
            Node* pred = root->left;
            while(pre->right!=NULL){
                pred = pred->right;
            }
            return pred;
*/