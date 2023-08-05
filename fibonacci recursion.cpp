                        //Fibonacci with recursion
#include<bits/stdc++.h>
using namespace std;
void printFibonacci(int n){
   static int n1=0;
   static int n2=1;
   static int n3;
    if(n>0){
        n3=n1+n2;
        n1=n2;
        n2=n3;
        cout<<n3<<" ";
        printFibonacci(n-1);     //calleed the function within the function
        
    }
}

int main(){
    int n;
    cout<<"enter the number of elements:";
    cin>>n;
    cout<<"Fibonacci Series:";
    cout<<"0"<<" "<<"1"<<" ";
    printFibonacci(n-2);  //because 2 elements are already printed
    return 0;
}

