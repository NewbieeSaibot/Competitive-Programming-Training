#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,aux,soma,maxi,mini;
    vector<long long int> vetor,distances1;

    cin >> n;
    for(long long int i=0;i<n;i++){
        cin >> aux;
        vetor.push_back(aux);
    }
    for(long long int i=0;i<n-1;i++){
        if(i%2==0){
            distances1.push_back(fabs(vetor[i] - vetor[i+1]));
        }else{
            distances1.push_back(-fabs(vetor[i] - vetor[i+1]));
        }
    }
    soma=0,maxi=0,mini=0;
    for(int i=0;i<distances1.size();i++){
        soma += distances1[i];
        if(soma > maxi){
            maxi = soma;
        }
        if(soma < mini){
            mini = soma;
        }
    }
    cout << maxi - mini << endl;
}
