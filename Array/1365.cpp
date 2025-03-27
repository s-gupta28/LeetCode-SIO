#include<iostream>
#include<vector>
using namespace std;




vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
    vector<int> freq(101,0); // this is a vector of size of 100 all value initialize to 0 as ( 0 <= nums[i] <= 100)
    for(int i:nums){
        freq[i]+=1; // this counts the occurence of each digit
    }
    for(int i=1; i<101; i++){
        freq[i]=freq[i]+freq[i-1]; // freq stores the count of numbers that are smaller than or equal to that specific number.
    }
    vector<int> ans;
    for(int i=0; i<nums.size(); i++){
       int numsb4; 

       if ( nums[i]==0){
        numsb4=0;
       }
       else{
        numsb4=freq[nums[i]-1]; 
       }
       ans.push_back(numsb4);

    }


return ans;
}
  
//brute force

vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
    int cnt=0;
    vector<int> ans;
    for(int i=0; i<nums.size(); i++){
        cnt=0;
        for(int j=0; j<nums.size(); j++){
            if(nums[i]>nums[j] && nums[i]!=nums[j]){
                cnt++;
                // cout<<cnt<<"cnt"<<i<<"i"<<j<<"j"<<endl;
            }
        }
        ans.push_back(cnt);


    }

        
return ans;}

int main(){
    vector <int> nums={8,1,2,2,3};
    vector <int> arr=smallerNumbersThanCurrent(nums);
    for(int i:arr){
        cout<<i<<" ";
    }
}