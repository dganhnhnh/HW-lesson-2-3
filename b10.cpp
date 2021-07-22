#include <iostream>
#include <math.h>
#include <string>
using namespace std;

int n,minBase; bool hey;

void isSumOfExponentials(int n){
    int h=(n%2==0)? (n/2):((n-1)/2);  
    for(int i=3; i<=h;i++){
        int temp =n; int cnt=0;
        if(n %i==0){
            int upperHat = int(log(n) / log(i));
            for(int j=upperHat; j>=1; j--){
                if (pow(i, j) <= temp){
                        temp -= pow(i, j); 
                        cnt++;
                }
            }
              
        }
        if(cnt >= 2 && temp == 0){
                minBase = i; return;
            } 
    }
    minBase=-1; return;
}

int main(){
    cin>>n;
    isSumOfExponentials(n);
    cout <<minBase; 
    return 0;
}