#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the timeConversion function below.
 */
string timeConversion(string s) {
    string hr=s.substr(0,2);
    string rest=s.substr(2,6);
    string newHrString;
    string returnString;
    int newHr;
    int prevHr=stoi(hr);
    if(s[8]=='P'){
        if(prevHr!=12)
            newHr=prevHr+12;
        else
            newHr=12;
    }
    else{
        if(prevHr==12){
            string newHr="00";
            newHr.append(rest);
            return newHr; 
        }
        else if(prevHr<10){
            // newHr=prevHr;
            string prevHrString=to_string(prevHr);
            string newHrReturn="0";
            newHrReturn.append(prevHrString);
            newHrReturn.append(rest);
            return newHrReturn; 
        }
        else
            newHr=prevHr;
    }

    newHrString=to_string(newHr);
    cout<<newHrString;
    cout<<rest;
    newHrString.append(rest);
    
    return newHrString;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
