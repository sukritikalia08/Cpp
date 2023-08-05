                          //LINEAR SEARCH IN 2-D ARRAY
// arr[i][j]; here i represents rows and j represents coloums

 
#include<iostream>
using namespace std;

bool isPresent(int arr[][4],int target,int row,int col){   //we must specify the col size in the parameter during thr creation of function
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            if(arr[i][j]==target){
                return 1;
            }
        }
    }
    return 0;
}


int main(){
    int arr[3][4];
    
    //INPUTING DATA IN 2-D ARRAY- row wise input leta hae
    for(int i=0;i<3;i++){                 //indexing 0 1 2  (3-1) to 2nd index tk gye
        for(int j=0;j<4;j++){             //same here
            cin>>arr[i][j];
        }
    }
    
    //INPUTING DATA IN 2-D ARRAY- coloumn wise input leta hae
    // for(int i=0;i<4;i++){
    //     for (int j=0;j<3;j++){
    //         cin>>arr[j][i];
    //     }
    // }
    
    //PRINTING 2-D ARRAY
    for(int i=0;i<3;i++){
         for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;    //for spacing 
    }
    cout<<"Enter the element you want to search"<<endl;
    int target;
    cin>>target;
    if(isPresent(arr,target,3,4)){   //3,4 are representing the rows and col
        cout<<"found"<<endl;
    }
    else{
        cout<<"not found";
    }
    return 0;
}