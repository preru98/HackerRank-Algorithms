#include <bits/stdc++.h>

using namespace std;

// Complete the repeatedString function below.
    long repeatedString(string s, long n) {
    long len=s.size();
    long q,r,count=0,countR=0;
    for(long i=0;i<len;i++){
        if(s[i]=='a')
           count++;  
    }
    q=n/len;
    r=n%len;
    for(long i=0;i<r;i++){
        if(s[i]=='a')
            countR++;
    }
 return (count*q+countR);
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    long n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long result = repeatedString(s, n);

    fout << result << "\n";

    fout.close();

    return 0;
}
