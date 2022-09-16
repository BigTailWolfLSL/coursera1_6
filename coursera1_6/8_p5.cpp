#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int n=0;
    cin>>n;
    for (int i=10;i<=n;i++){
        int sum=0;
        sum=i%10+i/10;
        if (i%sum==0) cout<<i<<endl;
    }
    return 0;
}