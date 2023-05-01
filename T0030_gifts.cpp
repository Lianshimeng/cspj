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
    int n,k;
    int x;
    cin >> n >> k;

    int list[n];
    for(int i = 0; i < n; i++){
        cin >> x;
        list[i] = x;
    }

    Selecting_sort(list,n);
    for(int i = k; k < n; i++){
        if(list[i] == list[k-1]){
            k += 1;
        }
        else{
            break;
        }
    }
    cout << k;
}
