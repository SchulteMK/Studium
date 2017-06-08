#pragma once

#include <map>


class geldmenge
{
protected:
	std::map<int, int> m;

public:
	int getSumme();

	geldmenge operator+=(geldmenge& rhs);

	void set(int key, int value);

	geldmenge();
};
