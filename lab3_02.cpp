#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=2;
    int dif=arr[1]-arr[0];
    int test=2;
    for(int j=2;j<n;j++){
        if(dif==(arr[j]-arr[j-1])){
            test++;
        }
        else {
            dif=(arr[j]-arr[j-1]);
            test=2;
        }
        ans=max(ans,test);
    }
            cout<<"maximum number sequence of subarray:"<<ans;

    return 0;
}
