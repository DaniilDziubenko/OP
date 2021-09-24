#include <iostream>
using namespace std;

int main(){
    float X;
    float Y;
    cout<<"Enter X: ";
    cin>> X;
    if (X<=-1){
        Y = 1/(X*X);
    } else if(X>=-1 && X<=2){
        Y = X*X;
    } else {
        Y = 4;
    }
    cout<<"Y = "<<Y;
    system("pause");
}