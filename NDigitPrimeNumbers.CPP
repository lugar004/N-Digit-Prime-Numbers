#include <iostream>

using namespace std;
int isPrime(int p);
int isDigPrime(int p);
int sumOfDigits(int p);
//Function for Prime numbers
void genPrimeDigNum(int n) {
    int i = 1;
    for (int k = 2; i<=n; k++){
        //if k is prime
        if (isPrime(k)){
            if(isDigPrime(k)){
                cout << k <<" ";
                i++; //successful printDigit
            }
        }
    }
}

int isPrime(int p) {
    bool flag = 0;
    int tmp = p/2;
    for (int i = 2; i<=tmp; i++) {
        if (p % i == 0 && p!=2) {
            flag = 1;
        }
    }
    if (flag != 0)
        return 0;
    else
        return 1;
}

int isDigPrime(int p) {
    int sum;
    sum = sumOfDigits(p);
    return isPrime(sum);
}

int sumOfDigits(int p){
    int sum = 0, tmp;
    while (p != 0) {
        tmp = p % 10;
        sum += tmp;
        p = p / 10;
    }
    return sum;
}

int main()
{
    //Code here
    int n;
    cout << "Enter the number of PrimeDigits to be printed:";
    cin >> n;

    if (n == 1)
        cout << 2;
    else {
        genPrimeDigNum(n);
    }

    return 0;
}
