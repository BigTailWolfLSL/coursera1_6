//
// Created by lisilong on 2022/1/1.
//

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for (int i = 0; i < 3; i++) {
        cout<<((n*10)/1000)<<endl;
        n=(n*10)%1000;
    }
    return 0;
}