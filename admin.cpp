#include "admin.h"

int main () {


	Searcher* searcher = new BreadthFirstSearch();
	SearcherAdapter searchAdapter = SearcherAdapter(searcher);

	std::vector<std::vector<std::string>> matrix;
	Problem problem = Problem(matrix);

	searchAdapter.solve(problem);

	return 0;
}
