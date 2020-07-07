#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int a;
    int x, y;
    cin >> a;
    if(a == -10){
        cout << 0;
    }else{
        if(a<0){
            x = -((-a)/10);
            y = -((-a)%10 + 10*((-a)/100));
            if(x > y){
                cout << x;
            }else{
                cout << y;
            }
        }else{
            cout << a;
        }
    }
    cout << "\n";
    return 0;
}
