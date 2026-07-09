class Solution {
  private:
    int maxAmount(vector<int>& money, int n, vector<int>& dp) {

        if (n == 0) return money[0];
        if (n == 1) return max(money[0], money[1]);

        if(dp[n] != -1) return dp[n];

        return dp[n] = max((money[n] + maxAmount(money, n - 2, dp)), maxAmount(money, n - 1, dp));
    }
public:
    int rob(vector<int>& nums) {

        int n = nums.size();
        if(n == 1) return nums[0];
        vector<int> arr1;
        vector<int> arr2;

        for(int i = 0; i < n; i++){

            if(i != n - 1) arr1.push_back(nums[i]);
            if(i != 0) arr2.push_back(nums[i]);

        }

        vector<int> dp1(arr1.size(), -1);
        vector<int> dp2(arr2.size(), -1);

        return max(maxAmount(arr1, arr1.size() - 1, dp1), maxAmount(arr2, arr2.size() - 1, dp2));
        
    }
};
