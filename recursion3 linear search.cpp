                          //LINEAR SEARCH
                          
                          
#include<iostream>
using namespace std;
int LinearSearch(int arr[],int size,int key){
    if(size==0){
        return false;  //when the array gets finished and the key is not found
    }
    if(arr[0]==key){
        return true;    //when the first element get matched with the key
    }
    else{
        bool remainingpart=LinearSearch(arr+1,size-1,key);  //ek-ek krke aage jaa kr search continue rkhna jb tk key ni milti
        return remainingpart;
    }
}


int main(){
    int arr[5]={12,45,9,6,4};
    int size=5;
    int key;
    cin>>key;
    bool ans=LinearSearch(arr,size,key);
    if(ans){
        cout<<"Present"<<endl;
    }
    else{
        cout<<"Absent"<<endl;
    }
    return 0;
}
