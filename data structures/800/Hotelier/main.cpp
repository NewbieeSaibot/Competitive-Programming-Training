#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[10] = {0,0,0,0,0,0,0,0,0,0};
    int n;
    string s;
    cin >> n >> s;
    for(int i=0;i<n;i++){
        if(s[i] == 'L'){
            for(int j=0;j<10;j++){
                if(a[j] == 0){
                    a[j] = 1;
                    break;
                }
            }
        }else if(s[i] == 'R'){
            for(int j=9;j>=0;j--){
                if(a[j] == 0){
                    a[j] = 1;
                    break;
                }
            }
        }else{
            a[stoi(string(1, s[i]))] = 0;
        }
    }
    for(int j=0;j<10;j++){
        cout << a[j];
    }
    cout << endl;
    return 0;
}
