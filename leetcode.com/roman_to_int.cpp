//my solution
#include <map>
#include <string>
#include <vector>
using namespace std;
class Solution {
    std::map<char, int> Roman = 
    {{'I', 1},{'V', 5},{'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
public:
    int romanToInt(string s) {
        int ans{0};
        int strln = static_cast<int>(s.length());
        for(int i =strln-1; i>=0; i--)
        {
            //same char as before
            ans += Roman.at(s[i]);
            if(i!=strln-1)
            {
                //case of I towards left
                if(s[i] == 'I' && (s[i+1] == 'V' || s[i+1] == 'X'))
                {
                    ans -= 2* Roman.at(s[i]);
                }
                //case of X towards left
                else if(s[i] == 'X' && (s[i+1] == 'L' || s[i+1] == 'C'))
                {
                    ans -= 2* Roman.at(s[i]);
                }
                //case of c towards left
                else if(s[i] == 'C' && (s[i+1] == 'M' || s[i+1] == 'D'))
                {
                    ans -= 2* Roman.at(s[i]);
                }                
                
            }
        }
        return ans;
    }
};

//interesting solutions
//1. most efficient
class Solution {
public:
    int romanToInt(string s) {
        int answer=0;
        int l=s.length();
        int str[l];
        for(int i=0;i<l;i++){
            if(s[i]=='I')
                str[i]=1;
            if(s[i]=='V')
                str[i]=5;
            if(s[i]=='X')
                str[i]=10;
            if(s[i]=='L')
                str[i]=50;
            if(s[i]=='C')
                str[i]=100;
            if(s[i]=='D')
                str[i]=500;
            if(s[i]=='M')
                str[i]=1000;
        }
        answer=str[0];
        for(int i=1;i<l;i++){
            if(str[i]<=str[i-1]){
                answer+=str[i];
            }
            else{
                answer+=(str[i]-2*str[i-1]);
            }
        }
        return answer;
        
    }
};

//2. interesting choice of containers
class Solution {
public:
    int romanToInt(string s) {
        vector<int> integer(26, 0);
        integer['I' - 'A'] = 1;
        integer['V'- 'A'] = 5;
        integer['X'- 'A'] = 10;
        integer['L'- 'A'] = 50;
        integer['C'- 'A'] = 100;
        integer['D'- 'A'] = 500;
        integer['M'- 'A'] = 1000;
        int n = s.size();
        int num = integer[s[n-1]- 'A'];
        for(int i=0; i<n-1; i++){
            if (integer[s[i]- 'A'] < integer[s[i+1]- 'A']){
                num -= integer[s[i]- 'A'];
            }
            else{
                num += integer[s[i]- 'A'];
            }
        }
        return num;
    }
};


