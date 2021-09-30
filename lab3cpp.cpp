#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float a,x,e,yn,y0,y1;
    cout<<"Enter separated by space A, X, E : ";
    cin>>a>>x>>e;
    int i=1;
    y1=a;
    do
    {
        y0=y1;
        y1=0.5*(y0+(x/y0));
    } while (abs(y1*y1-y0*y0)>=e);
    
    cout<<"Y[n] = "<<y1;
}