#include <bits/stdc++.h>

using namespace std;

int soma_digitos(int a){
    int soma=0;
    while(a > 0){
        soma += a%10;
        a = a/10;
    }
    return soma;
}
int main()
{
    int n,k=1,aux=19;
    cin >> n;
    for(int i=0;i<20000;i++){
        if(n == k){
            cout << aux << endl;
            return 0;
        }else{
            aux += 9;
            while(soma_digitos(aux) != 10){
                aux += 9;
            }
            k++;
        }
    }

    return 0;
}
