class Solution {
public:
    int myAtoi(string s) {
         int x = s.size();
     int ans = 0;
     int i = 0;
     int sign = 1;
     while(s[i]==' '){
         i++;
     }
     if(s[i]=='-'){
         sign = -1;
         i++;
     }
     else if(s[i]=='+'){
         i++;
     }
     while(x!=0 and i<x){
         if(s[i]==' ' or s[i]<'0' or s[i]>'9'){
             break;
         }
         if((ans*sign)<INT_MIN/10){
             return -2147483648;
         }
         if(ans*sign>INT_MAX/10){
             return 2147483647;
         }  
         if(s[i]>='0' and s[i]<='9'){
             if(ans*10 == 2147483640 && (s[i]-'0')>=8){
                 if(sign==-1){
                     return -2147483648;
                 }
                 else{
                     return 2147483647;
                 }
             }
             ans = ans*10 + (s[i]-'0');
         }
         
         
         i++;
         
     }
     return ans*sign;
    }
};
