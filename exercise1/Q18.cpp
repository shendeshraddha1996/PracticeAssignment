#include<iostream>
using namespace std;


int checkPrimeNumber(int n) {
    int j, flag = 1;
    for (j = 2; j <= n / 2; ++j) {
        if (n % j == 0) {
            flag = 0;
            break;
        }
    }
    return flag;
}
int main(){
int n1, n2, i, flag;
    cin>>n1>>n2;
    for (i = n1 + 1; i < n2; ++i) {

        // flag will be equal to 1 if i is prime
        flag = checkPrimeNumber(i);

        if (flag == 1)
            printf("%d ", i);
    }
}

