#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int result;
    if (n>=95 && n<=100){
        result=1;//若是在这里定义，就是if内的局部变量
    } else if (n>=90 && n<95){
        result=2;
    } else if (n>=85 && n<90){
        result=3;
    } else if (n>=80 && n<85){
        result=4;
    } else if (n>=70 && n<80){
        result=5;
    } else if (n>=60 && n<70){
        result=6;
    } else if (n<60){
        result=7;
    }
    cout<<result<<endl;
    return 0;
}