/*
        ## Seive of Erathoneses   - GRID

           --->  tC = O(n*log(logn)) ~ O(n)

        an array => 1-100 elements

            1-> NOT PRIME   
            2  ke multiple --> not prime 4,6,8,10,---------
            3 ke multiple ---> not prime 6,9,----
            5 ke multiple ---> not prime 10,15,20,25
            7 ke multiple ---> not prime 14,21,28,35


*/ 
//--------------------------------------------------------------------------------

/*class Solution {
public:
    void fillSieve(vector<bool>& sieve){
        int n = sieve.size()-1;
        for(int i=2;i<=sqrt(n);i++){
            for(int j=i*2;j<=n;j+=i){
                sieve[j]=0;
            }
        }
    }
    int countPrimes(int n) {
        if(n<=2) return 0;
        n = n-1;
        int count=0;
        vector<bool>sieve(n+1,1); // 1 mean Prime & 0 mean not prime
        fillSieve(sieve);
        sieve[0]=0;
        sieve[1]=0;
        for(int i=2;i<=n;i++){
            if(sieve[i]==1) count++;
        }
        return count;
    }
};*/


//------------------------METHODE 02 -------------------------------------
/*class Solution {
public:
    int countPrimes(int n) {
        if (n <= 2) return 0;
        vector<bool> isPrime(n, true);
        isPrime[0] = isPrime[1] = false; // 1 & 2  --> we are not considering

        for (int i = 2; i * i < n; ++i) {
            if (isPrime[i]) {
                for (int j = i * i; j < n; j += i) {
                    isPrime[j] = false;
                }
            }
        }
        return count(isPrime.begin(), isPrime.end(), true); // count true values
    }
};*/