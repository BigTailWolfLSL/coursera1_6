#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n=0;
    cin>>n;
    while (n!=0){
        int a[15000]={0};
        int maxindex1=0,maxindex2=0;
        for (int i = 0; i < n; ++i) {
            cin>>a[i];
        }
        for (int i=0;i<((n-1)/2);i++){
            maxindex1=0;
            for (int j=0;j<n;j++){
                if (a[j]>a[maxindex1]) maxindex1=j;
            }
            a[maxindex1]=0x80000000;
        }
        maxindex1=0;
        for (int j=0;j<n;j++){
            if (a[j]>a[maxindex1]) maxindex1=j;
        }
        maxindex2=a[maxindex1];
        if (n%2==0){
            a[maxindex1]=0x80000000;
            maxindex1=0;
            for (int j=0;j<n;j++){
                if (a[j]>a[maxindex1]) maxindex1=j;
            }
        }
        cout<<(a[maxindex1]+maxindex2)/2<<endl;
        cin>>n;
    }
    return 0;
}