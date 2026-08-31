class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int value = 0;
        for (int i = 0 ; i < nums.size()+1 ; ++i) {
            value += i;
        }
        for (int num : nums) {
            value -= num;
        }
        return value;
    }
};
