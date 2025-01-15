/*
    ## Minimum Product Subset   [GFG]
*/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int minProduct(vector<int> &arr)
{
    int cn = 0, cz = 0, cp = 0; // cn->Negative  z->Zero   p->Positive
    int prod_pos = 1;
    int prod_neg = 1;
    int largestNegative = INT32_MIN;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] < 0)
        {
            cn++;
            prod_neg *= arr[i];
            largestNegative = max(largestNegative, arr[i]);
        }
        if (arr[i] == 0)
        {
            cz++;
        }
        if (arr[i] > 0)
        {
            cp++;
            prod_pos *= arr[i];
        }
    }
    if (cn == 0)
    { // if not negatives
        if (cz > 0)
            return 0;
        else
        {
            auto it = min_element(arr.begin(), arr.end()); // Find the Min within range
            return *it;
        }
    }
    else
    { // if negatives are
        if (cn % 2 == 0)
        {
            // Even times
            return (prod_neg / largestNegative) * prod_pos; // by deviding --> Negate the largest negative
        }
        else
        {
            // Odd times
            return prod_neg * prod_pos;
        }
    }
}

int main()
{
    vector<int> arr{-2, -3, 1, 4, -1, -5};
    int ans = minProduct(arr);
    cout << "Minimum Product Subset Values is :" << ans << endl;
}