#include <iostream>
#include <cstdlib>
using namespace std;

void maxmin(int * arr, int n);

int main(){
    int n;
    cout<<"Enter variable N: ";
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand()%(200)-100;
        cout<<arr[i]<<' ';
    }
    cout<<endl;
    maxmin(arr, n); 
    system("pause");
}

void maxmin(int * arr, int n){
    int max = arr[0];
    int min = arr[0];
    int iMax=0, iMin=0;
    for (int i = 0; i < n; i++)
    {
        if(max<arr[i]){
            max = arr[i];
            iMax = i;
        }
        if(min>arr[i]){
            min = arr[i];
            iMin = i;
        }
    }
    int b = arr[iMax];
    arr[iMax] = arr[iMin];
    arr[iMin] = b;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<' ';
    }
    cout<<endl;
}