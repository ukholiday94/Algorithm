class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> re_arr;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i+1; j < nums.size(); j++)
            {
                //cout << nums[i] << " " << nums[j] << endl;
                if (nums[i]+nums[j] == target)
                {
                    re_arr.push_back(i);
                    re_arr.push_back(j);
                    return re_arr;
                }
            }
        }
        return re_arr;
    }
};