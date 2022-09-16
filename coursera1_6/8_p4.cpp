#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int a[1000];
    bool flag=false;
    for (int i=0;i<n;i++){
        cin>>a[i];
        if (flag){continue;}
        for (int j=0;j<i;j++){
            if (a[j]==k-a[i]){flag=true;}
        }
    }
    if (flag){
        cout<<"yes"<<endl;
    } else cout<<"no"<<endl;
    return 0;
}