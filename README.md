# Optimal Control via Dynamic_Programing

min J = g(x(0), x(T)) + ∫₀ᵀ f(x,u,t) dt
s.t. dx/dt = h(x,u,t)
     x ∈ X_admissible, u ∈ U_admissible
     x(0) ∈ ReachableSet (backward), x(T) = x_final (or free)
