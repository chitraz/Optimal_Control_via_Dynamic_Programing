# Optimal Control via Dynamic Programing

$$
J_{0,N} = h(x[N])  + \sum_{k=0}^{N-1} g(x[k], u[k])
$$

$$
x[k+1] = a(x[k], u[k]) 
$$

$$
x_{lb} \le x \le x_{ub}
$$

$$
u_{lb} \le u \le u_{ub}
$$

where $x$ is the $n$-d state variable, $u$ is the $m$-d control variable, $h(.)$ is the terminal cost, $g(.)$ is the running cost and a(.) is the state dynamics.
Both state and control values are discrete ($x_{ql}, u_{ql}$) and bounded.
## Running


### Linear Regulator example 
