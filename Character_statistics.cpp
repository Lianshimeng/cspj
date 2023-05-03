#include <iostream>
using namespace std;

int main(){
    int l[26];
    int l1[26];
    string a,b;
    cin >> a;
    cin >> b;

    int cnt = 0;

    int n1,n2,n;
    n1 = a.size();
    n2 = b.size();

    if(n1 > n2){
        n = n1;
    }
    else{
        n = n2;
    }
    for(int i = 0; i < 26; i++){
        l[i] = 0;
        l1[i] = 0;
    }

    for(int i = 0; i < n; i++){
        if(i < n1 && i < n2){
            if(a[i] == b[i]){
                cnt ++;
            }
            l[a[i] - 65] ++;
            l1[b[i] - 65] ++;
        }
        else if(i < n1){
            l[a[i] - 65] ++;
        }
        else if(i < n2){
            l1[b[i] - 65] ++;
        }
    }

    int cnt1 = 0;
    for(int i = 0; i < 26; i++){
        if(l[i] >= 1 && l1[i] >= 1){
            if(l[i] > l1[i]){
                cnt1 += l1[i];
            }
            else{
                cnt1 += l[i];
            }
        }
    }
    
    cout << cnt1 << endl;
    cout << cnt;
}