//Problem Statement 

/*
Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".

 

Example 1:

Input: strs = ["flower","flow","flight"]
Output: "fl"
Example 2:

Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.
*/

//Solutions

/*
Approach-01
class Solution {
public:
    string longestCommonPrefix(vector<string>& str) {
        string ans = "";
        if(str.size()==0) return ans;
        string s= *min_element(str.begin(),str.end());//return minimum string
        
        for(int i=0;i<s.size();i++){
            for(int j=0;j<str.size();j++){
                if(s[i]!=str[j][i]){
                    return ans;
                }
                
            }
            ans.push_back(s[i]);
        }
        return ans;
        
    }
};
*/