                          //2-D ARRAYS
// arr[i][j]; here i represents rows and j represents coloums
//CREATING 2-D ARRAY
 
#include<iostream>
using namespace std;
int main(){
    int arr[3][4];
    
    //INPUTING DATA IN 2-D ARRAY- row wise input leta hae
    // for(int i=0;i<3;i++){                 //indexing 0 1 2  (3-1) to 2nd index tk gye
    //     for(int j=0;j<4;j++){             //same here
    //         cin>>arr[i][j];
    //     }
    // }
    
    //INPUTING DATA IN 2-D ARRAY- coloumn wise input leta hae
    for(int i=0;i<4;i++){
        for (int j=0;j<3;j++){
            cin>>arr[j][i];
        }
    }
    
    //PRINTING 2-D ARRAY
    for(int i=0;i<3;i++){
         for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;    //for spacing 
    }
    return 0;
}