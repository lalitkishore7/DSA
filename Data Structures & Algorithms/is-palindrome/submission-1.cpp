class Solution {
public:
    bool isPalindrome(string s) {

        // string temp = "";
        // for(auto ch: s){
        //     if(isalnum(ch)) temp += tolower(ch);
        // }

        int i = 0;
        int j = s.length() - 1;

        while(i < j){

            while(i < j && !isalnum(s[i])) i++;
            while(i < j && !isalnum(s[j])) j--;

            if(tolower(s[i]) != tolower(s[j])) return false;

            i++;
            j--;
        }

        return true;
        
    }
};
