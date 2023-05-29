#include<algorithm>
#include<vector>
using namespace std;
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int b0 = 0;
        int b1 = 0;
        int b2 = 0;
        
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                b0++;
            } else if (nums[i] == 1) {
                b1++;
            } else if (nums[i] == 2) {
                b2++;
            }
        }
        
        int i = 0;
        while (b0 > 0) {
            nums[i] = 0;
            b0--;
            i++;
        }
        while (b1 > 0) {
            nums[i] = 1;
            b1--;
            i++;
        }
        while (b2 > 0) {
            nums[i] = 2;
            b2--;
            i++;
        }
    }
};