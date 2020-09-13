//Coded by NewbieeSaibot 12/09/2020
// a classic problem of two-dimensional dynamic programming with one restriction.
#include <bits/stdc++.h>

using namespace std;

long long int memo[2000][2000];
long long int capacity, number_of_items, inf = (numeric_limits<long long int>::max())/3;
long long int weight[2000], value[2000];
vector<long long int> indexes;

//A nice path to write a dynamic programming function in a recursive top down approach is:
// restriction
// base
// if already calculated return the values
// if was not calculated calcule it and save in memo.
// return the calculated values

// the calc part is related with: optimization (max or min functions are very common)
// the choices that you have in a tree. You can made the choice, and go to the next choice.
// Remember to change the current limitation variable, in this case we use the capacity.
long long int solve(long long int index, long long int capacity){
    if(capacity < 0) return -inf; // This is the restriction. If capacity is < 0 you exceeded the maximum weight.
    if(index == number_of_items) return 0; //This is the base of the recursion
    if(memo[index][capacity] != -1) return memo[index][capacity]; //If you already has calculated the values just return it.
    memo[index][capacity] = max(solve(index + 1, capacity-weight[index]) + value[index], solve(index + 1, capacity));
    return memo[index][capacity];
}

// if there is more than one way to reach the max values the recover function will return any of them.
void recover(long long int index, long long int capacity){
    if(index == number_of_items) return;

    if(value[index] + solve(index + 1, capacity - weight[index]) > solve(index + 1, capacity)){
        indexes.push_back(index);
        recover(index + 1, capacity - weight[index]);
    }else{
        recover(index + 1, capacity);
    }
}

int main()
{
    cin >> capacity >> number_of_items;

    for(int i=0;i<number_of_items;i++){
        cin >> weight[i] >> value[i];
    }

    memset(memo, -1, sizeof(memo));

    cout << solve(0, capacity) << endl;
    recover(0, capacity);

    for(int i=0;i<indexes.size();i++){
        cout << indexes[i];
    }

    cout << endl;
    return 0;
}
