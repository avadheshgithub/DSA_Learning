/*
    ## Formula 

        1. Formula  O(kn) ~~ O(n)  where k is constant
        2. Formula  O(n+-k) ~~ O(n) where k is constant
        3. Formula  O(k1n^m + k2n^m-1 + k3n^m-3) ~~ O(n^m) // Highest power Cosiders
        

    
    ## 
/*

/*
    ## Logarithem
        
        a^b = c  --> log.a C = b;



*/

/*

## Examples


Q(1)  calculate the time complexity for itetating in a loop

    # Loop

        for(int i=0;i<n;i++){
            cout<<"avadhesh shah"
        }


    ## time complexity - O(n)  // n Iterations



Q(2) what if this time we increment the pointer ny 2?
    
    #Loop

        for(int i=0;i<n;i+=2){
            cout<<"avadhesh shah"
        }


    ## time complexity - O(n/2) ~~ O(n)  // even num of n/2 iterations 
       Final time complexity - O(n)     


Q(3) what if some kind of this num of iterations are coming

    1. O(5n^3+3) = O(5n^3) = O(n^3)

    2. O(6n^2-8) = O(6n^2) = O(n^2)

    3. O(n^2+n) = o(n^2)

    4. O(6n^2+n) = O(n^2) // Highest power considered

    5. O(11n^3 + 4n^2 + 2n + 1) = O(n^3) // highest power considered



Q(4) calculate the time complexity for traversing 2 arrays of size M & N

    ## Program
        int a[n],b[m];

        for(int  i=0;i<n;i++){
            a[i]++;
        }

        for(int j=0;j<m;i++){
            b[i]++;
        }


    ## Time Complexity - O(n+m)



Q(5) calculate the time complexity for this code

    ## Program
        for(int i=1li<=n;i++){
            for(int j=1;j<=n;j++){
                cout<<"avadhesh";
            }
        }


    ## Time complexity - O(n*n) = O(n^2)
     

Q(6) calculate the time complexity for this code

    ## Program
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                cout<<"avadhesh";
            }
        }


    ## Time complexity - n*(n+1/2) = (n^2/2 + n/2) = O(n^2+n) = O(n^2)   
            
        for inner loop, num of iterations 1+2+3+ ----- + n = (n+1)/2
        for outer loop , num of iterations n


Q(7) what id this time we traverse them in a nested manner

    ## Program
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                cout<<"avadhesh";
            }
        }

    ## Time complexity - O(n*m)



Q(8) Calulcate the time complexity for below given code snippet

    ## Program
        int c=0;
        for(int i=0;i<n; i*=k){           
            c++;
        }

    ## time complexity - O(log.k n)
            
                    Loop terminate if  k^x = n  // i= 1 k k^2 k^3 --- k^x (till n < k^x)
                    - log.k n = x; 



Q(9) Q(8) Calulcate the time complexity for below given code snippet

    ## Program
        int c=0;
        for(int i=0;i<n; i++){           
            for(int j=i+1;j<m;j++){
                c++;
            }
        }

    ## time complexity - O

                - For inner loop , num of iterations  m-1  m-2  m-3  ---   m-n
                - For outer loop , num of iterations  n
                - total num of iterations S = N/2[a1+al] = n/2[m-1 + m-n]
                                            = o(n*m-n^2)
                                            = O(m*n)



















*/
