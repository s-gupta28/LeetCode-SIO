#include <iostream>
#include <vector>
#include<math.h>
#include<bits/stdc++.h>
using  namespace std;



// to get max sum of a sub array return sum
// brute force get all subarray

int subArr(vector<int>& nums){
    int maxsum=nums[0];                       // it is non empty subarray
    for(int i=0; i<nums.size();i++){
        int cursum=0;
        for(int j=i; j<nums.size();j++){
            cursum+=nums[j];
            maxsum=max(maxsum,cursum);
        }
    }

return maxsum;}

//kadane algorithm 0(n)
//it works by starting from the wndow of size 1 with start increasing the windlow
// till certain condition is being meet
// if the condition become false it leaves the prev window and start a new window

int kadane(vector<int>& nums){

    int maxSum=nums[0];// it is non empty subarray
    int curSum=0;

    for(auto n :nums){
        curSum=max(curSum,0);
        curSum+=n;
        maxSum=max(maxSum,curSum);
    }
    return maxSum;

}
 //kadane algorithm 0(n) with sliding window
 //here we are also navigat1ing the index with same window size inc 
 //till a particular condn anf then chage in the size of window to 1 if condn become false
// to get max sum of a sub array return start and end index

pair<int,int> slidingWindow(vector<int> &nums){
    int maxSum= nums[0];
    int curSum=0;
    int L=0;
    int maxL=0, maxR=0;

    for(int R=0; R<nums.size();R++){
        if (curSum<0){
            curSum=0;
            L=R;
        }
        curSum+=nums[R];
        if(curSum>maxSum){
            maxSum=curSum;
            maxL,maxR=L,R;
            
        }

    }
 pair<int,int> p={maxL, maxR}; 
return p;}

int main  (){
    vector<int> nums={4,-1,2,-7,3,4};
    pair<int,int>p;
    p=slidingWindow(nums); 
    cout<<p.first;
    cout<<p.second;
    

}