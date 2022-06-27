#include <iostream>
#include "Song.h"
#include "Statistic.h"

using namespace std;

int main()
{
	Statistic billboard;
	std::string plan[] = {"All of me", "Riptide", "Counting stars", "Hall of fame"};
	size_t request_num;
	std::cout << "How many requests sent? ";
	std::cin >> request_num;
	for (auto i = 0; i < request_num; i++)
	{
		for (auto elem : plan)
		{
			bool option;
			char song_request;
			std::cout << elem << "\t";
			std::cin >> option;
			std::getline(std::cin, song_request);
			billboard.add_song(Song());
		}
	}
}

