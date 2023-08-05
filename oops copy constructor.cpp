                 //OOPs [Object Oriented Programing]
                 

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
        cout<<"Default Constructor called"<<endl;
    }
    
    //Parametrized Constructor
    hero(int health){
       cout<<"this->"<<this<<endl;
       this-> health=health;     //11 wali health ko isme use kr skekge because of this keyword   
       
    }
    
    hero(int health,char level){
        this->level=level;
        this->health=health;
    }
    void print(){
        cout<<"health "<<this->health<<endl;
        cout<<"level "<<this->level<<endl;
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
   hero suresh(70,'C');
   suresh.print();
   
   hero ritesh(suresh);     //copy constructor is called
   //basically ye do cheeze hero ritesh(suresh) ke andr hae
//   ritesh.health=suresh.health;
//   ritesh.level=suresh.level;
ritesh.print();


    
    
    
    

    return 0;
}
