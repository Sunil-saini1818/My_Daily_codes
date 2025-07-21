//function of minimum of two numbers
#include<iostream>
using namespace std;
void minimum(int a, int b){
    if(a<b){
        cout<<"A is minimum"<<endl;
    }
    else{
        cout<<"B is minimum"<<endl;
    }
}
int main(){
    int num1, num2;
    cout<<"Enter value of num1 and num2 to fing minimum among them"<<endl;
    cin>>num1;
    cin>>num2;

    minimum(num1, num2);
    minimum(num1, num2);
    


return 0;
}