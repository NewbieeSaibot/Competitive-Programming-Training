#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int dois,tres,n,t,moves;

    cin >> t;

    while(t>0){
        cin >> n;
        dois=0;
        while(n%2==0){
            n /= 2;
            dois++;
        }
        tres=0;
        while(n%3==0){
            n /= 3;
            tres++;
        }
        if(n != 1 || dois > tres){
            cout << -1 << endl;
        }else{
            if(dois == tres){
                cout << dois << endl;
            }else{
                moves = (tres - dois) + tres;
                cout << moves << endl;
            }
        }
        t--;
    }

    return 0;
}
