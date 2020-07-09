#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n, maximo,repeats, k, t, aux,divisiveis;
    vector<long long int> vetor;

    cin >> t;

    while(t>0){
        cin >> n >> k;
        vetor.clear();
        for(int i=0;i<n;i++){
            cin >> aux;
            if(k-(aux%k) != k){
                vetor.push_back(k-(aux%k));
            }
        }
        sort(vetor.begin(),vetor.end());
        maximo=0;
        repeats = 0;
        aux = 1;
        vetor.push_back(0);
        for(int i=0;i<vetor.size()-1;i++){
            if(vetor[i] == vetor[i+1]){
                aux++;
                if(aux >= repeats){

                    repeats = aux;
                    maximo = vetor[i];
                }
            }else{

                aux = 1;
            }
        }
        if(repeats == 0 && vetor.size() > 1){
            repeats = 1;
            maximo = vetor[vetor.size()-2];
        }

        if(repeats > 0){
            cout << ((repeats-1) * k) + maximo + 1 << endl;
        }else{
            cout << 0 << endl;
        }
        t--;
    }

    return 0;
}
