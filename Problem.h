#ifndef PROBLEM_H
#define PROBLEM_H

#include <string>
#include <vector>

class Problem
{
	std::vector<std::vector<std::string>> matrix;
public:
	Problem(std::vector<std::vector<std::string>> _matrix) {
        this->matrix = _matrix;
    }
    std::vector<std::vector<std::string>> getMatrix() {
        return this->matrix;
    }
};

#endif
