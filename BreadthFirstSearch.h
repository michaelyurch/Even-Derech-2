#ifndef BREADTH_FIRST_SEARCH_H
#define BREADTH_FIRST_SEARCH_H

#include "Searcher.h"

class BreadthFirstSearch : public Searcher
{
std::vector<std::vector<std::string>> matrix;
public:
	void setMatrix(std::vector<std::vector<std::string>> _matrix);
	std::vector<std::string> getOptimalPath();
};

#endif
