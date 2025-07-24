//function to calculate number is prime or not
#include<iostream>
using namespace std;

int checkPrime(int num){

    bool isPrime = true;
    for(int i = 2;i<num-1;i++){
        if(num%i == 0){
            isPrime = false;
        }
    }
    
    if(isPrime == true){
        cout<<"PRIME NUMBER"<<num<<endl;
    }
    else
    {
        cout<<"NOT A PRIME NUMBER"<<num<<endl;
    }
    return isPrime;
}
int main(){
    int number;
    cout<<"Enter the number you want to check prime or not : ";
    cin>>number;
    checkPrime(number);
    return 0;
}