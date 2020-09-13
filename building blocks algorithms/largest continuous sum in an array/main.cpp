#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,aux,soma,maxi;
    vector<int> vetor;
    cin >> n;

    for(int i=0;i<n;i++){
        cin >> aux;
        vetor.push_back(aux);
    }
    soma = maxi = 0;
    for(int i=0;i<n;i++){
        soma += vetor[i];
        maxi = max(maxi, soma);
        if(soma < 0){
            soma = 0;
        }
    }
    // this response makes sense if you can not select any position of the array, bu if you need to select at least one position just ini maxi = vetor[0]
    cout << maxi << endl;
    return 0;
}
