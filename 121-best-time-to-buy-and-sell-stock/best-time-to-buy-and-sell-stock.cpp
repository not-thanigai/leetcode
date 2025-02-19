class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int cmax = prices[0], cmin = prices[0], cmin_index = 0, cmax_index = 0, res=0;
        
        while(cmax_index < prices.size() - 1){
            for(int j = cmax_index;j < prices.size();j++){
                if(prices[j] >= cmax){
                    cmax = prices[j];
                    cmax_index = j;
                }
                if(prices[j] <= cmin){
                    cmin = prices[j];
                    cmin_index = j;
                    if(cmax_index < cmin_index) {
                        cmax_index = cmin_index;
                        cmax = prices[cmax_index];
                    }
                }
                res = max(res, cmax-cmin);
            }
                cmax_index++;
                
        }
        return res;
    }
};