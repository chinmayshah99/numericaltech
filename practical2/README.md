# To implement false Position or Regula falsi method

### Algorithm-
1.	Read interval [x0 , x1] in which at least one root of the equation f(x) = 0 lies and also read the number of iterations ‘n’ to be performed 
2.	Calculate f(x0) and f(x1) by substituting x = x0 and x = x1 in the equation of f(x)
3.	Calculate the next approximation to the root ___x = x2___ as 
	__x2 = x1 – ( ( (x1 – x0) * (f(x1)) ) / ( f(x1) - f(x0) ) )__
4.	Calculate f(x2) by substituting x = x2 in the equation of f(x)
5.	If ( f(x0) * f(x2) ) < 0 then root lies in the interval [x0 , x2]. Hence replace ’ x1’ by ‘x2’ 
	If ( f(x1) * f(x2) ) < 0 then root lies in the interval [x2 , x1]. Hence replace ‘x0’ by ‘x2’
6.	Repeat steps between the step no (3) and the step no (5) until the number of iterations is equal to the value ‘n’ specified by the user in step (1) above
	OR
	Repeat steps between the step no (3) and the step no (5) until value of ‘x2’ repeats up to given significant digits after decimal point
7.	Approximate value of the root is equal to the ‘x2’ of latest interval [x0 , x1] in the last iteration
8.	Display approximate value of the root and stop
