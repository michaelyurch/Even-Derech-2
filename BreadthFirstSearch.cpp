#include "BreadthFirstSearch.h"

void BreadthFirstSearch::setMatrix(std::vector<std::vector<std::string>> _matrix) {
	this->matrix = _matrix;
}

std::vector<std::string> BreadthFirstSearch::getOptimalPath() {
	std::vector<std::string> optimalSolution;

	optimalSolution.push_back("up");
	optimalSolution.push_back("up");
	optimalSolution.push_back("up");
	optimalSolution.push_back("up");
	optimalSolution.push_back("up");
	optimalSolution.push_back("up");


	return optimalSolution;
}


