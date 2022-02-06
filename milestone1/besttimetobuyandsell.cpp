class Solution {
public:
    int maxProfit(vector<int>& prices) {
                int min = INT_MAX;
        int max =0; 
        int val = 0;
        int tot =0;
        for(int i=0; i<prices.size(); i++){
            if(prices[i]<min){
                min = prices[i];
            }
            val = prices[i]- min;
            if(val<max){
                tot += max;
                min = INT_MAX;
                max = 0;
                i--;
            }else{
                if(max<val){
                    max = val;
                }
            }
        }
        return tot+max;
    }
};
