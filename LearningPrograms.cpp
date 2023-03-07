#include<iostream>

using namespace std;

int upper(int *pa){
    (*pa)++;
}

int main(){
    int a = 5;
    int *pa = &a; // обязательно используем тот же тип указателя, что и у значения
    cout<<"a = "<<*pa<<"\n";
    upper(&a);
    cout<<"a = "<<a;
    return 0;
}