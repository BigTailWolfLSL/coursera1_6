#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    char str[80];
    cin.getline(str,80);
    int a=0,e=0,i=0,o=0,u=0;
    for (int j=0;j<80;j++){
        switch (str[j]) {
            case 'a':a=a+1;break;
            case 'e':e=e+1;break;
            case 'i':i=i+1;break;
            case 'o':o=o+1;break;
            case 'u':u=u+1;break;
        }
    }
    cout<<a<<' '<<e<<' '<<i<<' '<<o<<' '<<u<<endl;

}