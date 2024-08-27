#include <iostream>
#include <map>
using namespace std;

class Solution {
public:
    map<string, int> romanNumbers = {
        {"I", 1},
        {"V", 5},
        {"X", 10},
        {"L", 50},
        {"C", 100},
        {"D", 500},
        {"M", 1000}
    };

    map<string, int> romanNumberSubs = {
        {"IV", 4},
        {"IX", 9},
        {"XL", 40},
        {"XC", 90},
        {"CD", 400},
        {"CM", 900}
    };

    int romanToInt(string s) {
       int sum = 0;

       char* ps = &s[0];
       for (pair<const string, int>& sub : romanNumberSubs) {
           sum += countAndStripSubs(ps, s, sub.first) * sub.second;
       }
       
       for (pair<const string, int>& number : romanNumbers) {
           sum += countAndStripNumbers(ps, s, number.first) * number.second;
       }

       return sum;
    }

    int countAndStripNumbers(char* ps, string& s, string number) {
        int index;
        int numbersAmount = 0;
        while ((index = s.find(number)) != string::npos) {
            *(ps + index) = '-';
            numbersAmount++;
        }

        return numbersAmount;
    }

    int countAndStripSubs(char* ps, string& s, string subS) {
        int index;
        int subsAmount = 0;
        while ((index = s.find(subS)) != string::npos) {
            *(ps + index) = '-';
            *(ps + index + 1) = '-';
            subsAmount++;
        }

        return subsAmount;
    }
};