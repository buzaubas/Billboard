#include "Statistic.h"

Statistic::Statistic()
{
}

Statistic::Statistic(Song obj)
{
	if (obj.get_votes() == 0)
		return;
	for (auto it = chart.begin(); it != chart.end(); it++)
	{
		if ((*it).get_label() == obj.get_label())
		{
			(*it).add_vote();
			return;
		}
	}
	chart.push_back(obj);
}

void Statistic::add_song(Song obj)
{
	if (obj.get_votes() == 0)
		return;
	for (auto it = chart.begin(); it != chart.end(); it++)
	{
		if ((*it).get_label() == obj.get_label())
		{
			(*it).add_vote();
			return;
		}
	}
	chart.push_back(obj);
}

void Statistic::sort()
{
	chart.sort();
}
