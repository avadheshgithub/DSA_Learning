/*
    # Gas Stations   [Leetcode 134]

    Soltuions -

        given : Circular Station (clockWise)

        gas = {1,2,3,4,5} // for travel (i+1) stattion. you get gas--> 
        cost = {3,4,5,1,2} // and you spend gas---> 

     Suppose if-
        your pointer is on first
        1. you got gas 2 and you are spend 5 --> not Possible so Move ahead pointer
        2. check you got gas and spend (if gas<spend) move pointer to next side.

        3. total of gas > total cost   then Return -1;
        4.   
*/

/*class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int G = accumulate(gas.begin(), gas.end(),0);
        int C = accumulate(cost.begin(),cost.end(),0);

        if(C>G) return -1; // Spend > Earn
        int start=0, RemGas=0; // RemGas--> Remaining Gas after spend
        for(int i=0;i<gas.size();i++){
            if(RemGas<0){
                RemGas=0;
                start=i;
            }
            RemGas += gas[i]-cost[i];
        }
        return start;
    }
};*/