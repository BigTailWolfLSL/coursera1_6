#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cstdlib>
using namespace std;

int main() {
    char str[20]={0},substr[20]={0};
    while(cin>>str>>substr) {
        int maxind = 0;
        int i = 0;
        while (str[i] != '\0') {
            if (str[i] > str[maxind]) { maxind = i; }
            i++;
        }
        for (int j = i - 1; j > maxind; j--) {
            str[j + 3] = str[j];
        }
        str[maxind + 1] = substr[0];
        str[maxind + 2] = substr[1];
        str[maxind + 3] = substr[2];
        cout << str << endl;
        for (int j=0;j<20;j++){
            str[j]='\0';
            substr[j]='\0';
        }
    }
    return 0;
}