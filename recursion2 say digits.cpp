                       //SAY DIGITS
#include<iostream>
using namespace std;
void saydigits(int n,string arr[]){
    
    //BASE CASE 
    if(n==0)
    return;
    
    //PROCESSING PART
    int digit=n%10;
    n=n/10;
    
    //RECURSIVE RELATION/CALL
    saydigits(n,arr);
    cout<<arr[digit]<<endl;   //isley baad me liya taki sahi order me digit name dikhaye

}



int main(){
    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    int n;
    cin>>n;
    saydigits(n,arr);
    cout<<endl;
}
