#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N,temp,del1,del,del2;
    cin>>N;
    vector  <int> vec(N);
    for(int i=0;i<N;i++){
        cin>>vec[i];
    }
    cin>>del;
    cin>>del1;
    cin>>del2;

    vec.erase(vec.begin()+del-1);
    vec.erase(vec.begin()+del1-1,vec.begin()+del2-1);

    cout<<vec.size();
    cout<<endl;
    
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
    return 0;
}
