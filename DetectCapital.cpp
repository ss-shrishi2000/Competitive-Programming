#include<bits/stdc++.h>
using namespace std;
 bool detectCapitalUse(string word)
    {
        if(isupper(word[0])==true)
        {
            if(isupper(word[1])==true)
            {
                for(int i=1;i<word.size();i++)
                {
                    if(isupper(word[i])==false)
                        return false;
                }
                return true;
            }
            else
            {
                for(int i=1;i<word.size();i++)
                {
                    if(islower(word[i])==false)
                        return false;
                }
                return true;
            }
        }
        else
        {
            for(int i=1;i<word.size();i++)
            {
                if(islower(word[i])==false)
                    return false;
            }
            return true;
    }
}
int main()
{
    string word;cin>>word;
    if(detectCapitalUse(word))
        cout<<"True";
    else
        cout<<"False";
    return 0;
}
