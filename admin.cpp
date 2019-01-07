#include "admin.h"

int main () {


	Searcher* searcher = new BreadthFirstSearch();
	SearcherAdapter searchAdapter = SearcherAdapter(searcher);

	std::vector<std::vector<std::string>> matrix;

	for (int i = 0; i < 5; ++i) {
		std::vector<std::string> curLine;
		for (int i2 = 0; i2 < 5; ++i2) {
			curLine.push_back(std::to_string((i * 10) + i2));
		}
		matrix.push_back(curLine);
	}

	Problem problem = Problem(matrix);

	std::vector<std::string> optimalSolution = searchAdapter.solve(problem).getOptimalPath();

	for (int i = 0; i < optimalSolution.size(); ++i) {
		std::cout<<optimalSolution[i]<<"\n";
	}

	return 0;
}
