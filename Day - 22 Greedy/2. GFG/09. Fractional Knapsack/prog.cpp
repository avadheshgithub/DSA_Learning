/*
    ## Fractional knapSack      [GFG]

    given -

    n--> items
    w--> Weights/ Capacity
    val--> Profit
*/


/*struct Item{
    int value;
    int weight;
};
class Solution {
  public:
    bool static comp(Item a, Item b){
        double x=(double) a.value/(double) a.weight;
        double y=(double) b.value/(double) b.weight;
        return x>y;
    }
    double fractionalKnapsack(vector<int>& values, vector<int>& weights, int w) {
        vector<Item> item;
        for(int i=0;i<values.size();i++){
            item.push_back({values[i],weights[i]});
        }
        
        sort(item.begin(),item.end(),comp);
        double ans=0;
        for(int i=0;i<item.size();i++){
            if(item[i].weight<=w){
                ans+=item[i].value;
                w-=item[i].weight;
            }
            else{
                ans+=((double)item[i].value/item[i].weight)*w;
                w=0;
            }
        }
        return ans;
    }
};*/