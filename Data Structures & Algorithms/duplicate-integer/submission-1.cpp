class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n=nums.size();
       if( n==0 || n==1){
            return 0;
        }
        
        for (int i = 0; i < n-1; i++) {
        cout << nums[i] << "\n";
        if(nums[i]==nums[i+1]){
            return 1;
        }
       }

       return 0;

    }
};