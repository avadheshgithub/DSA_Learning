/*
        ## BST - Binary Search Tree

                - it is a BT with some extra rule
                - Every node to the left (LST) of a node should be smalller
                - Every node to the right (RST) of a node should be greater 

                - these rules applies for all the nodes

        #EX       
                    (10)
                    /  \
                 (5)   (15)
                /  \    /  \    
              (2) (6) (11) (20)

            
        #Q(1)   
               Q(1) Can be duplicate element in BST

               ans - No  (LST < root->val < RST)

                    Special case  LST <= root->val < RST
        
        #Advantage

                1. Efficeint Searching  (logn)
                2. Efficient insertion and deletion
                3. in implementation of sets,queue,priority_queue

        # DisAdvantage
                
                1. lack of support for range Queriies
                2. Not Efficient in case of unbalanced tree (Degenerate/skewed)

        # Applications

                1. Phonebook
                2. Dictionary
                3. Stock Market Analysis

        
        ## Concept Builder 

                1. we have 3 nodes with diff value Ex(1,2,3) . how many unique BT
                Ans - 5  

                2. if we have to construct BST
                ans - 5

*/