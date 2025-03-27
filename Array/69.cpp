#include<iostream>
using namespace std;

int mySqrt(int x) {
    int s=0;
    int e=x;
    int ans;

    while(s<=e){
        int mid=(e-s/2)+s;
        if((mid*mid)==x){
            ans=mid;
        }
        else if((mid*mid)>x){
            e =mid-1;

        }
        else {
            ans=mid;
            s=mid+1;

        }
    }

return ans;}

int main(){
    int x;
    cin>>x;
    x=mySqrt(x);
    cout<<x;

}