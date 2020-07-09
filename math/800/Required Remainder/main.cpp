#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int x,y,n,t,aux;

    cin >> t;

    while(t>0){
        cin >> x >> y >> n;
        if(n%x > y){
            cout << n - ((n%x) - y) << endl;
        }else if(n%x== y){
            cout << n << endl;
        }else{
            aux = n - ((n%x) + 1);
            cout << aux- ((aux%x)-y) << endl;
        }
        t--;
    }

    return 0;
}
