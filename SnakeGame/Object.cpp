#include "Object.h"

Object::Object(int _x, int _y) {
	this->x = _x;
	this->y = _y;

}

Snake::Snake(int x, int y) : Object(x,y) {
	head = nullptr;
	tail.clear();
}

void Snake::Draw()
{

}
