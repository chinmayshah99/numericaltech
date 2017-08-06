# To implement Bisection Method and find the roots

### Algorithm

1.	Read interval [a,b] and permissible error or correct significant digits after decimal point.
2.	Calculate the centre point of an interval ** c = (a+b)/2 **
3.	Calculate f(a), f(b) & f(c) by substituting x = a, x = b and x = c in the function f(x)
4.	If ( f(a) * f(c) ) < 0 then root lies in the interval [a,c]. Hence replace ’b’ by ‘c’
If ( f(b) * f(c) ) < 0 then root lies in the interval [c,b]. Hence replace ‘a’ by ‘c’

	Repeat steps between the step no (3) and the step no (5) until value of f(c) less than some tolerable limits.
		OR
	Repeat steps between the step no (3) and the step no (5) until value of ‘c’ repeats up to given significant digits after decimal point

5.	Approximate value of the root is equal to the centre point ‘c’ of latest interval [a,b] in the last iteration
6.	Display approximate value of the root and stop
