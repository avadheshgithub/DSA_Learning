/*

    ############ Methode 01 #############


    # Peak element in rotated array

               arr = 1 3 4 8 20 28 33

    given rotated array - 28 33 1 3 4 8 29 33

    here it is rotated by k=2 

    so here our changing point is 31 & 1, after 1 & 31 array is sorted even before or after

    pivot - 31 & 1 (smallest element or biggest element of this array )

    # find pivot element- (smallest element or Bigger element of its adjacent)

        - 1 this the only element which is smaller than its adjacent elements
        - 31 this the only element which bigger than its adjancent elements
        - before pivot element array is sorted & after pivot array  is sorted


    #1st Condition
    
         if(arr[mid]<arr[mid-1] && arr[mid]<<arr[mid+1]) // smaller element 01
        else if (arr[mid]>arr[mid-1]) && arr[mid]>arr[[mid+1]] // bigger element 33
    
    #2nd condition



*/


int main(){
        
        // MEthode 02
        // 4,5,6,7,0,1,2 pivot (0) sorted before and after the pivot , now search
        int nums [] = {4,5,6,7,0,1,2};
        int target = 0;

        int n = 7;
        int low = 0;
        int high = n-1;
        if(n==2){
            if(target==nums[0]) return 0;
            else if (target==nums[1]) return 1;
            else return -1;
        }

        // find pivot element or index (it devide our array)
        int pivot = -1; // smallest element 
        while(low<=high){
            int mid = low+(high-low)/2;
            if(mid==0) low = mid+1;
            else if(mid==n-1) high = mid-1;
            else if(nums[mid]<nums[mid+1] && nums[mid]<nums[mid-1]){
                pivot = mid;
                break;
            }
            else if(nums[mid]>nums[mid+1] && nums[mid]>nums[mid-1]){
                pivot = mid+1;
            }
            else if(nums[mid]>nums[high]) low = mid+1;
            else high = mid-1; 
        }
        if(pivot==-1){ // already sorted , no rotation then search on full array
            low = 0;
            high = n-1;
            while(low<=high){
                int mid = low+(high-low)/2;
                if(nums[mid]==target) return mid;
                else if(nums[mid]>target) high = mid-1;
                else low = mid+1;
            }
            return -1;
        }
        if(target>=nums[0] && target<=nums[pivot-1]){
            low = 0;
            high = pivot-1;
            while(low<=high){
                int mid = low+(high-low)/2;
                if(nums[mid]==target) return mid;
                else if(nums[mid]>target) high = mid-1;
                else low = mid+1;
            }
        }
        else{
            low = pivot;
            high = n-1;
            while(low<=high){
                int mid = low+(high-low)/2;
                if(nums[mid]==target) return mid;
                else if(nums[mid]>target) high = mid-1;
                else low = mid+1;
            }
        }
        return -1;
}





/*
   ################ MEthode 01 ###############

class Solution {
public:
    int search(vector<int>& nums, int target) {
        vector<int>vec;
        bool flag = false;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                flag = true;
                return i;
                
            }
        }
        return -1;
    }

*/