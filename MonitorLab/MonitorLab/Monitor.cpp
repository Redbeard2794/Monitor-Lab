#include "stdafx.h"
#include "Monitor.h"

Monitor::Monitor()
{
	front = 0;
	rear = 0;
	count = 0;
	not_full = true;
	not_empty = false;
}

Monitor::~Monitor()
{
}

void Monitor::Deposit(std::string data)
{
	while (count == 100)//n
	{
		while(not_full==false){}
	}
	buf[rear] = data;
	rear = (rear + 1) % 10;
	count++;
	not_empty = false;
}

void Monitor::Fetch(std::string &result)
{
	while (count == 0)
	{
		while (not_empty == false) {}
	}
	result = buf[front];
	front = (front + 1) % 10;
	count--;
	not_full = false;
}
