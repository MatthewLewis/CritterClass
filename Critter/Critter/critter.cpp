#include "critter.h"

Critter::Critter(int hunger, int boredom): //constructor function (colon then can list variables to be initialized initializer list)
    m_Hunger(hunger),
    m_Boredom(boredom)
{
}
void Critter::Showstats()
{
     cout<<"My hunger level is " <<m_Hunger<<endl; //accessing private members/data
     cout<<"My boredom level is " <<m_Boredom<<endl;
}
inline int Critter::GetMood() const //inline used for short/simple functions
{
    return (m_Hunger + m_Boredom);
}

void Critter::PassTime(int time)
{
    m_Hunger += time;
    m_Boredom += time;
}

void Critter::Talk()
{
    cout << "I'm a critter and I feel ";

    int mood = GetMood();
    if (mood > 15)
	{
        cout << "mad.\n";
	}
    else if (mood > 10)
	{
        cout << "frustrated.\n";
	}
    else if (mood > 5)
	{
        cout << "okay.\n";
	}
    else
	{
        cout << "happy.\n";
	}

    PassTime();
}

void Critter::Eat(int food) 
{
    cout << "Num num num.\n";

    m_Hunger -= food;
    if (m_Hunger < 0)
	{
        m_Hunger = 0;
	}

    PassTime();
}

void Critter::Play(int fun)
{
    cout << "Wheee!\n";

    m_Boredom -= fun;
    if (m_Boredom < 0)
	{
        m_Boredom = 0;
	}

    PassTime();
}
