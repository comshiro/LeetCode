#include <string.h>
#include <cctype>
#include <string>
#include <vector>
#include <cctype>
using namespace std;

class Solution {
public:
    bool isValid(const string& s) {
        for (char c : s) {
            if (!isalpha(c)) return false;
        }
        return true;
    }

    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";

        string prefix = strs[0]; 


        for (int i = 1; i < strs.size(); i++) {
            int k = 0;
            while (k < prefix.size() && k < strs[i].size() && prefix[k] == strs[i][k]) {
                k++;
            }
            prefix = prefix.substr(0, k);
            if (prefix.empty()) return "";
        }

        return prefix;
    }
};

