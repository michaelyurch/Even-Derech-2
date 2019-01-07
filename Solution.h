#ifndef SOLUTION_H
#define SOLUTION_H

#include <string>

class Solution
{
	std::string* optimalPath;
public:
	Solution(std::string* _matrix) {
        this->optimalPath = _matrix;
    }    
    std::string* getOptimalPath() {
        return this->optimalPath;
    }
};

#endif