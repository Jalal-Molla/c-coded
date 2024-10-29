#include <iostream>
#include <unordered_set>
using namespace std;
int main(){
    unordered_set<int> hashSet;
    int n;
    cout<<"Enter the elements to your Desires: ";
    cin>>n;
    cout<<"enter your elements one bye one:"<<endl;
    for(int i=0;i<n;i++){
        int l;
        cin>>l;
        hashSet.insert(l);
        cout<<"\n";

    }
    cout<<"Hasset elements: ";
    for(const int& num:hashSet){
        cout<<num<<" ";
    }
    cout<<endl;

    // to search the desired elements
    if(hashSet.find(20)!=hashSet.end()){
        cout<<"20 is in the Hashset."<<endl;
    }
    else{
        cout<<"sorry not found"<<endl;
    }
}
