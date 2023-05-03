#include <iostream>
using namespace std;

void swap(int list[], int j, int i){
    int sw = list[j];
    list[j] = list[i];
    list[i] = sw;
}

void Selecting_sort(int list[],int len){
    int maxn;
    for(int i = 0; i < len; i++){
        maxn = i;
        for(int j = i; j < len; j++){
            if(list[j] > list[maxn]){
                maxn = j;
            }
        }
        swap(list,maxn,i);
    }
}

int main(){
    int len,val,x;
    cin >> len;
    int l[len];

    for(int i = 0; i < len; i++){
        cin >> x;
        l[i] = x;
    }
    cin >> x;
    val = l[x-1];
    
    Selecting_sort(l,len);
    cout << val << endl;
    int cnt = 1;
    int a = 0;
    for(int i = 0; i < len; i++){
        if(l[i] == val){
            cout << cnt;
            break;
        }
        if(l[i] != a){
            cnt ++;
            a = l[i];
        }
    }
}