#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int upper = int(sqrt(1000));
    for (int i=1; i<= upper; i++){
        cout<< pow(i,2) << " ";
    }
    return 0;
}