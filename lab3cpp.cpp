#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float a,x,e,yn;
    cout<<"Enter separated by space A, X, E : ";
    cin>>a>>x>>e;
    int i=1;
    float y[10000];
    y[0]=a;
    y[i]=0.5*(y[i-1]+(x/y[i-1]));
    while (abs(y[i]*y[i]-y[i-1]*y[i-1])>=e){
        i++;
        y[i]=0.5*(y[i-1]+(x/y[i-1]));
        cout<<y[i]<<" ";
        yn=y[i];
    }
    cout<<"Y["<<i<<"] = "<<y[i];
}