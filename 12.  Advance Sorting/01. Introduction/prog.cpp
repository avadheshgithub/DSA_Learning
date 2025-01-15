/* 
    ## Sorting Algorithms 

         1. Bubble sort = O(n^2); Stable
         2. selection sort = O(n^2); not stable
         3. insertion sort = O(n^2); stable
         4. merge sort = O(nlogn); stable
         5. quick sort = O(nlogn); not stable

    # Merge sort
        ## Merge Sort -> Stable
        # TC = O(kn) => O(logn* n) = O(nlogn)  // k is divided by 2 continuously
        # SC = 

        ## Application
            1. used in sorting linked list
            2. it is used to count inversion problem
            3. external sorting

        ## DrawBack
            1. space very bad SC. = xn = nlogn
             Extra space -> n + n/2 + n/4 + n/8+ --------+ n/2 + n/4 + n/8 +-----
            Can be improved by --> delete keyword after merge --> O(n)

*/