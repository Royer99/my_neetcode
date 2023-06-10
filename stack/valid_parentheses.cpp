class Solution {
public:
    bool isValid(string s) {
        if(s.size()%2!=0){
            return false;
        }
        vector<char> tokens;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                tokens.push_back(')');
            }else if(s[i]=='['){
                tokens.push_back(']');
            }else if(s[i]=='{'){
                tokens.push_back('}');
            }else if(!tokens.empty())
                if(s[i]==tokens.back()){
                    tokens.pop_back();
                }else{
                return false;
            }else{
               return false; 
            }
        }
        if(tokens.empty()){
            return true;
        }
        return false;
    }
};