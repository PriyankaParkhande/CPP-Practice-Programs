#include<iostream>
using namespace std;
class findMissingElement{
    public:
    void findele(int arr[],int n){
        for(int i=0;i<n-1;i++){
            if(arr[i+1]-arr[i]>1){
                cout<<arr[i]+1<<"\n";
                break;
            }
        }
    }
};
int main(){
    int n;
    int arr[n];
    cout<<"enter size of array";
    cin>>n;
    for(int i=0;i<n;i++){
cin>>arr[i];
    }
    findMissingElement f1;
    f1.findele(arr,n);
    return 0;
}