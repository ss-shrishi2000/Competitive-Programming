
class Solution {
public:
    int countBinarySubstrings(string s) {
        int res = 0;
        //prev is the count of previous duplicates, curr is the count of current duplicates
        int prev = 0;
        int curr = 1;
        for(int i = 1; i < s.size(); i++)
        {
            if(s[i] != s[i - 1]){
                res += min(prev, curr);
                prev = curr;
                curr = 1;
            }
            else curr++;
        }
        res += min(prev, curr);
        return res;
    }
};
