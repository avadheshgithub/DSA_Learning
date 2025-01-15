/*
        ## Kth symbol in grammer     [Leetcode 779]
                               

                               hint - 0-> 01 (replace)
                                      1-> 10 (replace)

        n=1                  0
                        /        \
        n=2            0          1
                     /  \        /  \
        n=3         0    1      1    0          if n=3 & k=4   return 0
                  /  \   / \   / \   / \
        n=4      0   1   1  0  1  0  0  1    if n=4 & k=6   return 0



        ## Logic for  n=4 , k=6 (child node to parent node) travelling

            mean - mai aa kha se rha hu (pichhe jane ki koshish)

            odd position pe - zero ----> ye zeors, zero se generate ho rha hain
            evem position pe - zero ----> ye zeros, one se generate ho rhe hain

            odd position pe - ones ---> ye ones , ones se generate ho rhe hain
            even position pe - ones ---> ye ones, zero se generate ho rhe hain

            void kth(int n,int k){
                if(k%2==0) kth(n-1,k/2);  
                if(k%2!=0) kth(n-1,k/2 +1)
            }

        ## now test ans without makinf tree

            n= 4  && k= 7

                #Observations
                    1. odd zroes --> 0 se generate
                    2. even zeroes --> 1 se generate

                    1. odd ones --> 1 se generate
                    2. even ones --> 0 se generate

            ## 
            k=7 odd 
                same as previous (0 se aaya hoga)
            k = (k/2)+1 = 4 even
                previous ka flip ()
            k = k/2 = 2
                previous ka flip ()
            
            
            ## k->even ----> flip
            ## k->odd -----> same

            #Function
                void kth(int n,int k){
                    if(k%2==0) kth(n-1,k/2);  
                    if(k%2!=0) kth(n-1,k/2 +1)
                }
*/



//----------------------------LEETCODE SOLUTION--------------------------------
/*class Solution {
public:
    int kthGrammar(int n, int k) {   // TC = O(n)
        if(n==1) return 0;
        if(k%2==0){ // even --> flip , k/2
            int prevAns =  kthGrammar(n-1,k/2);
            if(prevAns==0) return 1; // flipping
            else return 0;
        }
        else{ //odd --> same , k/2 +1
            int prevAns = kthGrammar(n-1,k/2+1); // same ans
            return prevAns;
        }
    }
};*/



//-------------------------------LEETCODE SOL 2 ------------------------------
/*class Solution {
public:
    int kthGrammar(int n, int k) {   // TC = O(n)
        if(n==1) return 0;
        if(k%2==0){
            int a = kthGrammar(n-1,k/2);// even---> k/2 and fliping
            if(a==0) return 1; // flipping
            else return 0;
        }
        else return kthGrammar(n-1,k/2+1); // odd-->same & k/2 +1
    }
};*/