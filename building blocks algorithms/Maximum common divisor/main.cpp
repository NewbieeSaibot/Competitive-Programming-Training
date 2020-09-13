#include <bits/stdc++.h>

using namespace std;
//there is a stl function called gcd that does the same, but this is just a train for euclide's algol.
//algorithm of Euclides

long long greatest_common_divisor(long long a, long long b){
    if(b == 0){
        return a;
    }
    return greatest_common_divisor(b, a%b);
}

//extra
long long least_common_multiple(long long a,long long b){
    return (a/greatest_common_divisor(a,b))*b;
}

int main()
{
    long long a,b;
    cin >> a >> b;
    cout << greatest_common_divisor(a, b) << " " << least_common_multiple(a,b);
    return 0;
}
