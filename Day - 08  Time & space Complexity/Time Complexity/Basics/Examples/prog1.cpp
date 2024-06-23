

// 1. Methode - Brute force (No matter time & space)

/*
        arr = |6|3|2|4|1|7|1|5|

        we have to find = 1;

        num of operations = 7+6+5+4+2 = 24 opera

        bool flag = false;
        for(int i=0;i<arr.size()-1;i++){
            for(int j=i+1;j<arr.size();j++){
                if(arr[i]==arr[j]){
                    cout<<arr[i];
                    flag = true;
                    break;
                }
            }
            if(flag==true) break;
        }



    ## Time Complexity : O(n^2)
    ## Space Complexity : O(1)
    ## Observation :-
                1. space effiecent
                2. but time consuming


*/

