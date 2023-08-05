                        //TRANSPOSE OF THE MATRIX
                        
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    
    for(int i=0;i<3;i++){      //i is representing the row eg-representing the 0th row 
        for(int j=i;j<3;j++){  //j ko is se isley eq. kra taki row se coloumn hmesha  bda rhe kyuki aase hm sari matrix ko transverse ni krege sirf upper diagnal elements ko krege
            //swap
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        
            
        }
    }
    
    //print
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }
    return 0;
}




