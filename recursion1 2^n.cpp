                       //RECURSION

//2.)2 raise to power n
#include<iostream>
using namespace std;
int power(int n){
    //base case
    if(n==0)
    return 1;
    //recursive relation
    int smallproblem=power(n-1);
    int biggerproblem=2*smallproblem;
    return biggerproblem;             //return 2*power(n-1);
}


int main(){
    int n;
    cin>>n;
    int ans=power(n);
    cout<<ans<<endl;
}
