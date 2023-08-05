                       //SUM OF ARRAY THROUGH RECURSSION
#include<iostream>
using namespace std;

int getSum(int arr[],int size){
    //BASE CASE 
    if (size==0){
        return 0;
    }
    if(size==1){
        return arr[0];  //agr array ka size 1 hae to vhi element vapis hoga
        
    }
    int remainingpart=getSum(arr+1,size-1); //taki bache hue part ko add krr ske
    int sum=arr[0]+remainingpart;
    return sum;
}

int main(){
    int arr[5]={2,5,3,6,1};
    int size=5;
    int sum=getSum(arr,size);
    cout<<"Sum is"<<" "<<sum<<endl;
    return 0;
}
