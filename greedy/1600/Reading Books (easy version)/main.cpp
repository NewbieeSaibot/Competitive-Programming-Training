#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,k,t,a,b,totala=0,totalb=0,tempofinal=0;
    vector<int> vetorauxa,vetorauxb,vetorauxab;
    cin >> n >> k;

    for(int i=0;i<n;i++){
        cin >> t >> a >> b;
        if(a || b){
            totala += a;
            totalb += b;
            if(a == 1 && b == 1){
                vetorauxab.push_back(t);
            }else{
                if(a == 1){
                    vetorauxa.push_back(t);
                }else{
                    vetorauxb.push_back(t);
                }
            }
        }
    }
    if(totala < k || totalb < k){
        cout << -1 << endl;
    }else{
        sort(vetorauxa.begin(),vetorauxa.end());
        sort(vetorauxab.begin(),vetorauxab.end());
        sort(vetorauxb.begin(),vetorauxb.end());

        int conta=0,contb=0,contab=0;
        int x = 0;

        if(vetorauxa.size() == 0 || vetorauxb.size() == 0){
            for(int i=0;i<k;i++){
                tempofinal += vetorauxab[i];
            }
        }else{

        while(x<k){
            if(contab < vetorauxab.size()){
                if(vetorauxab[contab] < vetorauxa[conta] + vetorauxb[contb]){
                    tempofinal += vetorauxab[contab];
                    contab++;
                }else if(conta < vetorauxa.size() && contb < vetorauxb.size()){
                    tempofinal += vetorauxa[conta] + vetorauxb[contb];
                    conta++;
                    contb++;
                }
            }else if(conta < vetorauxa.size() && contb < vetorauxb.size()){
                tempofinal += vetorauxa[conta] + vetorauxb[contb];
                conta++;
                contb++;
            }
            x++;
        }

        }

        cout << tempofinal << endl;
    }
    return 0;
}
