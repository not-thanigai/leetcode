class Solution {
public:
    int majorityElement(vector<int>& nums) {
        /*unordered_map<int,int> m;
        for(int c:nums){
            m[c]++;
        }
        for(auto c : m){
            if(c.second>nums.size()/2) return c.first;
        }
        return 0;*/

        //moore voting algorithm
        int major=nums[0]; int count=0;
        for(int i=0;i<nums.size();i++){
            if(count==0){
                major = nums[i];
                count++;
            }else if(major ==nums[i]){
                count++;
            }else count--;
        }
        return major;

    }
};