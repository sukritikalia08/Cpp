                       //SORTING THROUGH RECURSSION
#include<iostream>
using namespace std;

bool isSorted(int arr[],int size){
    //BASE CASE 
    if(size==0 ||size==1 )
    return true;
    if(arr[0]>arr[1])
    return false;
    else{
        bool remainingpart=isSorted(arr+1,size-1);  //phle to ko comapare krne ka baad ka bcha hua part 
        return remainingpart;
    }
}

int main(){
    int arr[5]={2,4,3,8,9};
    int size=5;
    bool ans=isSorted(arr,size);
    
    if(ans){                      //it means if the condition is truem
        cout<<"array is sorted"<<endl;
    }
    else{
        cout<<"array is not sorted"<<endl;
    }
    return 0;
}