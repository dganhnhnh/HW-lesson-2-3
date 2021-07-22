#include <iostream>
#include <math.h>
#include <string>
using namespace std;

int n;

bool isPalindrome(int n){
    string s = to_string(n);
    int h = (s.length() % 2 ==0)? (s.length()/2) : ((s.length()-1)/2);
    for (int i=0; i<s.length(); i++){
        if (s[i] != s[s.length()-1-i]){return false;}
    }
    return true;
}

int toBinary(int n){
    int nBin; int i=1;
    
    while(pow(2,i) < n){i++;}

    while(n > 0 && i>=0){
        if (n >= pow(2,i)){
            n -= pow(2,i);
            nBin += pow(10,i);
        }
        i--;
    }
    return nBin;
}

int main(){
    cin >> n;
    if (isPalindrome(n) && isPalindrome(toBinary(n))) cout << "true";
    else cout<<"false";
    cout <<toBinary(n); 
    return 0;
}