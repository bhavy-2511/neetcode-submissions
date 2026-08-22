class Solution {
public:
    bool isPalindrome(string s) {
       string dup;
       int siz=s.size();
       for (int i = 0; i<siz; i++){
         if (isalnum(s[i])){
           
           dup.push_back(tolower(s[i]));
           
         }
        }
        int new_size=dup.size();
        for (int j=0; j<new_size-j-1; j++){
            if (dup[j]!=dup[new_size-j-1]){
                return false;
            }
        }
        return true;
    }
};
