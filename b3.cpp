#include <iostream>
#include <math.h>
#include <string>
using namespace std;

int n;
string nToStr;

int countDigits(int n){
    string s = to_string(n);
    return s.length();
}
int main(){
    cin>>n;
    cout << countDigits(n);
    return 0;
}