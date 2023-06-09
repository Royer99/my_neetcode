class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>freq;
        for(int i =0;i<nums.size();i++){
            pair<map<int,int>::iterator,bool> ret;
            ret = freq.insert(pair<int,int>(nums[i],1));
            if(ret.second==false){
                freq[nums[i]]++;
            }
        }

        //iterate over the map and compare the value of the ith key using the insetion sort.
        list <int> rank(nums.size(),-100000);
        map<int,int>::iterator it = freq.begin();
        while (it != freq.end()){
            list<int>::iterator listItr = rank.begin();
            while (listItr != rank.end()){
                if(it->second>freq[*listItr]){
                    rank.emplace(listItr,it->first);
                    break;
                }
                ++listItr;
            }
            ++it;
        }

        vector<int> res;
        int limit=0;
        list<int>::iterator listItr = rank.begin();
        while (listItr != rank.end()&&limit<k){
            if(*listItr!=-100000){
                res.push_back(*listItr);
                ++limit;
            }
            ++listItr;
        }
        return res;
    }
};