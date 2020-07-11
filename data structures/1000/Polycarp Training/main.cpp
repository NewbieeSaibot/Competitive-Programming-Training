#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int n=0,aux,dia;
    vector<long long int> vetor;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> aux;
        vetor.push_back(aux);
    }
    sort(vetor.begin(), vetor.end());
    dia=1;
    for(int i=0;i<n;i++){
        if(vetor[i] >= dia){
            dia++;
        }
    }
    cout << dia-1 << endl;
    return 0;
}
