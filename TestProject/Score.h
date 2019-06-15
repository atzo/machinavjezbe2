#ifndef SCORE_H
#define SCORE_H

class Score
{
public:
	
	static Score* getInstance();
	void SetScore(int score);
	void ShowScore();

private:
	static Score* instance;
	int ascore;
	Score();
};

#endif

