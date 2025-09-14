#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // helper: convert string to lowercase
    string toLower(const string &s) {
        string t = s;
        for (char &c : t) c = tolower(c);
        return t;
    }

    // helper: mask vowels with '*'
    string maskVowels(const string &s) {
        string t = toLower(s);
        for (char &c : t) {
            if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u') {
                c = '*';
            }
        }
        return t;
    }

    vector<string> spellchecker(vector<string>& wordlist, vector<string>& queries) {
        unordered_set<string> exact(wordlist.begin(), wordlist.end());
        unordered_map<string,string> caseMap;
        unordered_map<string,string> vowelMap;

        // Preprocess wordlist
        for (string &w : wordlist) {
            string lower = toLower(w);
            string masked = maskVowels(w);

            if (!caseMap.count(lower)) caseMap[lower] = w;
            if (!vowelMap.count(masked)) vowelMap[masked] = w;
        }

        vector<string> ans;
        for (string q : queries) {
            if (exact.count(q)) {
                ans.push_back(q);  // exact match
                continue;
            }

            string lower = toLower(q);
            if (caseMap.count(lower)) {
                ans.push_back(caseMap[lower]);  // case-insensitive match
                continue;
            }

            string masked = maskVowels(q);
            if (vowelMap.count(masked)) {
                ans.push_back(vowelMap[masked]);  // vowel-error match
                continue;
            }

            ans.push_back("");  // no match
        }

        return ans;
    }
};
