#include <iostream>

using namespace std;

bool is_prime(long long number){
    for(long long i=2;i<=number/i;i++){
        if(number%i==0){
            //cout << "divisor " << i << endl;
            return false;
        }
    }
    return true;
}

int main()
{
    long long number;
    cin >> number;
    if(is_prime(number)){
        cout << number << " is prime" << endl;
    }else {
        cout << number << " is not prime" << endl;
    }

    return 0;
}
