#include "Song.h"

Song::Song()
{
}

Song::Song(std::string lb, size_t vt) : label(lb), votes(vt)
{
}

Song::Song(const char* str)
{
	std::string word(str);
	auto len = word.find_first_of('\t');
	this->label = word.substr(0, len);
	this->votes = std::stoi(word.substr(len + 1));
}

std::string Song::get_label()
{
	return this->label;
}

size_t Song::get_votes()
{
	return this->votes;
}

void Song::add_vote()
{
	this->votes++;
}

bool Song::operator<(const Song& obj)
{
	return votes < obj.votes;
}
