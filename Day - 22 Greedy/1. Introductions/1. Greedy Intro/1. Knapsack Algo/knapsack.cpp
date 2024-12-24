#include <bits/stdc++.h>
using namespace std;

// Structure to store value and weight of an item
struct Item {
    int value, weight;
};

// custom Comparator function to sort items by value-to-weight ratio
bool comp(Item a, Item b) {
    return (double)a.value / a.weight > (double)b.value / b.weight;
}

double fractionalKnapsack(int W, vector<int>& values, vector<int>& weights) {
    vector<Item> items;

    // Create items from values and weights
    for (int i = 0; i < values.size(); i++) {
        items.push_back({values[i], weights[i]});
    }

    // Sort items based on value-to-weight ratio
    sort(items.begin(), items.end(), comp);

    double ans = 0.0; // Total value in the knapsack

    // Greedy selection
    for (int i = 0; i < items.size(); i++) {
        if (items[i].weight <= W) {
            // Take the whole item
            ans += items[i].value;
            W -= items[i].weight;
        } else {
            // Take fractional part of the item
            ans += ((double)items[i].value / items[i].weight) * W;
            break;
        }
    }
    return ans;
}

int main() {
    vector<int> values = {60, 100, 120};
    vector<int> weights = {10, 20, 30};
    int W = 50; // Capacity of the knapsack

    double maxValue = fractionalKnapsack(W, values, weights);
    // Print the result
    cout << "Maximum value in the knapsack: " << fixed << setprecision(2) << maxValue << endl;

    return 0;
}
