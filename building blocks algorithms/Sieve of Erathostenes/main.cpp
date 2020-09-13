#include <bits/stdc++.h>

using namespace std;

vector<bool> primes_from_1_until_n(long long n){
    vector<bool> primes(n+1, true);
    primes[0] = primes[1] = false;
    for(long long i=2;i<=n/i;i++){
        if(primes[i]){
            for(long long j = 2*i;j<=n;j+=i){
                primes[j] = false;
            }
        }
    }
    return primes;
}

vector<int> quantity_of_dividers_from_1_until_n(long long n){
    vector<int> quantity(n+1, 0);
    for(long long i=1;i<=n;i++){
        for(long long j = i;j<=n;j+=i){
            quantity[j]++;
        }
    }
    return quantity;
}
vector<vector<int>> dividers_from_1_until_n(long long n){
    vector<vector<int>> dividers(n+1);
    for(long long i=1;i<=n;i++){
        for(long long j = i;j<=n;j+=i){
            dividers[j].push_back(i);
        }
    }
    return dividers;
}
int main()
{
    long long number;
    vector<vector<int>> aux;
    cin >> number;
    aux = dividers_from_1_until_n(number);
    for(long long i=0;i<aux.size();i++){
        cout << i << "  ";
        for(int j=0;j<aux[i].size();j++){
            cout << aux[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
