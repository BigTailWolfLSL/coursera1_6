#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int n=0;
    int b;
    cin>>n;
    int a[4];
    for (int i=0;i<4;i++){
        a[i]=0;
    }//初始化数组
    for (int i=0;i<n;i++){//循环分类
        cin>>b;
        if (b>=1 && b<=18){
            a[0]++;
        } else if (b>=19 && b<=35){
            a[1]++;
        } else if (b>=36 && b<=60){
            a[2]++;
        } else if (b>60){
            a[3]++;
        }
    }
    cout<<fixed<<setprecision(2);
    cout<<"1-18: "<<(double)a[0]/n*100<<'%'<<endl;
    cout<<"19-35: "<<(double)a[1]/n*100<<'%'<<endl;
    cout<<"36-60: "<<(double)a[2]/n*100<<'%'<<endl;
    cout<<"60-: "<<(double)a[3]/n*100<<'%'<<endl;
    return 0;
}