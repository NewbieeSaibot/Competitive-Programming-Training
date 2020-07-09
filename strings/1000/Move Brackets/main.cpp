#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,t,aux;
    string s;

    cin >> t;

    while(t>0){
        cin >> n >> s;
        aux = 0;
        for(int i=0;i<n;i++){
            if(s[i] == '('){
                aux++;
            }else{
                if(aux > 0){
                    aux--;
                }
            }
        }
        cout << aux << endl;
        t--;
    }

    return 0;
}
