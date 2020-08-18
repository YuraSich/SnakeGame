#pragma once
#include <vector>

class Object
{
	int x;
	int y;

public:
	Object(int x, int y);
	~Object();
	virtual void Draw();
};



class Snake : Object {
private:
	Object* head;
	std::vector<Object*> tail;
public:
	Snake(int x, int y);
	~Snake();
	virtual void Draw();
};

