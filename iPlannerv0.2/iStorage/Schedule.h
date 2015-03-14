#pragma once

#ifndef SCHEDULE_H
#define SCHEDULE_H

#include <vector>
#include "Item.h"
using namespace std;

class Schedule {
private:
	vector<Item *> _Schedule;

public:

	Schedule();


	///////// I STOPPED HERE ////////
	/////////////////////////////////
	/////////////////////////////////
	void addItem(Item *itemToBeAdded);
	Item getCopyOfItem(unsigned int idOfItemToGet);
	void deleteItem(unsigned int idOfItemToDelete);

};

#endif