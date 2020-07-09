#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t=0, n=0, aux=0,impar=0,par=0, i=0, cont=0;
    vector<int> vetor, vetpar, vetimpar,indimpar,indpar;
    cin >> t;
    while(t > 0){
        cin >> n;
        for(i=0;i<2*n;i++){
            cin >> aux;
            if(aux%2==0){
                par++;
            }else{
                impar++;
            }
            vetor.push_back(aux);
        }
        if(impar%2==1){
            cont = 0;
            i = 0;
            while(cont < impar - 1){
                if(vetor[i] %2 == 1){
                    vetimpar.push_back(vetor[i]);
                    indimpar.push_back(i+1);
                    cont++;
                }
                i++;
            }
            cont = 0;
            i = 0;
            while(cont < par - 1){
                if(vetor[i] %2 == 0){
                    vetpar.push_back(vetor[i]);
                    indpar.push_back(i+1);
                    cont++;
                }
                i++;
            }
        }else{
            if(impar > 1){
                cont = 0;
                i = 0;
                while(cont < impar - 2){
                    if(vetor[i] %2 == 1){
                        vetimpar.push_back(vetor[i]);
                        indimpar.push_back(i+1);
                        cont++;
                    }
                    i++;
                }
                cont = 0;
                i = 0;
                while(cont < par){
                    if(vetor[i] %2 == 0){
                        vetpar.push_back(vetor[i]);
                        indpar.push_back(i+1);
                        cont++;
                    }
                    i++;
                }
            }else{
                cont = 0;
                i = 0;
                while(cont < impar){
                    if(vetor[i] %2 == 1){
                        vetimpar.push_back(vetor[i]);
                        indimpar.push_back(i+1);
                        cont++;
                    }
                    i++;
                }
                cont = 0;
                i = 0;
                while(cont < par - 2){
                    if(vetor[i] %2 == 0){
                        vetpar.push_back(vetor[i]);
                        indpar.push_back(i+1);
                        cont++;
                    }
                    i++;
                }
            }
        }
        for(i=0;i<vetimpar.size();i++){
            cout << indimpar[i] << " " << indimpar[i+1] << endl;
            i++;
        }
        for(i=0;i<vetpar.size();i++){
            cout << indpar[i] << " " << indpar[i+1] << endl;
            i++;
        }

        par=0;
        impar=0;
        t--;
        indimpar.clear();
        indpar.clear();
        vetimpar.clear();
        vetpar.clear();
        vetor.clear();
    }
    return 0;
}
