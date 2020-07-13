#include <bits/stdc++.h>

using namespace std;

int main()
{
    unsigned long long int q,n,k,d,sum,aux,minimo = 999999999;
    vector<unsigned long long int> erroRGB;
    vector<unsigned long long int> erroGBR;
    vector<unsigned long long int> erroBRG;
    string s;
    cin >> q;

    for(long long int i=0;i<q;i++){
        cin >> n >> k;
        cin >> s;
        minimo = 999999999;
        erroBRG.push_back(0);
        erroRGB.push_back(0);
        erroGBR.push_back(0);
        //logica
        //erroRGB
        aux=0;
        for(int j=0;j<n;j++){
            if(j%3==0){
                if(s[j] == 'R'){
                    erroRGB.push_back(aux);
                }else {
                    aux++;
                    erroRGB.push_back(aux);
                }
            }else if(j%3==1){
                if(s[j] == 'G'){
                    erroRGB.push_back(aux);
                }else {
                    aux++;
                    erroRGB.push_back(aux);
                }
            }else if(j%3==2){
                if(s[j] == 'B'){
                    erroRGB.push_back(aux);
                }else {
                    aux++;
                    erroRGB.push_back(aux);
                }
            }
        }
        //erroGBR
        aux=0;
        for(int j=0;j<n;j++){
            if(j%3==0){
                if(s[j] == 'G'){
                    erroGBR.push_back(aux);
                }else {
                    aux++;
                    erroGBR.push_back(aux);
                }
            }else if(j%3==1){
                if(s[j] == 'B'){
                    erroGBR.push_back(aux);
                }else {
                    aux++;
                    erroGBR.push_back(aux);
                }
            }else if(j%3==2){
                if(s[j] == 'R'){
                    erroGBR.push_back(aux);
                }else {
                    aux++;
                    erroGBR.push_back(aux);
                }
            }
        }
        //erroBRG
        aux=0;
        for(int j=0;j<n;j++){
            if(j%3==0){
                if(s[j] == 'B'){
                    erroBRG.push_back(aux);
                }else {
                    aux++;
                    erroBRG.push_back(aux);
                }
            }else if(j%3==1){
                if(s[j] == 'R'){
                    erroBRG.push_back(aux);
                }else {
                    aux++;
                    erroBRG.push_back(aux);
                }
            }else if(j%3==2){
                if(s[j] == 'G'){
                    erroBRG.push_back(aux);
                }else {
                    aux++;
                    erroBRG.push_back(aux);
                }
            }
        }
        aux=0;

        for(long long int j=1;(k-1)+j<n+1;j++){
            if(erroRGB[(k-1) + j] - erroRGB[j-1] < minimo){
                minimo = erroRGB[(k-1) + j] - erroRGB[j-1];
            }
            if(erroGBR[(k-1) + j] - erroGBR[j-1] < minimo){
                minimo = erroGBR[(k-1) + j] - erroGBR[j-1];
            }
            if(erroBRG[(k-1) + j] - erroBRG[j-1] < minimo){
                minimo = erroBRG[(k-1) + j] - erroBRG[j-1];
            }
        }
        cout << minimo << endl;
        erroBRG.clear();
        erroRGB.clear();
        erroGBR.clear();

    }
    return 0;
}
