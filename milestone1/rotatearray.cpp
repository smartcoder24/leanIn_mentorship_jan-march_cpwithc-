class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        // int m[nums.size()];
        //  k = k%nums.size();
        // for(int i=0; i<nums.size()-k; i++){
        //     m[i+k]=nums[i];
        // }
        // for(int i=0; i<k; i++){
        //     m[i]= nums[nums.size()-k+1+i];
        // }
        // for(int i=0; i<nums.size(); i++){
        //     nums[i]=m[i];
        // }
         int n=nums.size();k=k%n;
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
    }
};
