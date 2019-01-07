#ifndef SEARCHER_H
#define SEARCHER_H

#include <string>
#include <vector>

class Searcher
{
public:
	virtual void setMatrix(std::vector<std::vector<std::string>> _matrix) = 0;
	virtual std::vector<std::string> getOptimalPath() = 0;
};

#endif
