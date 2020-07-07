#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n, x;
    cin >> n >> x;
    int cont = 0;
    for(int i=1;i<=n;i++){
        if((x%i) == 0 && (x/i) <= n){
            cont++;
        }
    }
    cout << cont << endl;
    return 0;
}
