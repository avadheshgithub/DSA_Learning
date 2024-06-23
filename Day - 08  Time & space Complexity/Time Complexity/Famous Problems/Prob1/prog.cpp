/*

Q() Calculate the time complexity for the following code

    ## Program

        int c=0;
        for(int i=1;i<n;i+=i){ 
            c++;
        }


    ## Time complexity : O(logn)

    ## Solve :- i = i+i = 2*i = i*2 = i*=2 (logn)
                => i value  1,2,4,8,.....n;
                => 2^1, 2^2, 2^3 ........2^x; (total number of temrs approx  ~x)
                => it means 2^x = n;
                => log2 n = x;

                ------ We have already calculated for this :- (Logn) base 2






*/