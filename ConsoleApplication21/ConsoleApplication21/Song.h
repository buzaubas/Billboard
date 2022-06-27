#pragma once
#include <string>
class Song
{
private:
	std::string label;
	size_t votes;
public:
	Song();
	Song(std::string lb, size_t vt);
	Song(const char* str);
	std::string get_label();
	size_t get_votes();
	void add_vote();
	bool operator<(const Song& obj);
};

