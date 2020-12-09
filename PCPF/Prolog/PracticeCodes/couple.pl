/* Dating Agency Database */
/* Extend the program with a rule that defines a predicate couple with two
arguments, the first being the name of a man and the second the name of a woman.
Load your revised program into Prolog and test it.*/

person(bill,male).
person(george,male).
person(alfred,male).
person(carol,female).
person(margaret,female).
person(jane,female).
couple(X,Y):-person(X,male),person(Y,female).
