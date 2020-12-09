test(X,Y,Z):-Z is (X+Y)/2.
test1(X,Y,Z):-Z is sqrt(X*Y).
test2(X,Y,Z):-Z is max(X,Y).
/*
Define and test a predicate which takes two arguments, both numbers, and
calculates and outputs the following values: (a) their average, (b) the square
root of their product and (c) the larger of (a) and (b).
*/