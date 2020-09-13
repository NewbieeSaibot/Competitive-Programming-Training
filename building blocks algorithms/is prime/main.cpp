#include <iostream>

using namespace std;

bool is_prime(long long number){
    if(number==1 || (number!=2 && number%2==0)){
        return false;
    }
    for(long long i=3; i*i<=number; i+=2){
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
