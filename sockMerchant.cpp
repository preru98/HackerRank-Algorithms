#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>arr(101,0);
    int N,temp,count=0;
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>temp;
        arr[temp]++;
    }
    for(int i=1;i<arr.size();i++){
        count+=arr[i]/2;
    }
    cout<<count;
}
