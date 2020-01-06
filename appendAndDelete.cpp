#include <bits/stdc++.h>

using namespace std;

// Complete the appendAndDelete function below.
string appendAndDelete(string s, string t, int k) {
  
    int count =0;
    int s_length=s.length();
    int t_length=t.length();

    
    int minLength=s_length;
    if(s==t)
       return "Yes";
    else
        if(t_length < s_length)
            minLength=t_length;   

        for(int i=0;i<minLength;i++){
            if(s[i]==t[i])
                count++;
            else break;
        }
        int numDel=s_length-count;
        int numEmptyDel=0;
        int numAppend=t_length-count;

        cout<<s_length;cout<<endl;
        cout<<t_length;cout<<endl;
        cout<<count;cout<<endl;
        cout<<numDel;cout<<endl;
        cout<<numEmptyDel;cout<<endl;
        cout<<numAppend;
    
        if(numDel==s_length)
            if(numDel+numAppend<k)
                numEmptyDel=k-numDel+numAppend;
        else 
            numDel==0;
        if(k==(numDel+numEmptyDel+numAppend))
            return "Yes";
        else 
            return "No";

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string t;
    getline(cin, t);

    int k;
    cin >> k;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string result = appendAndDelete(s, t, k);

    fout << result << "\n";

    fout.close();

    return 0;
}
