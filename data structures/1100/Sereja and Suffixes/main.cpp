#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,m,aux;
    vector<long long int> vetn,vetm,solved;
    set<long long int> seta;
    cin >> n >> m;

    for(int i=0;i<n;i++){
        cin >> aux;
        vetn.push_back(aux);
    }
    for(int i=0;i<m;i++){
        cin >> aux;
        vetm.push_back(aux-1);
    }

    for(int i=n-1;i>=0; i--){
        seta.insert(vetn[i]);
        solved.push_back(seta.size());
    }
    for(int i=0;i<m;i++){
        cout << solved[n - vetm[i] - 1] << endl;
    }


    return 0;
}
