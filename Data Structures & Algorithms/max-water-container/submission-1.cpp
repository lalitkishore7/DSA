class Solution {
public:
    int maxArea(vector<int>& heights) {

        int maxWater = 0;
        int i = 0;
        int j = heights.size() - 1;

        while(i < j){
            maxWater = max(maxWater, (j - i)*min(heights[i],        heights[j]));

            if(heights[i] < heights[j]) i++;
            else j--;
        }

        return maxWater;
    }
};
