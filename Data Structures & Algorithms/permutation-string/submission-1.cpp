class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n=s1.size();
        unordered_map<char,int>count1;
        for (char c:s1){
            count1[c]++;
        }

        int need = count1.size();
        int l = -1;
        while (l+s1.size()<s2.size()){
            l++;
            int curr = 0;
            unordered_map<char,int>count2;
          for(int i=l; i<l+s1.size();i++){
            
            char ch=s2[i];
            count2[ch]++;
            if (count2[ch] > count1[ch]){
                break;
            }
            if  (count2[ch] == count1[ch]){
                curr++;
            }
          }
            if (curr==need){
                return true;
            }
          
        }
        return false;
    }
};
