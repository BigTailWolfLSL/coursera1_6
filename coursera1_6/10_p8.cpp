#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    bool move[10001]={0};
    int l,m;
    cin>>l>>m;
    for (int i=0;i<m;i++){
        int left,right;
        cin>>left>>right;
        for (int j=left;j<=right;j++){
            move[j]=true;
        }
    }
    int count=0;
    for (int i=0;i<=l;i++){
        if (!move[i]){count=count+1;}
    }
    cout<<count<<endl;
    return 0;
}