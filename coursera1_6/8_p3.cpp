#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int N,K;
    while(cin>>N>>K){
        if (!N || !K){break;}
        int n=0;
        double k=200;
        for (int i=0;i<20;i++){
            n=n+N;
            if (n>=k){
                cout<<i+1<<endl;
                break;
            }
            if (i==19){
                cout<<"Impossible"<<endl;
            }
            k=k*(1+(double)K/100);
        }
    }
    return 0;
}