/*
WAP in prolog to find if the given variable is an element of list. If the element is present in list append another list to the primary list. If not find the length of list
*/

elem(X,[X|_]).
elem(X,[_|T]):-elem(X,T).

myfunc(X,Y):-elem(X,Y),write('Enter a list: '),read(S),append(Y,S,A),write('The new list is: '),write(A);
             length(Y,A),write('The length of list is: '),write(A).
