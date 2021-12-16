#include <iostream>
#include <string>
#include <cstring>
#include <cmath>
using namespace std;

int countSpace(string str, int len);                    

int main(){
    string str;
    cout<<"Enter string of symbols: ";
    getline(cin, str);
    int len = str.length();
    str.resize(60);
    int count = countSpace(str, len);
    cout<<"Number of aded spaces: "<<count<<endl;
    system("pause");
}

int countSpace(string str, int len){
    int count=0, k = 0;
    if(str.find(' ')>=0 and str.find(' ')<=60){         //Проверка наличия пробела в строке
        for (int i = 0; i < str.length(); i++)
        {
            if(str[i] == ' '){                          //Подсчёт пробелов
                k++;
            }
        }
        int posSpace[k];
        k = 0;
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == ' ')
            {
                posSpace[k] = i;                        //Массив из позиций пробелов
                k++;
            }
        }
        int n = (60-len)/k;                             //Количество пробелов, которые нужно добавить на каждую позицию
        for (int i = 0; i < k; i++)
        {
            str.insert(posSpace[i]+count, n, ' ');      //Добавление пробелов в строку
            count+=n;
        }
        cout<<"Result: "<<str<<endl;
        return count;
    } else{
        cout<<"Result: "<<str<<endl;
        return 0;
    }
}