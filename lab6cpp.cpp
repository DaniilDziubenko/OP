#include <iostream>
#include <cmath>
using namespace std;

float sqrt(int p, int a, int n);
int factorial(int a);

int main(){
    int m,k,n;
    cout<<"Enter variable m: ";
    cin>>m;
    cout<<"Enter variable k: ";
    cin>>k;
    cout<<"Enter variable n: ";
    cin>>n;
    float y;
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

float sqrt(int p, int a, int n){
    float x0,x1;
    x0 = 1;
    x1 = (x0/pow(p,2))*((pow(p,2)-1)+(((p+1)*a)/(2*pow(x0,p)))-(((p+1)*pow(x0,p))/(2*p)));
    if (n>0)
    {
        for (int i = 1; i <= n; i++)
        {
            x0=x1;
            x1 = (x0/pow(p,2))*((pow(p,2)-1)+(((p+1)*a)/(2*pow(x0,p)))-(((p+1)*pow(x0,p))/(2*p)));
        }
    }
    return x1;
}