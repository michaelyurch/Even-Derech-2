#ifndef PROBLEM_H
#define PROBLEM_H

#include <string>

class Problem
{
	std::string** matrix;
public:
	Problem(std::string** _matrix) {
        this->matrix = _matrix;
    }
    std::string** getMatrix() {
        return this->matrix;
    }
};

#endif