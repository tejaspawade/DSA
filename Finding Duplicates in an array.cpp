class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int,int>M;
        for(int i=0;i<nums.size();i++)
        {
          M[nums[i]]++;
        }
        
        for(auto& itr:M)
        {
            if(itr.second>1)
            {
                return itr.first;
            }
        }
        
   return 0; }
};
