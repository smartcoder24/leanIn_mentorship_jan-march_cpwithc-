class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
            // for(int i=0; i<nums.size(); i++){
        // if(nums.size()==1){
        //     return nums[i];
        // }
           int i=0;
            while(i<nums.size()){
                        if(nums.size()==1){
            return nums[i];
        }
                if(nums[i]!=nums[i+1]){
                    return nums[i];
                }else{
                    i= i+2;
                }
            }
        
        return 0;
    }
};
