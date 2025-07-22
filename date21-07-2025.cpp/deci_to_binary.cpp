#include<iostream>
using namespace std;

void deciToBinary(int decinum){
    int ans = 0;
    int pow = 1;
    int rem;
    while(decinum>0){
        rem = decinum%2;
        decinum = decinum/2;
        ans = ans + (rem*pow);
        pow = pow*10;
        
    }
    cout<<ans;
}
int main(){
    deciToBinary(50);

 return 0;

}