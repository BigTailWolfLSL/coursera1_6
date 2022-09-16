#include <iostream>
using namespace std;

int main(){
    int n=0;
    int k=0;
    int a[1000];
    cin>>n;
    cin>>k;
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    for (int j=0;j<k;j++){
        for (int i=j+1;i<n;i++){
            if (a[j]<a[i]){
                int temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
    cout<<a[k-1]<<endl;
    return 0;
}