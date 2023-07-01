void moveZeroes(vector<int>& nums) 
    {
        if(nums.size()==1) return;
        int l=0;
        for (int i=0;i<nums.size();i++)
        {
            if(nums[i]!=0)
            {
                swap(nums[l],nums[i]);
                l++;
            }
        }
    }
