#include<iostream>
using namespace std;

int main(){
    int arr[]={-2,-5,6,-2,-3,1,5,-6};
    int n=sizeof(arr)/sizeof(arr[0]);

    int currSum=0;
    int maxSum=arr[0];

    for(int i=0;i<n;i++){
        currSum+=arr[i];
        if(currSum>maxSum)maxSum=currSum;
        if(currSum<0)currSum=0;
    }

    cout<<maxSum;
    return 0;
}

