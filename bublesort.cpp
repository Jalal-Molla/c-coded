#include <iostream>
using namespace std;
void bublesort(int arr[], int n){
    for(int i=0;i<n-1;i++){
        for(int j=0; j<n-1;j++){
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

}

int main(){
    int arr[]={64,34,25,12,22};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"The mai array is here: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" the address of  "<<&arr[i]<<" "<<endl;
    }
    bublesort(arr,n);

    cout<<"The sorrted array is here"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" The adress of = "<<&arr[i]<<endl;
    }
    return 0;
}
