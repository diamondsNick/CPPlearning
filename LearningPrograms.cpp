#include<iostream>

using namespace std;

int main(){
    int a = 5;
    int *pa = &a; // обязательно используем тот же тип указателя, что и у значения
    cout<<"a = "<<*pa;
    return 0;
}