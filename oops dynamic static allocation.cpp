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
    //static allocation
    hero a;
    a.sethealth(80);
    a.setlevel('B');
    cout<<"level is: "<<a.level<<endl;
    cout<<"health is: "<<a.gethealth()<<endl;
    
    //Dynamic allocation
    hero *b= new hero;   //stored in heap
    b->sethealth(70);
    b->setlevel('A');
    cout<<"level is: "<<(*b).level<<endl;
    cout<<"health is: "<<(*b).gethealth()<<endl;
    
    cout<<"level is: "<<b->level<<endl;
    cout<<"health is: "<<b->gethealth()<<endl;
    
    
    
    
    

    return 0;
}
