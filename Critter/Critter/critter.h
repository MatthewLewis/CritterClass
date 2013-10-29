#include <iostream>
#include <string>
using namespace std;

class Critter //defining class
{
public:      // public functions  
    Critter(int hunger = 0, int boredom = 0);  //constructor with default arguements (note: not using "new"=> no destructor needed
    void Talk();
    void Eat(int food = 4);
    void Play(int fun = 96);
    void Showstats();
private:   // private data and passtime function
    int m_Hunger;  
    int m_Boredom;
    int GetMood() const;
    void PassTime(int time = 1);
};

