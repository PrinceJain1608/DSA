//APPROACH 1
class Solution {
public:
    string removeDuplicates(string s) {
        string temp = "";
        int i = 0;
        while (i < s.length()) {
            if (temp.empty() || s[i] != temp.back()) {
                temp.push_back(s[i]);
            } else {
                temp.pop_back();
            }
            i++;
        }
        return temp;
    }
};
//APPROACH 2
class Solution {
public:
   string removeDuplicates(string s) {
        string res;
        
        for(char ch : s){
            if(!res.empty() && res[res.size() - 1] == ch) res.pop_back();
            else res+=ch;
        }
        return res;
    }
};