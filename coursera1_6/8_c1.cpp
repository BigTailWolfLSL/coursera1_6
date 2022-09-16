#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int best;
    for (best=1;best<=4; best++){
        bool a=(best==2);
        bool b=(best==4);
        bool c=!(best==3);
        bool d=!b;
        if (a+b+c+d!=1) continue;
        cout<<best<<endl;
        if (a) cout<<'A'<<endl;
        if (b) cout<<'B'<<endl;
        if (c) cout<<'C'<<endl;
        if (d) cout<<'D'<<endl;
    }
    return 0;
}