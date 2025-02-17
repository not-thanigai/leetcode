class Solution {
public:
    int maxSubArray(vector<int>& nums) {
           int sum = 0, maxi = INT_MIN;
           for(int each : nums){
                sum = max(each,each + sum);
                maxi = max(sum,maxi);
           }
           return maxi;
    }
};