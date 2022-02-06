class Solution {
public:
    bool isAnagram(string s, string t) {
        // int hm[26];
        // // map<string, int> mp;
        // // for(auto i=s.begin(); i!=s.end(); i++){
        // if(s.length()!=t.length()){
        //     return false;
        // }
        // for(int i=0; i<s.length(); i++){
        //     hm[s.at(i)-'a']++;
        // }
        // for(int i=0; i<t.length(); i++){
        //     hm[t.at(i)-'a']--;
        // }
        // for(int i=0; i<26; i++){
        //     if(hm[i]!=0){
        //         return false;
        //     }
        // }
        //     // int count =1;
        //     // mpp[s.find(i)-'a']++ ;
        // return true;
         int nums[26] = {0};
        for(char c:s) {
            nums[c-'a']++;
        }
        for(char c:t) {
            nums[c-'a']--;
        }
        for(int i=0;i<26;i++) {
            if(nums[i] != 0) return false;
        }
        return true;
    }
};
