#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,aux,men1=0,soma=0, men0=0;
    vector<long long int> vetor,vetor2;
    cin >> n;
    for (int i=0;i<n;i++){
        cin >> aux;
        vetor.push_back(aux);
    }
    sort(vetor.begin(),vetor.end());
    soma=vetor[0];
    vetor.push_back(-1);
    for(int i=0;i<n;i++){
        if(vetor[i] == vetor[i+1]){
            soma += vetor[i];
        }else{
            vetor2.push_back(soma);
            if(vetor[i+1] - vetor[i] > 1){
                vetor2.push_back(0);
            }
            soma=vetor[i+1];
        }
    }
   // for(int i=0;i<vetor2.size();i++){
   //     cout << vetor2[i] << " ";
   // }
   // cout << endl;
    for(int i=0;i<vetor2.size();i++){
     //   cout << "men1 " << men1 << " men0 " << men0 << " vetor" << i << " " << vetor2[i] << endl;
        if(vetor2[i] + men1 > men0){
            aux = men1;
            men1 = men0;
            men0 = vetor2[i] + aux;
        }else{
            men1 = men0;
            //men0 = aux;
        }
    }
    cout << men0 << endl;
    return 0;
}
