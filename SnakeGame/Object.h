#pragma once
#include <vector>

class Object
{
	int x;
	int y;

public:
	Object(int x, int y);
	virtual void Draw() = 0;
};



class Snake : Object {
private:
	Object* head;
	std::vector<Object*> tail;
public:
	Snake(int x, int y);
	virtual void Draw();
};

