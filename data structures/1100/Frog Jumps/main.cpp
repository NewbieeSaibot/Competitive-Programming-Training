#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,pos,maximo;
    string s;

    cin >> n;

    while(n>0){
        cin >> s;
        pos=-1;
        maximo=0;
        for(int i=0;i<s.size();i++){
            if(s[i] == 'R'){
                if(i-pos > maximo){
                    maximo = i - pos;
                }
                pos = i;
            }
        }
        if((s.size())-pos > maximo){
            maximo = (s.size()) - pos;
        }
        cout << maximo << endl;
        n--;
    }
    return 0;
}
