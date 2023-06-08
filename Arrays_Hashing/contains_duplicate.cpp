class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> dup;
        std::pair<std::set<int>::iterator,bool> aux;
        for(int i=0;i<nums.size();i++){
            aux=dup.insert(nums[i]);
            if(aux.second==false){
                return true;
            }
        }
        return false;
    }
};
