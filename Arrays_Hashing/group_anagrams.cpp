class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>> anagrams;
        for(int i=0;i<strs.size();i++){
            string aux;
            aux=strs[i];
            sort(aux.begin(),aux.end());
            std::pair<std::map<string,vector<string>>::iterator,bool> ret;
            vector<string>auxV;
            auxV.push_back(strs[i]);
            ret = anagrams.insert(pair<string,vector<string>>(aux,auxV));
            if(ret.second==false){
                anagrams[aux].push_back(strs[i]);
            }
        }
        std::map<std::string, vector<string>>::iterator it = anagrams.begin();
        std::vector<std::vector<string>> res;
        // Iterate through the map and fill the vector
        while (it != anagrams.end())
        {
            res.push_back(it->second);   
            for(int j=0;j<it->second.size();j++){
                // cout<<it->second[j];
            }
            // cout<<"\n";
            ++it;
        }
        return res;
    }
};