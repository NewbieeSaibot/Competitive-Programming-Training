#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,n,x,tam=0,soma=0,aux=0,inicio,fim;
    vector<int> vetor;
    cin >> t;
    while(t>0){
        cin >> n >> x;
        tam=n;
        soma=0;
        for(int i=0;i<n;i++){
            cin >> aux;
            vetor.push_back(aux);
            soma+=aux;
        }
        inicio=0;
        fim=0;
        int cont=0;
        for(int i=0;i<n;i++){
            if(vetor[i]%x!=0){
                inicio = i+1;
                break;
            }else{
                cont++;
            }
        }
        for(int i=n-1;i>=0;i--){
            if(vetor[i]%x!=0){
                fim = (n-i);
                break;
            }
        }

        if(soma%x != 0){
            cout << tam << endl;
        }else{
            if(cont == tam){
                cout << -1 << endl;
            }else{
                if(inicio > fim){
                    cout << tam-fim << endl;
                }else{
                    cout << tam-inicio << endl;
                }
            }
        }
        vetor.clear();
        t--;
    }

    return 0;
}
