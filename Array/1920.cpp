#include <iostream>
#include <vector>
using namespace std;

vector<int> buildArray(vector<int>& nums) {
    int n=nums.size();
    
    for(int i=0; i<n; i++){
    
        nums[nums[i]]= nums[nums[i]]+n*(nums[i]%n);
        }
       
    
   for(int i=0; i<n; i++){
    nums[nums[i]]/=n  ;
   }
   return nums;
}


int main(){
    cout<<"hi"<<endl;
    vector <int> nums= {5,0,1,2,3,4};
    for(size_t i=0; i<nums.size(); i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    nums=buildArray(nums);
    for(size_t  i=0; i<nums.size(); i++){
        cout<<nums[i]<<" ";
    }



}