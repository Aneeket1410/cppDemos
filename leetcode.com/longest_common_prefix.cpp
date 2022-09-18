#include <string>
#include <vector>
#include <algorithm>
using namespace std;
class Solution1 {
public:
    string longestCommonPrefix(vector<string>& strs) {
        short minLen{200};
        for(auto& str:strs)
        {
            minLen = std::min(minLen, static_cast<short>(str.length()));
        }
        
        short prefixLen{minLen};
        for(short i=1;i<strs.size();i++)
        {
            for(short j=0; j<prefixLen; j++)
            {
                if(strs[i][j] == strs[i-1][j])
                    continue;
                else
                {
                    prefixLen = j;
                    break;
                }
            }
        }
        return strs[0].substr(0, prefixLen);
    }
};

//1. most efficient submission
class Solution2 {
public:
    string longestCommonPrefix(vector<string>& strs) {
        const auto[min,max]= minmax_element(strs.begin(),strs.end());
        string res="";
        string a=*min,b=*max;
        for(int i=0;i<a.size();i++){
            if(a[i]==b[i])
                res+=a[i];
            else 
                return res;
        }
        return res;
    }
};

//2. using sort first and then comparing first and last element, as it is sufficient to compare smallest element to the longest element
// as exit condition is 
class Solution3 {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
       string ans="";
        
        string a=strs[0];
        string b=strs[strs.size()-1];
        for(int i=0;i<a.size();i++){
            if(a[i]==b[i])
                ans=ans+a[i];
            else 
                break;
        }
        
        return ans;
    }
};