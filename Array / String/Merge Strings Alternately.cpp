/*
   
    Company Tags                : will bo soon
    Leetcode Link               : https://leetcode.com/problems/merge-strings-alternately/?envType=study-plan-v2&envId=leetcode-75
*/
/**************************************************************** C++ ****************************************************************/
//Approach-1 
//T.C : O(n)
//S.C : O(1)

class Solution {
public:
    string mergeAlternately(string word1, string word2) {

        string s="";

        int n=word1.size();
        int m=word2.size();


        int cnt=1;

        int i=0,j=0;

        while(i<n ||  j<m){

           if(cnt&1  && i<n){
             s+=word1[i];
             i++;
           }
           else if(j<m){            
             s+=word2[j];
             j++;
           } 

           cnt++;

        
        }


        return s;
        
    }
};
