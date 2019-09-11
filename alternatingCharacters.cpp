#include <bits/stdc++.h>

using namespace std;

// Complete the alternatingCharacters function below.
int alternatingCharacters(string s) {
int len,len2;
len=s.size();
for(int i=0;i<s.size();i++)
{   
    for(int j=i+1;j<s.size();j++)
    {
        if(s[i]==s[j]){
            s.erase(s.begin() + j); 
            j--;
        }
    }
}
len2=s.size();
return len-len2;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        int result = alternatingCharacters(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
