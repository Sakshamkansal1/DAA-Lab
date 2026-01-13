#include<iostream>
using namespace std;

int binarysearch(int arr[],int n,int key){
	int low =0;
	int high=n-1;
	
	while(low<=high){
		int mid = low+(high-low/20);
		
		if(arr[mid]==key){
			return mid;
		}
		if (arr[mid]<key){
			low=mid+1;
		}
		else {
			high=mid-1;
		}
	}
}
int main(){
	int arr[]={ 1,2,3,4,5,6,7,8,9,10,15,18,22};
	int n =sizeof(arr)/sizeof(arr[0]);
	
	int key =22;
	
	int result=binarysearch(arr,n,key);
	
	
	if(result!= -1){
		cout<<"element found"<<key<<"  "<<result+1;
	}
	else{
		cout<<"not found";
	}
	
}
