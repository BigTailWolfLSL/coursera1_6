#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main() {
    int n=0;
    double point[1000][2]={0},maxd=0;
    cin>>n;
    for (int i=0;i<n;i++){
        cin>>point[i][0]>>point[i][1];
        for (int j=0;j<=i-1;j++){
            double D=0;
            D=sqrt(pow((point[i][0]-point[j][0]),2)+pow((point[i][1]-point[j][1]),2));
            if (maxd<D){
                maxd=D;
            }
        }
    }
    cout<<fixed<<setprecision(4)<<maxd<<endl;
    return 0;
}