#include <iostream>
#include <math.h>
using namespace std;

int a, b, c;
string t;

string typeOfTriangle(int a, int b, int c){
    if (a>0 && b>0 && c>0){
        if (a+b>c && b+c>a && a+c>b){
        if (a==b && b==c){
            t ="Tam giac deu";
        }
        else if (a==b || b == c || c==a){
            t ="Tam giac can";
        }
        else {cout<< "Tam giac thuong";}
    }}else {t ="Khong ton tai tam giac";}
    return t;
}
int main(){
    cin >> a >> b >>c;
    cout << typeOfTriangle(a,b,c);
    return 0;
}