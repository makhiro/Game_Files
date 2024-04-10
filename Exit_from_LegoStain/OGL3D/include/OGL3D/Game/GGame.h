#pragma once
class GGame
{
public:
	GGame();
	~GGame();

	void run();
	void quit();
protected:
	bool m_isRunning = true;
};

