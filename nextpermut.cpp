#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
class Solution {
public:

    void nextPermutation(vector<int>& nums) {
        int ind=-1;
        int n=nums.size();
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                ind=i;
                break;
            }
        }
        if(ind==-1){
            reverse(nums.begin(),nums.end());
            // return nums;
        }
        for(int i=n-1;i>ind;i--){
            if(nums[i]>nums[ind]){
                swap(nums[i],nums[ind]);
                break;
            }
        }
        reverse(nums.begin()+ind+1,nums.end());
        // return nums;
        
   
    }   
};
int main(){
    vector<int> n={1,3,4,2,5};
    Solution s;
    s.nextPermutation(n);
    for(int i=0;i<n.size();i++){
        cout<<n[i]<<", ";
    }
}