/*

## Selection Sort Algorithem

 arr =   5  3  1  4   2   find min and swap with first element 
         1  3  5  4   2   avoid 1st & in remaining array,find min and swap with first element 
         1  2  5  4   3   avoid 1st & 2nd element & in remaining array find min and swap with...
         1  2  3  4   5   avoid 1st,2nd,3rd element& in remaining array find min & swap
         1  2  3  4   5   avoid 1st,2nd,3rd,4th element & last element already sorted



## Total swap 

    1. in selection sort - n-1
    2. in bubble sort - n(n^2)/2


    Note - if there is cost of swap then selection sorting is far better than bubble



## Time Complexity :- O(n^2)

    ## Time complexity :- 

        1. Best Case : O(n^2)
        2. Avg Case  : O(n^2)
        3. Worst Case : O(n^2)


    ## Space Complexity :- O(1)

    ## Explainations -
        1. 1st row , num of iterations  -  n
        2. 2nd row , num of iterations  -  n-1
        3. 3rd row , num of iterations  -  n-2
        4. 2nd row , num of iterations  -  n-3
        
    Total num of iterations => n + n-1 + n-2 +..... = n(n-1)/2 = O(n^2)


## Disadvantage

    - there is no optimized methode for this selection sort

## Stability of Selections Sort -

    - Unstable Algorithem


## USe Case -

    - Cost of swapping
    - From starting k minimum eleement out of n
    - if size of array is small

*/