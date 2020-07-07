#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int ar[14] = {4,44,444,7,77,777,47,74,447,774,747,474,744,477};
    cin >> n;
    int aux = 0;
    for(int i =0;i<14;i++){
        if(n%ar[i] == 0){
            aux = 1;
        }
    }
    if(aux == 1){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }

    return 0;
}
