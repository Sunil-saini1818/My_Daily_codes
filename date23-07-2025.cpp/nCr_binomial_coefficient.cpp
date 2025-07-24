#include<iostream>
using namespace std;

int factorialIn(int num){
    int fact = 1;
    for(int i = 1;i<=num;i++){
        fact *= i;
    }
    return fact;
}

int main(){
    int a, b,d;
    a = factorialIn(8);
    b = factorialIn(2)*factorialIn(6);
   

    d = a/b;
    cout<<"binomial coefficient is = "<<d<<endl;

}


//THIS CODE IS IMPROVE BY THIS FUNCION OF EDGE CASES
// Function to calculate binomial coefficient C(n, r)
// int binomialCoefficient(int n, int r){
//     if (r < 0 || r > n) return 0; // edge case check
//     int num = factorial(n);
//     int denom = factorial(r) * factorial(n - r);
//     return num / denom;
// }

