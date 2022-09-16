#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int ma[5][5]={0};
    int n,m;
    for (int i=0;i<5;i++){
        for (int j=0;j<5;j++){
            cin>>ma[i][j];
        }
    }
    cin>>n>>m;
    if (n>=5||n<=-1||m>=5||m<=-1) {cout<<"error"<<endl;return 0;}
    for (int i=0;i<5;i++){
        int temp;
        temp=ma[n][i];
        ma[n][i]=ma[m][i];
        ma[m][i]=temp;
    }
    for (int i=0;i<5;i++){
        for (int j=0;j<5;j++){
            cout<<setw(4)<<ma[i][j];
        }
        cout<<endl;
    }
    return 0;
}