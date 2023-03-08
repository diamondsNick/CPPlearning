#include<iostream>

using namespace std;

int upper(int *pa){
    (*pa)++;
}

int changer(int *pa, int *pb){
    int c = *pa;
    cout<<"c = "<<c<<"\n";
    *pa = *pb;
    *pb = c;
}
int main(){
    int a = 5;
    int b = 7;
    int *pa = &a; // обязательно используем тот же тип указателя, что и у значения
    cout<<"a = "<<*pa<<"\n";
    upper(&a);
    cout<<"a = "<<a<<"\n";
    cout<<"--------------------\n";
    changer(&a, &b);
    cout<<"a = "<<a<<"\n";
    cout<<"b = "<<b<<"\n";
    cout<<"--------------------\n";
    cout<<5+(*(&b))<<"\n";
    cout<<"--------------------\n";
    int *px = new int;
    *px = 7;
    cout<<"a = "<<a<<"\n";
    delete px;
    cout<<"--------------------\n";
    cout<<"a = "<<a<<"\n";
    return 0;
}