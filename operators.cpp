#include <iostream>
using namespace std;

int b_oper() {
    // Bitwise operators
    int a = 1;
    int b = 2;
    cout<<"Bitwise operators"<<endl;
    cout<<"a = "<<a<<endl<<"b = "<<b<<endl;
    cout<<"& : "<<(a&b)<<endl;
    cout<<"| : "<<(a|b)<<endl;
    cout<<"^ : "<<(a^b)<<endl;
    cout<<"~ : "<<(~a)<<endl;
    cout<<"<< : "<<(a<<1)<<endl;
    cout<<">> : "<<(a>>1)<<endl;
    return 0;
}

int main() {
    int a = 5;
    int b = 6;

    cout<<"a = "<<a<<endl<<"b = "<<b<<endl;

    // incremental and decremental operators
    cout<<"incremental and decremental operators"<<endl;
    cout<<"a++ : "<<a++<<endl;
    cout<<"a-- : "<<a--<<endl;
    cout<<"++a : "<<++a<<endl;
    cout<<"--a : "<<--a<<endl;

    // Relational operators
    cout<<"Relational operators"<<endl;
    cout<<"== :"<<(a==b)<<endl;
    cout<<"!= :"<<(a!=b)<<endl;
    cout<<"> :"<<(a>b)<<endl;
    cout<<"< :"<<(a<b)<<endl;
    cout<<">= :"<<(a>=b)<<endl;
    cout<<"<= :"<<(a<=b)<<endl;

    // Logical operators
    cout<<"Logical operators"<<endl;
    cout<<"&& : "<<(a < b && a < b)<<endl;
    cout<<"|| : "<<(a < b || a > b)<<endl;
    cout<<"! : "<<(!0)<<endl;

    b_oper();

    return 0;
}