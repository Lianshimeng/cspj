#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int l[26];
    string x;
    int cnt = 0;
    
    for(int i = 0; i < 26; i++){
        l[i] = 0;
    }

    while(){
        cin >> x;
        transform(x.begin(),x.end(),x.begin(),::toupper);
        if(l[x[0]-97] == 0){
            cnt++;
        }
        l[x[0]-97] += 1;
    }

    cout << cnt;
    for(int i = 0; i < 26; i++){
        if(l[i] != 0){
            cout << 'A'+i;
        }
    }
    
}