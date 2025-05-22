class Solution {
public:
    int roman(char c) {
    switch (c) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default: return 0; 
    }
}

    int romanToInt(string s) {

        int n = s.length(); int solution = 0;
        for(int i = 0; i<n;i++ )
        {
            if(roman(s[i])>=roman(s[i+1]))
                solution += roman(s[i]);
            else
                {
                    solution += roman(s[i+1]) - roman(s[i]);
                    i++;
                }
        }
        return solution;
    }
};