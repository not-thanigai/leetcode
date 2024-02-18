class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> m;
        for(int c:nums){
            m[c]++;
        }
        for(auto c : m){
            if(c.second>nums.size()/2) return c.first;
        }
        return 0;
    }
};