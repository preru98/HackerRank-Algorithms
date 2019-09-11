#include <bits/stdc++.h>

using namespace std;

// Complete the kaprekarNumbers function below.
void kaprekarNumbers(int p, int q) {
    long num,len,cut;
    int num1,num2,flag=0;
    string str,str1,str2;
    
    for(int i=p;i<=q;i++){
        if(i==1) cout<<i<<" ";
        else if(i==2||i==3) continue;
        else{
            num=i*i;
            str=to_string(num);
            len=str.size();                      
            cut=len/2;                             
            // cut--;                                    
            string str1=str.substr(0,cut);             
            string str2=str.substr(cut,len-cut); 
            num1=stoi(str1); 
            // cout<<num1;
            num2=stoi(str2);  
            // cout<<num2;  
            if(i==(num1+num2)){
            cout<<i<<" ";
            flag=1;
            }
        }
    }
    if(flag==0)
    cout<<"INVALID RANGE";

    /* TO CHECK FEW TEST CASES 
    long num=999999;
    int num1,num2;
    num*=num;                           //2025
    string str=to_string(num);
   
    int len=str.size();                      // 4
   
    int cut=len/2;                             //2
    // cut--;                                    // 1
    string str1=str.substr(0,cut);              //0-1
    string str2=str.substr(cut,len-cut);          //2-3
    cout<<"str1 : "<<str1<<"str2 : "<<str2;
    num1=stoi(str1); 
    num2=stoi(str2); 
    cout<<"str1 : "<<num1<<" str2 : "<<num2;
    */


}

int main()
{
    int p;
    cin >> p;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    kaprekarNumbers(p, q);

    return 0;
}
