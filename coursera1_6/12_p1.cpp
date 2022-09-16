#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    bool flag=0;
    int y=0;
    cin>>y;
    if (y%4==0&&y%100!=0) flag=1;
    if (y%400==0) flag=1;
    if (flag) {cout<<'Y'<<endl;}
    else cout<<'N'<<endl;
    return 0;
}