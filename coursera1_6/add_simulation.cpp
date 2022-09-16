#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int a=5,b=2;
    for (int i=0;i<8;i++){
        int s=a^b;
        int c=(a&b)<<1;
        a=s;
        b=c;
    }
    cout<<a<<endl;
    return 0;
}