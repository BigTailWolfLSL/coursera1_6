#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    char str1[80]={'\0'},str2[80]={0};
    cin.getline(str1,80);
    cin.getline(str2,80);
    int j=0;
    for (j=0;j<80;j++){
        if ((int)str1[j]<96) str1[j]=str1[j]+'a'-'A';
        if ((int)str2[j]<96) str2[j]=str2[j]+'a'-'A';
        if (str1[j]>str2[j]) {cout<<'>'<<endl;break;}
        if (str1[j]<str2[j]) {cout<<'<'<<endl;break;}
    }
    if (j==80) cout<<'='<<endl;
    return 0;
}