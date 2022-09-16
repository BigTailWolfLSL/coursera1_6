//
// Created by lisilong on 2022/1/1.
//

#include <iostream>
using namespace std;
int main(){
    int n=0,max=0,a=0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin>>a;
        if (max<a) max=a;
    }
    cout<<max<<endl;
    return 0;
}