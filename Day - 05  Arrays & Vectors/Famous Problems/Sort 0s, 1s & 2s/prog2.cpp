#include <iostream>
#include <vector>
using namespace std;

void display(vector<int>& v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }cout<<endl;

}

void sort(vector<int>& nums){
        int n = nums.size();
        int low =0;
        int mid = 0;
        int high = n-1;

        while(mid<=high){
            if(nums[mid]==2){
                int temp = nums[mid];
                nums[mid] = nums[high];
                nums[high]= temp;
                high--;
            }
            else if(nums[mid]==0){
                int temp = nums[mid];
                nums[mid] = nums[low];
                nums[low] = temp;
                low++;
                mid++;
            }
            else{
                mid++;
        }   }
    }

int main(){
    /*
                               || Doutch flag solution||
                            -----------------------------
                         second methode to solve this question (3 pointer)
                            |0 | 0 | 2 | 1| 1| 2|
                            low               high
                            mid


        int n = nums.size();
        int low = 0
        int mid = 0;
        int high = n-1;
    
        while(mid<=high){
            if(nums[mid]==2){
                swap(mid,high);
                high--;
            }
            else if(nums[mid]==0){
                swap(mid,low);
                low++;
                mid++;
            }
            if(nums[mid]==1){
                mid++;
            }
        }
    
     hint - 0 to low-1 --> 0, high to n-1 --> 2, low to mid-1 --> 1

    */

    vector<int>v;
    v.push_back(2);
    v.push_back(0);
    v.push_back(2);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);

    display(v);
    sort(v);
    display(v);

}