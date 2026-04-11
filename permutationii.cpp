class Solution {
public:

    vector<vector<int>> result; (saare unique permutations)
    int n; // size of input array

    void solve(int idx, vector<int>& nums){
        // base case: jab idx last tak pahunch jaye
        if(idx == n){
            result.push_back(nums); // ek permutation mil gaya, store kar lo
            return;
        }

        unordered_set<int> st; 
        // ye set use ho raha hai duplicates avoid karne ke liye

        for(int i = idx; i < n; i++){
            // agar current element pehle use nahi hua iss level pe
            if(st.find(nums[i]) == st.end()){
                st.insert(nums[i]); // mark as used

                swap(nums[i], nums[idx]); 
                // current element ko idx position pe le aao

                solve(idx + 1, nums); 
                // next position ke liye recursion

                swap(nums[i], nums[idx]); 
                // backtrack: original state wapas lao
            }
        }
    }

    vector<vector<int>> permuteUnique(vector<int>& nums) {
        n = nums.size(); // array ka size
        solve(0, nums);  // recursion start from index 0
        return result;   // saare unique permutations return
    }
};