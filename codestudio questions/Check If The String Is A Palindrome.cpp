#include <bits/stdc++.h>

char lowercase(char ch)
{
    if(ch>='a' && ch<='z')
    {
        return ch;
    }
    else
    {
        char temp=ch-'A'+'a';
        return temp;
    }
}
bool checkPalindrome(string s) {

    int start=0;
    int end=s.length()-1;
    while(start<=end)
    {
        if(lowercase(s[start])==lowercase(s[end]))
        {
            start++;
            end--;
        }
        else if(isalnum(s[start])==0)
        {
            start++;
        }
        else if(isalnum(s[end])==0)
        {
            end--;
        }
        else
        {
            return 0;
        }
    }
    return 1;
}



