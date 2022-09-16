#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    char str[500]={0};
    int i=0;
    int max=0,maxindex=0;
    cin.getline(str,500);
    while (str[i]!='\0'){
        if (((str[i]>='a' && str[i]<='z')||(str[i]>='A'&&str[i]<='Z'))){
            int j=i;
            while (((str[i]>='a' && str[i]<='z')||(str[i]>='A'&&str[i]<='Z'))) {
                i = i + 1;
            }
            if ((i-j)>max) {maxindex=j;max=i-j;}
        }
        i++;
    }
    for (int k=0;k<max;k++){
        cout<<str[k+maxindex];
    }
    cout<<endl;
    return 0;
}