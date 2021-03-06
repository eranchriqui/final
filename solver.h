
#ifndef FINAL_SOLVER_H
#define FINAL_SOLVER_H

#include "Stack.h"
#include "gurobi.h"
#include "errorMessages.h"
#include <stdio.h>


/* precondition: board has no erroneous values (to be checked before calling this function)
 * the function solves the board using ILP algorithm
 * returns TRUE (1) if solvable or FALSE (0) if unsolvable*/
int solveUsingILP(gameParams *game, ILPCommand cmd);


/* precondition: board has no erroneous values (to be checked before calling this function)
 * the function counts the number of solutions for a given board using exhaustive backtracking
 * it is called by num_solutions (in commands.h) */
int countSolutions(gameParams *game);

#endif