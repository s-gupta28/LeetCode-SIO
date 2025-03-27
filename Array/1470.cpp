#include<iostream>
#include <vector>
using namespace std;


vector<int> shuffle(vector<int>& nums, int n) {
    vector<int> ans;
    int s=nums.size();
    int p1=0;
    int p2=n;
    int i=0;
    while(p1<s || p2<s){
        if(i==0){
            ans[0]=nums[0];
            i++;
        }
        ans[i]=nums[p2];
        ans[i+1]=nums[p1];
        i++;
        p1++;
        p2++;

    }
}
        

        int main(){
            vector<int> nums = {2,5,1,3,4,7};
            int n = 3;
            vector<int> ans=shuffle(nums, n);
            int i=0;
            while(i<nums.size()){
                cout<<ans[i]<<" ";
            }

        }