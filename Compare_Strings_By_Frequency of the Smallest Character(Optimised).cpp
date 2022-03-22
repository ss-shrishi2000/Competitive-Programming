#include<bits/stdc++.h>
using namespace std;
 static int getFreq(string &s)
    {
        int freq[26] = {0};

        for(int i = 0; s[i]; i++)
            freq[s[i] - 'a']++;

        // return freq of lexographically smallest char
        for(int i = 0; i < 26; i++) {
            if(freq[i])
                return freq[i];
        }
        return 0;
    }

    vector<int> numSmallerByFrequency(vector<string>& queries, vector<string>& words)
    {
        vector<int> results;
        int count_freq[12] = {0};
        for(string &word : words)
            count_freq[getFreq(word)]++;

        for(int i = 9; i >= 0; i--)
            count_freq[i] += count_freq[i + 1];
        for(string &query : queries)
            results.push_back(count_freq[getFreq(query) + 1]);

        return results;
    }
