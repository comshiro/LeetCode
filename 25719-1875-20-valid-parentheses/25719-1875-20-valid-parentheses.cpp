#include <string>
#include <stack>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        unordered_map<char, char> p = {
            {')', '('}, {']', '['}, {'}', '{'}
        };

        for (char c : s) {
            if (!p.count(c)) {
                st.push(c);
            } else {
                if (st.empty() || st.top() != p[c]) {
                    return false;
                }
                st.pop();
            }
        }

        return st.empty();
    }
};
