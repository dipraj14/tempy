#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0 ; i <n; i++){
        cin >> v[i];

    }
    int mini = INT_MIN;
    int  curr = 0;
    for(auto it: v){
        curr += it;
        mini = min(curr, mini);
        if(curr < 0){
            curr = 0;
        }
    }

    cout << mini << endl;
}