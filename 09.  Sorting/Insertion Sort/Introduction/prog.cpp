/*

# Insertion Sort Algorithems
    
    arr  5  3  1  4  2

    ## Divide your array (sorted & Unsorted)

        Sorted        |     Unsorted
        5             |  3  1  4  2
        3  5          |  1  4  2
        1  3  5       |  4  2
        1  3  4  5    |  2
        1  2  3  4  2 |  


    ## Time Complexity - O(n^2)

        - Best case  : O(n)      // 1  2  3  4  5  [Swapping not happen & no boolean checkMark]
        - Avg case   : O(n^2)
        - Worst case : O(n^2)

    ## Explanations -

        - Number of iterations would be :- n(n-1)/2


    ## Stability of Insertion sort

        - only adjacent swaps just like bubble sort
        - so here , it is possible to maintain the relative order

        # Insertion sort is --> Stable sort 


    ## Use Cases -


    ## Difference between (bubble , Selection & Insertion)

        1. bubble sort - After every pass,  max element at the end  of the array
        2. Selection Sort - After every pass , min element at the first of the array
        3. Insertion Sort - 






*/