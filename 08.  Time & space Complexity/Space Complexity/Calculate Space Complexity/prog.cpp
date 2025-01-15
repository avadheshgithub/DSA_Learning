/* 

  ## Examples


Q(1)  calculate the Space complexity for  given program

    # Program

        arr = |6|3|2|4|1|7|1|5|
        we have to find = 1;

        vector<int>check = (8,0)

        num of operations = 7 operations

        for(int i=0;i<arr.size();i++){
            arr[i] = 
        }


    ## space complexity - O(n) // Beacuse extra space used
    ## Time Complexity - O(n)


Q(2) Calculate the space complexity for the given program

    ## Program

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



    ## Space Complexity : O(1)  Because no extra space are used
    ## Time Complexity : O(n^2)


Q(3)  Calculate the space complexity for the given program

    ## Program

        arr = |6|3|2|4|1|7|1|5|
        we have to find = 1;

        
        int sum = 0;
        int n = arr.size()-1;

        for(inti=0;i<=n;i++){
            sum +=arr[i]
        }

        int s = n*(n+1) /2;
        cout<<sum-s;


    ## Time complexity : O(n)
    ## space Complexity : O(1) // Because extra space not used


Q(4) calculate space complexity

    ## Program

        int a[n];
        for(int i=0;i<n;i++){
            a[i]++;
        }

    ## Space Complexity : O(n) // extra array used
    ## time complexity : O(n)


Q(5) Calculate space complexity

    ## Program

        int c = 0;  // constant extra space
        for(int i=0;i<n;i++){
            c++;
        }

    ## SPace Complexity :- O(k) ~~ O(1) // constant extra space
    ## Time complexity : O(n)


Q(6) Calculate space complexity 

    ## Program

        vector<int>a;
        vector<int>b;
        for(int i=0;i<n;i++){
            for(nt  j =0;j<m;j++){
                a.push_back(10);
                b.push_back(5);
            }
        }

    ## space Complexity : O(n*m)
    ## time Comlexity : O(n*m)


Q(7) Calculate space complexity 

    ## Program

        vector<int>a(n);
        vector<int>b(m);
        for(int i=0;i<n;i++){
            for(int j =0;j<m;j++){
                a[i] = i;
                b[i] = j;
            }
        }

    ## space Complexity : O(n+m)
    ## time Comlexity : O(n*m)


Q(8) Space complexity for creating 2D MAtrix

    ## program

        int arr[m][n];
        for(int i=0;i<n;i++){
            for(int j =0;j<m;j++){
                
            }
        }

    ## space Complexity : O(n*m) // n*m cells(Boxes)
    ## time Comlexity : O(n*m)


Q(9) What will be the space complexity if we create 3 arrays of the same size


    ## Program

        int a[n],b[n],c[n];
        for(int i=0;i<n;i++){
            c++;
        }

    ## space Complexity : O(n+n+n) = O(3n) = O(n)
    ## time Comlexity : O(n)
    

Q(10) calculate time and space both complexity for the below program

    ## Program

        int a[n][n/2];
        for(int i=1;i<n;i*=2){
            for(int j=0;j<n/2;j++){
                a[i][j]++;;
            }
        }

    ## space Complexity : O(n*n/2) = O(n^2/2) = O(n^2)
    ## time Comlexity : O(n) * O(log n)  = O(nlogn) 

                        hint - If Outer loop conditions and inner loop condition are not interlinked then multiply 
                                    1. time complexuty of inner loop - O(n/2) = O(n)
                                    2. time complexuty of outer loop - O(log.2  n) // base 2
*/

