               //OOPs [Object Oriented Programing]
                 

#include <iostream>
#include <string.h>
using namespace std;
class hero {
    
    //properties
    
   private:   //modifier
    int health;
     public:  
    char *name;
    char level;
    
    //creating constructor
    hero(){
        cout<<"Simple Constructor called"<<endl;
        name=new char[100];   //dynamically allocate krvaya
    }
    
    //Parametrized Constructor
    hero(int health){
       cout<<"this->"<<this<<endl;
       this-> health=health;     //11 wali health ko isme use kr skekge because of this keyword   
       
    }
    
    //copy Constructor
    hero(hero& t){    //& pass by reference ke leye taki infinite loop me na fase reh jaye
        char *ch= new char[strlen(t.name)+1];
        strcpy(ch,t.name);
        this->name=ch;
        this->health=t.health;
        this->level=t.level;
        
    }
    
    hero(int health,char level){
        this->level=level;
        this->health=health;
    }
    void print(){
        cout<<"name: "<<this->name<<endl;
        cout<<"health: "<<this->health<<endl;
        cout<<"level: "<<this->level<<endl;
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
    void setname(char name[]){
        strcpy(this->name, name);
    }
    
    //destructor
    ~ hero(){
        cout<<"Destructor called"<<endl;
    }
};

int main()
{
    //static
   hero a;
   
   //dynamic
   hero *b=new hero();
   //manually destructor called
   delete b;
   
   


    return 0;
}