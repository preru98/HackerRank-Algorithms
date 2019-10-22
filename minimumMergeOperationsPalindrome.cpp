#include<iostream>
#include<vector>
using namespace std;

int main(){
    int N,temp;
    cout<<"Enter N";
    cin>>N;
    vector <int> vec(N);
    for(int i=0;i<vec.size();i++){
        cin>>vec[i];
    }
    for(int i:vec){
        cout<<i<<" | ";
    }
    return 0;
}