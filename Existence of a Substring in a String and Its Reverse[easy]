# Problem Statement

Given a string `s`, find any substring of length 2 which is also present in the reverse of `s`. Return `true` if such a substring exists, and `false` otherwise.

##Example 1:
Input: s = "leetcode"
Output: true
Explanation: Substring "ee" is of length 2 which is also present in reverse(s) == "edocteel".

##Example 2:
Input: s = "abcba"
Output: true
Explanation: All of the substrings of length 2 "ab", "bc", "cb", "ba" are also present in reverse(s) == "abcba".

##Example 3:
Input: s = "abcd"
Output: false
Explanation: There is no substring of length 2 in s, which is also present in the reverse of s.

Constraints:

1 <= s.length <= 100
s consists only of lowercase English letters.


#solution:
class Solution {
public:
    bool isSubstringPresent(string s) {
        int n = s.size();
        if(n==1) return false;
         string reverseOfS = s;
        string x="";
        reverse(reverseOfS.begin(),reverseOfS.end());
        for( int i = 0 ;i<n;i++){
           if (i + 2 <= n) {
            x = s.substr(i,2); 
        }
            if(reverseOfS.find(x)!=-1) return true;
            
    }
        return false ;
 }
};
