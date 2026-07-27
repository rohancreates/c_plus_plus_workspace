#include<iostream>
#include<vector>
using namespace std;
int main(){

int n=0;
cout<<"enter n:";
cin>>n;
int arr[n];
    for(int i =0 ; i<n ; i++){
        cin>>arr[i];
    }
    cout<<endl<<"your array: ";
    
    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }
    for(int i = 0 ; i < n ; i++){
        for(int j = i+1 ; j< n ; j++)
        if(arr[j]>arr[i]){
            swap(arr[i],arr[j]);
        }
    }
    
    cout<<endl<<"your array(sorted decreasingly):";
     for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    vector<int> v;
    int num=1;
    for(int i = 0 ; i<n;i++){
        if(arr[i]==arr[i+1]){
            cout<<num;
            continue;
        }
       cout<<num;
       num++;

    }
    return 0;
}