#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,aux,left=0,right,sum1,sum3,marker1=0;
    vector<long long int> vetor;

    cin >> n;
    right = n-1;
    for(int i=0;i<n;i++){
        cin >> aux;
        vetor.push_back(aux);
    }
    sum1=0;
    sum3=0;
    while(left <= right){
        if(sum1 == sum3){
            marker1 = sum1;
        }
        if(sum1 >= sum3){
            sum3 += vetor[right];
            right--;
        }else{
            sum1 += vetor[left];
            left++;
        }
    }
    if(sum1 == sum3){
        marker1 = sum1;
    }

    cout << marker1 << endl;
    return 0;
}
