#include<iostream>
using namespace std;

void SumDigit(int num){
    int Newnum, total = 0;
    while(num > 0){
        Newnum = num%10;
        num = num/10;
        total = total + Newnum;
    
    }
 cout<<total<<endl;

}




int main(){
    SumDigit(5671);
    SumDigit(55555);

 return 0;
}