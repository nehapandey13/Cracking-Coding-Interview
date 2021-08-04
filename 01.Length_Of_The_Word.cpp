//Problem Statement

/*Given a string s consists of some words separated by some number of spaces, return the length of the last word in the string.

A word is a maximal substring consisting of non-space characters only.

 

Example 1:

Input: s = "Hello World"
Output: 5
Example 2:

Input: s = "   fly me   to   the moon  "
Output: 4

*/

//Solution 1

class Solution {
public:
    int lengthOfLastWord(string s) {
        
        int count = 0;
        int l=s.size();
        int i=0;
        while(i<l){
            if(s[i]!=' '){
                count++;
                i++;
            }else{
                //Current character is a space 
                while(i<l && s[i]==' ')i++;
                
                if(i==l){ // end of the string
                    return count;
                }
                else{
                    count=0;
                }
                
                
                
            }
        }
        return count;
        
        
        
    }

