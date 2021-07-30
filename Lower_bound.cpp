#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N, Q, a;
    vector<int> v, q;
    vector<int>::iterator x;
    cin>>N;
    for(int i=0; i<N; i++){
        cin>>a;
        v.push_back(a);
    }
    cin>>Q;
    for(int i=0; i<Q; i++){
        cin>>a;
        q.push_back(a);
    }
    
    for(int i=0; i<Q; i++){
        x = lower_bound(v.begin(), v.end(), q[i]);
        if(binary_search(v.begin(), v.end(), q[i])){
            cout<<"Yes "<<(x - v.begin() + 1)<<endl;
        }
        else {
        cout<<"No "<<(x - v.begin() + 1)<<endl;
        }
    }
    return 0;
}
