#include <iostream>
using namespace std;

int main(){
    int a[6];
    int i;
    int ma=0;
    int mi=1000;
    for (i=0;i<6;i++){
        cin>>a[i];
        if (a[i]>ma && a[i]%2==1) {ma=a[i];}
        if (a[i]<mi && a[i]%2==0) {mi=a[i];}
    }
    int result=ma-mi;
    if (result<0){result=-result;}
    cout<<result<<endl;
}