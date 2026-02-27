# Optimal Control via Dynamic Programing

Goal: Solve 

```
min J = g(x(0), x(T)) + ∫₀ᵀ f(x,u,t) dt
  s.t. dx/dt = h(x,u,t)
       x ∈ X_admissible, u ∈ U_admissible
  given x(0) x(T)
```
whre x is the state variable, u is the control variable
