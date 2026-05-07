class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        if(n<=1) return nums[0] ;
        int i=0,j=1;
        while(i<n&& j<n){
            while(i<n-1 && j<n && nums[j]<=nums[i]){
                j++;
            }
            swap(nums[i+1],nums[j]);
            i++;
        }
        return i;



    }
};