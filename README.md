# Monte-Carlo-Simulation-using-GSL---C
Monte Carlo Simulation in C - GSL RNG - Compiled Language

Compiled Language - Estimating PI - Monte Carlo Simulation

This program was completed in C, created to simulate the monte carlo method. This program utilizing the GSL library for random numbers.

What is the monte carlo method? The monte carlo method process of randomly sampling to retrieve numerical results.

https://www.101computing.net/estimating-pi-using-the-monte-carlo-method/

We assume the more points we generate, the closer we get to PI.

From the c simulation and bash simulation, you can infer that compiled languages can simulate more points in the monte carlo simulation compared to the
interpreted language. The interpreted language would time out after running ~7000 points.
Interpreted languages must be translated at run time to machine instructions while a compile language
can be executed directly from the computer's CPU.

Bash Implementation: ~7132 points
Compiled Implemtation: ~7420021 points

How to execute? 
Compile the files
./monte
