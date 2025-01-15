/*
      ## Sliding Window Median               [Leetcode 480]

      Solution - two heap methode

      1. k length window
      2. slide windoe by and each time its median calculative
      

      |       |        |       |
      |       |        |       |
      |       |        |       |
     -----------       ---------
      max heap           min heap

      1. first ele into min heap
      2. next element if less than median then insert min otherwise max heap
      3. both max size diff should be 1
      4. if diff more than that then (heap size that has more  take it top and pop it and push it into another heap)
      5. now calculate median
            1. if even num of ele =  calculate median
            2. if odd num of ele =  calculate median
      6. while moving slidgin window by 1 then its previous element would be removed
      7. how to remove--> so if in both heap , this element comes into top of any heap then pop it // this process ---> lazy evaluation

      8. size of both heap we can maitain through x and y
*/