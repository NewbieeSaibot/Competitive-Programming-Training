#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    vector<int> vetorA,vetorB;
    for(int i=0;i<s.size();i++){
        if(s[i]=='A' && s[i+1] == 'B'){
            vetorA.push_back(i);
        }
        if(s[i]=='B' && s[i+1] == 'A'){
            vetorB.push_back(i);
        }
    }
    if(vetorA.size() == 0 || vetorB.size() == 0){
        cout << "NO" << endl;
    }else{
        if(fabs(vetorA[vetorA.size()-1] - vetorB[0]) > 1 || fabs(vetorA[0] - vetorB[vetorB.size()-1]) > 1){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }

    return 0;
}
