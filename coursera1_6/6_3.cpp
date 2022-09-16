//
// Created by lisilong on 2022/1/1.
//

#include <iostream>
using namespace std;
int main(){
    double h,r;
    cin >> h >> r;
    int result= 20000 / (h*3.1415926535*r*r);
    if (result*(h*3.1415926535*r*r)<20000){result++;}
    cout<<result<<endl;
    return 0;
}