#include <iostream>
using namespace std;
int binarysearch(int arr[], int n, int target){
    int left=0, right=n-1;
    while(left<=right){
        int mid=left+(right-left)/2;
        if(arr[mid]==target){
        return mid;
        }
        else if(arr[mid]<target){
            left=mid+1;
        }
        else{
            right=mid-1;
        }
    }
    return -1;
}

int main()
{
    int arr[]={10,20,30,40,50};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target=50;
    int result=binarysearch(arr,n,target);


    if(result !=-1){
    cout<<"The target element is found--->"<<result<<endl;
    }
    else{
    cout<<"Sorry The element is not found!"<<endl;
    }
    return 0;
}
