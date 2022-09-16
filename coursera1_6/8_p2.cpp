#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int n;
    cin>>n;
    for (int i=0;i<n;i++){
        int a;
        cin>>a;
        if ((50+(double)a/3)>((double)a/1.2)){
            cout<<"Walk"<<endl;
        } else if ((50+(double)a/3)<((double)a/1.2)){
            cout<<"Bike"<<endl;
        } else cout<<"All"<<endl;
    }
    return 0;
}