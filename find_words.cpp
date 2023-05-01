#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

void ct(string str1,int i){
    for(int d = i; d <= i+9; d++){
        cout << str1[d];
    }
}

int main(){
    string str1,str;
    getline(cin,str1);
    str = str1;
    transform(str.begin(),str.end(),str.begin(),::tolower);
    int n = str.size();

    string s = "aisichuang";
    int cnt = 0;
    bool c = true;

    for(int i = 0; i <= n-10; i++){
        for(int j = 0; j < 10; j++){
            if(str[i+j] != s[j]){
                c = false;
                break;
            }
        }
        if(c == true && cnt < 5){
            ct(str1,i);
            cout << endl;
            cnt++;
        }
        else if (c == true){
            cnt++;
        }
        else{
            c = true;
        }
    }

    if(cnt >= 5){
        cout << cnt;
    }
}
