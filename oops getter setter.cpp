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
    
    int gethealth(){
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
    //creation of object
 hero h1;
 cout<<"h1 health is:"<<h1.gethealth()<<endl;
//using setter
h1.sethealth(70);
h1.level='A';

//if we don't give the values then the output shown will be the garbage values
 
 
 cout<<"Health is:"<<h1.gethealth()<<endl;
 cout<<"Level is:"<<h1.level<<endl;

    return 0;
}
