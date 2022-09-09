#include <iostream>
#include <cstdio>
using namespace std;

string numberToString(int n){
    string result;
    if (n==1) result = "one";
    else if (n==2) result = "two";
    else if (n==3) result = "three";
    else if (n==4) result = "four";
    else if (n==5) result = "five";
    else if (n==6) result = "six";
    else if (n==7) result = "seven";
    else if (n==8) result = "eight";
    else if (n==9) result = "nine";
    else if (n %2 == 0) result = "even";
    else if (n %2 != 0) result = "odd";
    return result;
}

int main() {
    // Complete the code.
    int a, b;
    scanf("%d\n%d", &a, &b);
    for(int i = a;  i<=b; i++){
        cout << numberToString(i) << endl;
    }
    return 0;
}