class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //assuming the array is already sorted then
        //sort(nums.begin(),nums.end());
        vector <int> res;
        std::vector<int>::iterator it;
        int lookup;
        for(int i=0;i<nums.size();i++){
            lookup = target-nums[i];
            it = find (nums.begin(), nums.end(), lookup);
            if (it != nums.end()&&std::distance(nums.begin(),it)!=i){
                res.push_back(i);
                res.push_back(std::distance(nums.begin(),it));
                break;
            }
            cout<<"not: "<<nums[i]<<"\n";
        }
        return res;
    }
};