#ifndef SEARCHER_ADAPTER_H
#define SEARCHER_ADAPTER_H

#include "Searcher.h"
#include "Solver.h"

class SearcherAdapter : public Solver
{
Searcher* searcher;
public:
	SearcherAdapter(Searcher* _searcher) {
		this->searcher = _searcher;	
	}
	Solution solve(Problem problem) {
		this->searcher->setMatrix(problem.getMatrix());
		Solution solution = Solution(this->searcher->getOptimalPath());
		return solution;
	}
};

#endif
