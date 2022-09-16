#include <iostream>
using namespace std;

int main(){
    int n=0;
    cin>>n;
    const int a[6]={100,50,20,10,5,1};
    for (int i=0;i<6;i++){
        cout<<n/a[i]<<endl;
        n%=a[i];
    }
    return 0;
}