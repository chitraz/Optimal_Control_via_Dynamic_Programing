#include "ProblemDefinition.hpp"
#include <vector>
#include <cmath>

// ----------------------------------- Linear Regulator Example ----------------------------------- 
ProblemDefinition::ProblemDefinition()
{
    n = 2;
    x_ql = 100;

    m = 1;
    u_ql = 100;

    T = 5; 
    N = 100;

    x_lb = {0, 0};
    x_ub = {4, 4}; 
    u_lb = {-3};
    u_ub = {0};

    initial_x = {1.75, 3.75};
    final_x = {0.0, 0.0};   // if x*[N] is free, leave this empty {}

    free_final_state = final_x.empty();
    delta_time = (double)T / (double)N;
}

std::vector<double> ProblemDefinition::next_state_equation(std::vector<double> current_x, std::vector<double> current_u)
{
    std::vector<double> next_x; 

    next_x.push_back((current_u[0] - current_x[0]) * delta_time + current_x[0]);
    next_x.push_back(2.0*(current_u[0] - current_x[1]) * delta_time + current_x[1]);

    return next_x;
}

double ProblemDefinition::cost_equation(std::vector<double> current_x, std::vector<double> current_u, bool terminal)
{
   	if (terminal) 
    {
		return 0.0; // terminal cost
	}
	return (pow(current_x[0], 2.0) + pow(current_x[1], 2.0) + pow(current_u[0], 2.0)) * delta_time;   // running cost
}
