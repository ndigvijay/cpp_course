#include<iostream>
using namespace std;

int main(){
    int a=10;
    int *b=&a;
    cout<<a<<" "<<b<<endl;
    cout<<&a<<" "<<&b<<endl;
    ++a;
    cout<<a<<" "<<b<<endl;
    ++b;
    cout<<a<<" "<<b<<endl;
}