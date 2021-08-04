//Problem Statement
/*Write a function that reverses a string. The input string is given as an array of characters s.

 

Example 1:

Input: s = ["h","e","l","l","o"]
Output: ["o","l","l","e","h"]
Example 2:

Input: s = ["H","a","n","n","a","h"]
Output: ["h","a","n","n","a","H"]
*/


//Solutions
/*
// Approach-01 Using Stack Data Struture*/
class Solution {
public:
    void reverseString(vector<char>& s) {
       /* stack<char>st;
        for(int i=0;i<s.size();i++){
            //push array char inside  the stack
            st.push(s[i]);
        }
        // pop every character
        for(int i=0;i<s.size();i++){
            s[i]=st.top();
            st.pop();
            
        }
        */
        
        
      /*  int a=0;
        int e=s.size()-1;
        while(a<=e){
         swap(s[a],s[e]);
            a++;
            e--;
    }*/
        reverse(s.begin(),s.end()); //  Approach-02 (using predefined function)
    
    }
};

