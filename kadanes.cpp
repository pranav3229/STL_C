#include <vector>
#include <algorithm>
using namespace std;
int maxSubArray(vector<int>& nums) {
        int sum=0;
        int max=*min_element(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(sum>max){
                max=sum;
            }
            if(sum<0){
                sum=0;
            }
        }
        return max;
    }