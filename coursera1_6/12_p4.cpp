#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cstdlib>
using namespace std;

int main() {
    int a,b;
    char str[20]={'\0'};
    cin>>a>>b;
    cin>>str;
    switch (str[0]) {
        case '+':{
            cout<<a+b<<endl;
            return 0;
        }
        case '-':{
            cout<<a-b<<endl;
            return 0;
        }
        case '*':{
            cout<<a*b<<endl;
            return 0;
        }
        case '/':{
            if (b==0){
                cout<<"Divided by zero!"<<endl;
                return 0;
            }
            cout<<a/b<<endl;
            return 0;
        }
        default:{
            cout<<"Invalid operator!"<<endl;
        }
    }
    return 0;
}