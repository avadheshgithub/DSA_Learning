/*

## What is sorting
  
    - put in accedning or descending order
    - increasing or non- decreasing

## Way of sorting 

    - 1. Inbulit fucntion -> sort(vec.begin(),vec.end()) // O(nlogn)
    - 2. sorting algorithems 

## Buble sort algoithem -

    EX  5  1  4  3  2 
        1  5  4  3  2
        1  4  5  3  2      // Pass - 01
        1  4  3  5  2
        1  4  3  2  5


        1  4  3  2  5
        1  4  3  2  5
        1  3  4  2  5      // pass - 02
        1  3  2  4  5


        1  3  2  4  5
        1  3  2  4  5
        1  2  3  4  5      // pass - 03



        1  2  3  4  5
        1  2  3  4  5      // pass - 04

    ## Observation -

        1. in each pass the nth max element goes to its right position
        2. if there are n elements , then we require atmost "N-1" passes to sort


    ## Algorithems -
        1. in each pass swap 2 adjacent element if arr[i]>arr[i+1];
        2. iteration in each pass also reduce


    ## Conclusions :-
        1. Bubble sort - time compolexty  -> O(n^2);
        2. In-Bulit sort - Time Complexity -> O(nlogn)


    ##  so IN-Built sortinbg is better than bubble sort in case of time complexity
        but - while we have maintain the relative order & stable sorting then bubble sort is fat better than others




*/