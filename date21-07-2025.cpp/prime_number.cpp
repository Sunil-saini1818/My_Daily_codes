#include<iostream>
using namespace std;

int main(){

    cout<<"Enter number you check prime or not."<<endl;
    int num;
    cin>>num;
    bool isPrime = true;
    for(int i = 2; i<=num-1; i++){
        if(num%i == 0){
            isPrime = false;
            break;
        }

    }
    if(isPrime == true){
        cout<<"PRIME NUMBER"<<endl;
        
    }
    else{
        cout<<"not a prime number"<<endl;
    }

 return 0;

}