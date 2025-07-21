//Calculate sum of numbers from 1 to N using funtions

#include<iostream>
using namespace std;

void sumOf(int sumnum) {
    int sum = 0;
    for (int i = 1; i <= sumnum; i++) {
        sum = sum + i;
    }
    cout << sum << endl;
}

int main() {
    sumOf(50);
    sumOf(5);
    return 0;
}
