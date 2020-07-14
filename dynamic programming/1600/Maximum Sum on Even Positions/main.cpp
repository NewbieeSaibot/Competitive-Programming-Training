#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<long long int> vetor;
    long long int aux,t,n,soma=0,maxi1,maxi2, pares;
    cin >> t;

    while(t>0){
        cin >> n;
        pares=0;
        for(int i=0;i<n;i++){
            cin >> aux;
            vetor.push_back(aux);
            if(i%2==0){
                pares += aux;
            }
        }
        maxi1 = soma = 0;
        for(int i=0;i+1<n;i+=2){
            soma += vetor[i+1] - vetor[i];
            maxi1 = max(soma, maxi1);
            if(soma < 0){
                soma = 0;
            }
        }
        maxi2 = soma = 0;
        for(int i=1;i+1<n;i+=2){
            soma += vetor[i] - vetor[i+1];
            maxi2 = max(soma, maxi2);
            if(soma < 0){
                soma = 0;
            }
        }

        cout << pares + max(maxi1,maxi2)<< endl;

        vetor.clear();
        t--;
    }


    return 0;
}
