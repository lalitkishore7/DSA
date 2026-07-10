class Solution {
private:
    void powerSet(vector<int>& nums,  vector<vector<int>>& ans, vector<int> arr, int ind){

        if(ind == nums.size()){
            ans.push_back(arr);
            return;
        }


        powerSet(nums, ans, arr, ind + 1);
        arr.push_back(nums[ind]);
        powerSet(nums, ans, arr, ind + 1);

        arr.pop_back();

        
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {

        vector<vector<int>> ans;
        vector<int> arr;

        powerSet(nums, ans, arr, 0);

        return ans;
        
    }
};
