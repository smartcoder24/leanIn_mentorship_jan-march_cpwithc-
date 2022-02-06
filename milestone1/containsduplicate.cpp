class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // for(vector<int>:: iterator it = nums.begin(), it !=nums.end(); it++){
        //     for(vector<int>:: iterator ip = nums.begin(), ip !=nums.end(); ip++){
        // for(int i=0; i<nums.size(); i++){
        //     for(int j=i+1; j<nums.size(); j++){
        //         if(nums[i]==nums[j]){
        //             return true;
        //         }
        //     }
        // }
        set<int> s;
        for(int i=0; i<nums.size(); i++){
            s.insert(nums[i]);
        }
        if(nums.size()==s.size()){
            return false;
        }else{
            return true;
        }
        //         if(*(it)==*(ip)){
        //             return true;
        //         }else{
        //             return false;
        //         }
        //     }
        // } 
        // return ;
    }
};
