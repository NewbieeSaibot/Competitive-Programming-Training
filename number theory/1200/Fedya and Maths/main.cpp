#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    if(s.size() == 1){
        if(s[0] == '4' || s[0] == '8' || s[0] == '0'){
            cout << 4 << endl;
        }else{
            cout << 0 << endl;
        }
    }else{
        if(s[s.size()-2]=='0' || s[s.size()-2]=='2' || s[s.size()-2]=='4' || s[s.size()-2]=='6' || s[s.size()-2]=='8'){
            if(s[s.size()-1] == '0' || s[s.size()-1] == '4' || s[s.size()-1] == '8'){
                cout << 4 << endl;
            }else{
                cout << 0 << endl;
            }
        }else{
            if(s[s.size()-1] == '2' || s[s.size()-1] == '6'){
                cout << 4 << endl;
            }else{
                cout << 0 << endl;
            }
        }
    }
    return 0;
}
