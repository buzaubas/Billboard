#pragma once
#include <list>
#include "Song.h"
class Statistic
{
private:
	std::list<Song> chart;
public:
	Statistic();
	Statistic(Song obj);
	void add_song(Song obj);
	void sort();
};

