//
// Created by lisilong on 2022/1/1.
//

#include <iostream>
using namespace std;
int main(){
    int n,x,y,result;
    cin>>n>>x>>y;
    if ((n*x-y)>=0){
        result=(n*x-y)/x;
    } else {
        result=0;
    }
    cout<<result<<endl;
    return 0;
}
