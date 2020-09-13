#include <bits/stdc++.h>

using namespace std;

long long quantity_of_dividers(long long number){
    long long quantity=0;
    for(int i=1;i<=number/i;i++){
        if(number%i==0){
            if(i == number/i){
                quantity++;
            }else{
                quantity += 2;
            }
        }
    }
    return quantity;
}

vector<long long> dividers(long long number){
    vector<long long> dividers;
    for(int i=1;i<=number/i;i++){
        if(number%i==0){
            if(i == number/i){
                dividers.push_back(i);
            }else{
                dividers.push_back(i);
                dividers.push_back(number/i);
            }
        }
    }
    return dividers;
}

vector<long long> prime_factors(long long number){
    vector<long long> prime_factors;
    long long aux = number;
    for(long long i=2;i<=aux/i;i++){
        while(number%i==0){
            prime_factors.push_back(i);
            number = number/i;
        }
    }
    return prime_factors;
}

int main()
{
    long long number;
    vector<long long> aux,aux2;
    cin >> number;
    cout << "quantity " << quantity_of_dividers(number) << endl;
    aux = dividers(number);
    cout << "dividers: " << endl;
    for (int i=0;i<aux.size();i++){
        cout << aux[i] << endl;
    }
    aux2 = prime_factors(number);
    cout << "prime factors: " << endl;
    for (int i=0;i<aux2.size();i++){
        cout << aux2[i] << endl;
    }
    return 0;
}
