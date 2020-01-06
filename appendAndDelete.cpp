#include <bits/stdc++.h>

using namespace std;

// Complete the appendAndDelete function below.
string appendAndDelete(string s, string t, int k) {
  
    int count =0;
    int s_length=s.length();
    int t_length=t.length();

    int numDel;
    int numAppend;

    int minLength=s_length;
    if(t_length < s_length)
        minLength=t_length;   

    for(int i=0;i<minLength;i++){
        if(s[i]==t[i])
            count++;
        else break;
    }
    
    numDel=s_length-count;
    numAppend=t_length-count;
    
    int operation=numDel+numAppend;
    if((k>=(s_length+t_length)) || (operation<k && ((k-operation)%2==0)))
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
