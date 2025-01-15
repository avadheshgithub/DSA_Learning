/*

    ## Problem Statement :

        -Given an array , arr[] containing  'n' integers , the taskk is ti find an integer (say k) such that after replacing each and every index if the array by |Ai-k| where (i=>[1,n]) reuslt in a sorted array, if no such integers exiest that satisfie the above conditions then return -1;
        find the range of k


    ## Descreption :


        given k= 5

        - arr {  5   3   8}
                a1  a2  a1


        Result arr [0  -2  3]  but is not in sorted order  # we have also nmaintain thew relative order

        but if mod take for | |

        so now 

        Result arr [0   2   3]


         so find the range of k where i put the in place of k value and in resualtnat arr if we take mod then it would be sorted in order


         such k values are k= 4,5,6

    ## Find the range of k where if i take modules then it would be in sorted order

        k range it mean minimum range and maximum range
        so
            # Minimum range :

                if  5    2   10

                |5-k|  |2-k| |10-k|  --> in the sorted order

                |2-k|>=|5-k|  and  |10-k|>=|2-k|

                so minimum 

                |2-k|>=|5-k| => (k-2)^2-(k-5)^2 >= 0  => k>=7/2;

            #  Maximum range

                |10-k|>=|2-k| => (k-10)^2-(k-2)^2 >= 0 => k<=6

        








*/