class Solution {
public:
    bool isPalindrome(string s) {
        if(s.size()==1) return true;
        transform(s.begin(),s.end(),s.begin(),::tolower);
        string::iterator start = s.begin();
        string::iterator end = s.end();
        while(start<end){
            if(((*start<'a')||(*start>'z'))&&((*start<'0')||(*start>'9'))){
                ++start;
                continue;
            }else if(((*end<'a')||(*end>'z'))&&((*end<'0')||(*end>'9'))){
                --end;
                continue;
            }
            if((char)tolower(*start)!=(char)tolower(*end)){
                return false;
            }
            ++start;
            --end;
        }
        return true;
    }
};