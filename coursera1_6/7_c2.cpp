#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int sumn=0,sumd=1;//储存结果，以sumn/sumd的形式
    while (n--){//这里的while循环用来在不约分的情况下，进行分数相加。
        int num,deno;
        char slash;//用来吃掉/的
        cin>>num>>slash>>deno;
        sumn=sumn*deno+num*sumd;
        sumd=sumd*deno;
    }
    int a=sumd,b=sumn,c;
    while (a!=0){//欧几里得求最大公因数，后约分。
        c=a;a=b%a;b=c;
    }
    int gcd=b;
    sumd/=gcd;
    sumn/=gcd;
    if (sumd>1)//防止约分后，成为整数了。
        cout<<sumn<<'/'<<sumd<<endl;
    else
        cout<<sumn<<endl;
    return 0;
}