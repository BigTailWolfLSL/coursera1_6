#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n=0,m=0;
    cin>>n>>m;
    int N=n;
    int a[1000]={0};
    for (int i=0;i<n;i++) cin>>a[i];
    while (n!=1){
        for (int i=n-m-1;i>=0;i--){
            int temp;
            temp=a[i+m];
            a[i+m]=a[i];
            a[i]=temp;
        }
        int temp;
        temp=n;
        n=m;
        m=temp%n;
        m=n-m;
    }
    for (int i=0;i<N;i++){
        cout<<a[i]<<' ';
    }
    cout<<endl;
    return 0;
}