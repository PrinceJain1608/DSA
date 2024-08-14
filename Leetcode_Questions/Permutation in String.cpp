//APPROACH 1
class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int m=s1.size();
        int n=s2.size();
        if(n<m){
            return false;
        }
        sort(s1.begin(),s1.end());
         for (int i=0; i<(n-m+1); i++){
            string temp = s2.substr(i,m);
            sort (temp.begin(), temp.end());
            if (temp == s1)
                return true;
        }
        return false;
    }
};


//APPROACH 2
class Solution {
private:
bool checkequal(int a[26],int b[26])
{
    for(int i=0;i<26;i++)
    {
        if(a[i]!=b[i])
        {
            return 0;
        }
       
    }
    return 1;
}

public:
    bool checkInclusion(string s1, string s2) {
        int count1[26]={0};
        for(int i=0;i<s1.length();i++)
        {
            int index=s1[i]-'a';
            count1[index]++;
        }

        int i=0;
        int windowsize=s1.length();
        int count2[26]={0};
        while(i<windowsize && i<s2.length())
        {
            int index=s2[i]-'a';
            count2[index]++;
            i++;
        }
        if(checkequal(count1,count2))
        {
            return 1;
        }
        while(i<s2.length())
        {

        
        char newchar=s2[i];
        int index=newchar-'a';
        count2[index]++;

        char oldchar=s2[i-windowsize];
        index=oldchar-'a';
        count2[index]--;
        i++;
        if(checkequal(count1,count2))
        {
            return 1;
        }
      
    }
      return 0;
    }
};