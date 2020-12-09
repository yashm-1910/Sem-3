/*Loop of n numbers*/
loop(0).
loop(X):- X>0,write(X),nl,Y is X-1,loop(Y).

/*factorial*/

fact(0,1).
fact(X,Y):- X>0,X1 is X-1,fact(X1,Y1),Y is Y1*X,!.

/*Sum upto n*/

sumto(1,1).
sumto(X,Y):-X>1,X1 is X-1,sumto(X1,Y1),Y is Y1 + X.

/*Define a predicate to output the values of the squares of the integers from N1 to
N2 inclusive and test it with N1 D 6 and N2 D 12.*/

sqr(N1,N2):-N1>N2.
sqr(N1,N2):-N2 >= N1,N is N1*N1,write(N),nl,M is N1+1,sqr(M,N2).
