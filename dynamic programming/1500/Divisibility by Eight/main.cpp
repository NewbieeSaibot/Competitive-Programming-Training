#include <bits/stdc++.h>

using namespace std;

string s;
int answer = -1;

int solve(int pos, int deep, int value){
    if(value%8==0 && pos != 0 && deep != 0){
        answer = value;
        return 1;
    }
    if(deep < 3 && pos < s.size()){
        return (int)solve(pos+1,deep+1,value * 10 + stoi(string(1, s[pos]))) || solve(pos+1, deep, value);
    }else{
        return 0;
    }
}

int main()
{
    cin >> s;
    if(solve(0,0,0)){
        cout << "YES" << endl;
        cout << answer << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
}
