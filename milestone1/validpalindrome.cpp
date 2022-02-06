class Solution {
public:
    bool isPalindrome(string s) {
         // int left = 0;
        // int right = s.size()-1;
        // while(left<right){
        //     if(valid(s[left]) and valid(s[right])){
        //         if(tolower(s[left]) != tolower(s[right])) return false;
        //         left++; right--; continue;
        //     }
        //     if(valid(s[left])) {
        //         right--;
        //         continue;
        //     }
        //     left++;
        // }
        // return true;
         string str="";
        for(int i=0;i<s.length();i++)
        {
            if(int(s[i])>=97 && int(s[i])<=122)
               str+=s[i];
            else if(int(s[i]>=65 && int(s[i])<=90))
               str+=tolower(s[i]);
            else if(int(s[i])>=48 && int(s[i])<=57)
               str+=s[i];
        }
        
         
         int l=0;
               int h=str.length()-1;
               while(l<=h)
               {
                   if(str[l]==str[h])
                   {
                       l++;
                       h--;
                   }
                   else
                       return false;
               }
               return true;
    }
};
