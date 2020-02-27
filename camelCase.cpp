#include <bits/stdc++.h>

using namespace std;

// Complete the camelcase function below.
int camelcase(string s) {
    int len=s.size();
    int count=0;
    cout<<len;
    int i=0;
    while(i<len){
        if(s[i]<=91 && s[i]>=65)
            count++;
        i++;
    }
    return count+1;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int result = camelcase(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
