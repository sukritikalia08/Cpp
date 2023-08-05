                       //STAIR CASE 

//find the number of ways in which we can climb from 0th step to Nth step
#include<iostream>
using namespace std;
int ways(int n){
    //BASE CASE
    if(n<0)
    return 0;
    if(n==0)
    return 1;
    
    //RECURSIVE RELATION
    int ans= ways(n-1)+ways(n-2);
    return ans;
}




int main(){
    int n;
    cin>>n;
    cout<<ways(n)<<endl;
    
}