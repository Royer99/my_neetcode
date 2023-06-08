class Solution {
public:
    bool isAnagram(string s, string t) {
        //if not the same size
        if(s.size()!=t.size()){
            return false;
        }
        vector<std::pair <char,int>> alpha;
        for(int i='a';i<='z';i++){
            alpha.push_back(std::make_pair((char) i,0));
        }

        // for(int i=0;i<alpha.size();i++){
        //     cout<<"letter: "<<alpha[i].first<<" counter: "<<alpha[i].second<<"\n";
        // }
        for(int i=0;i<s.size();i++){
            cout<<(int)s[i]-97<<"\n";
            alpha[(int)s[i]-97].second+=1;
            alpha[(int)t[i]-97].second-=1;
        }
        // for(int i=0;i<alpha.size();i++){
        //     cout<<"letter: "<<alpha[i].first<<" counter: "<<alpha[i].second<<"\n";
        // }

        for(int i=0;i<alpha.size();i++){
            if(alpha[i].second!=0){
                return false;
            };
        }
        return true;
    }
};