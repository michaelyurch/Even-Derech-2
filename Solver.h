#ifndef SOLVER_H
#define SOLVER_H

#include "Problem.h"
#include "Solution.h"

class Solver
{
public:
	virtual Solution solve(Problem problem) = 0;
};

#endif