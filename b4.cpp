#include <iostream>
#include <math.h>

using namespace std;

int a,b;
int divisibility(int a, int b){
    int i=0;
    while(a % b !=0){
        a++;
        i++;
    }
    return i;
}

int main(){
    cin >> a>>b;
    cout << divisibility(a,b);
    return 0;
}