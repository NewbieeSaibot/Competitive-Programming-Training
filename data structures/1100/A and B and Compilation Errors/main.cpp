#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int n=0,aux,aux1,aux2;
    vector<long long int> vet1,vet2,vet3;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> aux;
        vet1.push_back(aux);
    }
    for(int i=0;i<n-1;i++){
        cin >> aux;
        vet2.push_back(aux);
    }
    for(int i=0;i<n-2;i++){
        cin >> aux;
        vet3.push_back(aux);
    }
    sort(vet1.begin(), vet1.end());
    sort(vet2.begin(), vet2.end());
    sort(vet3.begin(), vet3.end());

    aux1=-1;
    for(int i=0;i<n-1;i++){
        if(vet1[i] != vet2[i]){
            aux1 = vet1[i];
            break;
        }
    }
    if(aux1 == -1){
        aux1 = vet1[n-1];
    }
    aux2=-1;
    for(int i=0;i<n-2;i++){
        if(vet2[i] != vet3[i]){
            aux2 = vet2[i];
            break;
        }
    }
    if(aux2 == -1){
        aux2 = vet2[n-2];
    }
    cout << aux1 << endl << aux2 << endl;
    return 0;
}
