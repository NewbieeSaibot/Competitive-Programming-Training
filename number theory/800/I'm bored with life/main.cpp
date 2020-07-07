#include <bits/stdc++.h>

using namespace std;

int fatorial(unsigned long long int n){
    long long int fat = 1;
    for(int i = 1; i <= n;i++){
        fat = fat * i;
    }
    return fat;
}

int main()
{
    unsigned long long int a,b;

    cin >> a >> b;

    if(a<b){
        cout << fatorial(a);
    }else{
        cout << fatorial(b);
    }

    cout << "\n";
    return 0;
}
