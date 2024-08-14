class Solution {
public:
    string reverseWords(string str) {
         int start = 0;
    for (int i = 0; i <= str.size(); i++) {
        if (str[i] == ' ' || i == str.size()) {
            int end = i - 1;
             while (start < end) {
                swap(str[start], str[end]);
                start++;
                end--;
            }
             start = i + 1;
        }
    }
    return str;
    }
};