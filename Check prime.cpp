                                        //Prime
#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n){
    if(n<=1){                //0 and 1 are not prime numbers
        return false;
    }
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
        return true;
    }
}
int main(){
    int n;
    cin>>n;
    if(isPrime(n)){
        cout<<"is prime"<<endl;
    }
    else{
        cout<<"not Prime"<<endl;
    }
    return 0;
}
