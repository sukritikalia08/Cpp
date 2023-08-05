                 //OOPs [Object Oriented Programing]
                 //getter/setter

#include <iostream>

using namespace std;
class hero {
    //properties
    
   private:   //modifier
    int health;
     public:  
    char level;
    
    //creating constructor
    hero(){
        cout<<"Constructor called"<<endl;
    }
    
    //Parametrized Constructor
    hero(int health){
       cout<<"this->"<<this<<endl;
       this-> health=health;     //11 wali health ko isme use kr skekge because of this keyword   
       
    }
    
    
    int gethealth(){    //because of private modifier
        return health;
    }
    char getlevel(){
        return level;
    }
    void sethealth(int h){
        health=h;
    }
    void setlevel(char ch){
        level=ch;
    }
    
};

int main()
{
    // object created statically 
    cout<<"Hi"<<endl;
    hero ramesh(10);    //ramesh object ka hero wala function call hua
    cout<<"Address of ramesh:"<<&ramesh<<endl;
  //dynamically
  hero *r= new hero(10);
    
    
    
    
    

    return 0;
}
