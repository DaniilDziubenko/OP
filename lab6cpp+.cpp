#include <iostream>
#include <cmath>
using namespace std;

double sqrt(int p, int a, int n);
int factorial(int a);

int main(){
    int m,k,n;
    cout<<"Enter variable m: ";
    cin>>m;
    cout<<"Enter variable k: ";
    cin>>k;
    cout<<"Enter variable n: ";
    cin>>n;
    double y = 0;
    y = factorial(k)/factorial(m)*sqrt(3,pow(k,2),n) - pow(m,2)*sqrt(5,pow(k,3),n);
    cout<<"Variable Y = "<<y<<endl;
    system("pause");
}

int factorial(int a){
    if (a<0){
        return 0;
    }
    if (a==0)
    {
        return 1;
    } else {
        return a*factorial(a-1);
    } 
}

double sqrt(int p, int a, int n){
    double x0,x1;
    x0 = 1;
    x1 = (1/p)*((p-1)*x0 + a/pow(x0,p-1));
    if (n>0)
    {
        for (int i = 1; i <= n; i++)
        {
            x0=x1;
            x1 = (1/p)*((p-1)*x0 + a/pow(x0,p-1));
        }
    } else {
        return 1;
    }
    return x1;
}