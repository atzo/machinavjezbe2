#include "Score.h"
#include <iostream>

Score* Score::instance = 0;

Score* Score::getInstance()
{
	if (instance == nullptr)
	{
		instance = new Score();
		return instance;
	}
	else
	{
		return instance;
	}
}

void Score::SetScore(int score)
{
	ascore = score;	
	ShowScore();
}

void Score::ShowScore()
{
	std::cout << "Score: " << ascore << std::endl;
}

Score::Score()
{

}


