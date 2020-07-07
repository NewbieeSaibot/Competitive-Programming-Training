#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int t, aux, n;
    vector<long long int> vetor;
    cin >> t;

    while(t>0){
        cin >> n;
        vetor.clear();
        for(int i=0;i<n;i++){
            cin >> aux;
            vetor.push_back(aux);
        }
        aux = 1;
        for(int i=0;i<n-1;i++){
            if(vetor[i]%2 != vetor[i+1]%2){
                aux = 0;
            }
        }
        if(aux == 0){
            cout << "NO" << endl;
        }else{
            cout << "YES" << endl;
        }
        t--;
    }

    return 0;
}
