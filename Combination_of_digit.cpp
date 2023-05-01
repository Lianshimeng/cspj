#include <iostream>
#include <algorithm>
using namespace std;

void ct(string str1,int i){
    for(int d = i; d <= i+9; d++){
        cout << str1[d];
    }
}

int main(){
    string str1,str;
    cin.getline(str, 10000);
    str = str1;
    transform(str.begin(),str.end(),str.begin(),::tolower);
    int n = str.size();

    string s = "aisichuang";
    int cnt = 1;
    bool c = true;

    for(int i = 0; i <= n-10; i++){
        for(int j = 0; j < 10; j++){
            if(str[i+j] != s[j]){
                c = false;
                break;
            }
        }
        if(c == true && cnt <= 5){
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

    if(cnt > 5){
        cout << cnt;
    }
}