//Coded by NewbieeSaibot 12/09/2020
//Obviously fibonacci could be calculated even better just
//summing two variables iteratively, or maybe use differential equations to
//solve the recursion and use the pow function is a more try hard algorithm too O(log(n)).

#include <bits/stdc++.h>

using namespace std;

long long int memo[1000];
long long int memo2[1000];
long long int n;

long long int fib(long long int n){
    if (n == 1 || n == 2) return 1;
    if (memo[n] != -1) return memo[n];
    memo[n] = fib(n-1) + fib(n-2);
    return memo[n];
}

//with not dynamic approach.
long long int howManyCalls(long long int n){
    if (n == 1 || n == 2) return 0;
    if (memo2[n] != -1) return memo2[n];
    memo2[n] = howManyCalls(n - 1) + howManyCalls(n - 2) + 2;
    return memo2[n];
}

int main()
{
    cin >> n;
    memset(memo, -1, sizeof(memo));
    memset(memo2, -1, sizeof(memo2));
    cout << howManyCalls(n) << endl;
    cout << fib(n) << endl;
    return 0;
}
