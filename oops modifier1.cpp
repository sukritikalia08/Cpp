                 //OOPs [Object Oriented Programing]

#include <iostream>

using namespace std;
class hero {
    //properties
    
    public:     //modifier
    int health;
    char level;
    void print(){
        cout<<level<<endl;
    }
};

int main()
{
    //creation of object
 hero h1;
 
//giving values
h1.health=70;
h1.level='A';

//if we don't give the values then the output shown will be the garbage values
 
 
 cout<<"Health is:"<<h1.health<<endl;
 cout<<"Level is:"<<h1.level<<endl;

    return 0;
}
