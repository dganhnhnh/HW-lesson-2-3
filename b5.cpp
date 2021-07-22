#include <iostream>
#include <math.h>
using namespace std;

int n;

bool isSpecialNumber(int n, int sq){
    int uocChan=1;int uocLe=1; 
    if (n >0 && n %2 ==0){       //is 1 a divisor?
        for (int i=2; i<= sq; i++){
            if (n % i ==0){
                uocChan += (i%2==0)? 1:0;
                uocLe += (i%2==0)? 0:1;

                int quo = n / i;
                if (quo != i){
                    uocChan += (quo%2==0)? 1:0;
                    uocLe += (quo%2==0)? 0:1;
                }
            }
        }
        if (uocChan == uocLe){return true;}
    }
    return false;
}

int main(){
    cin >> n;
    int sq = int(sqrt(n));
    cout << isSpecialNumber(n,sq);
    return 0;
}