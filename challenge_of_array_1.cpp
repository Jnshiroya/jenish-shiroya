#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"given size of array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxno=INT_MIN;
    int minno=INT_MAX;
    for(int i=0;i<n;i++){
        maxno=max(maxno,arr[i]);
        minno=min(minno,arr[i]);
    }
    cout<<"maximum value in array"<<maxno;
    cout<<"minimum value in array"<<minno;
    return 0;

}