#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int result=0;
    int a;
    cin>>a;
    for (int i=0;i<5;i++){
        int b;
        cin>>b;
        if (b<a){result+=b;}
    }
    cout<<result<<endl;
    return 0;
}