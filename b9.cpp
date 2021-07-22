#include <iostream>
#include <math.h>
#include <string>
using namespace std;

string roman; 
string ord = "IVXLCDM";
int nTrans[] = {1,5,10,50,100,500,1000};
int nOrd = ord.length();

int romanToInteger(string s){
    int n=0; int len = s.length();
    int temp; int ind1, ind2;

    for (int i=0; i<len-1;i++){
        for(int j=0; j<nOrd; j++){
            if (s[i] == ord[j]){
                temp = nTrans[j];
                ind1 = j; break;
            }
        }
        for(int k=0; k<nOrd; k++){
            if (s[i+1] == ord[k]){
                ind2 = k;
                if (ind1 >= ind2){n += temp;}
                else{n-= temp;}
            }
        }
    }
    for(int j=0; j<nOrd; j++){
            if (s[len-1] == ord[j]){
                n+= nTrans[j];
            }
        }
    return n;
}

int main(){
    cin >> roman;
    cout << romanToInteger(roman);
    return 0;
}