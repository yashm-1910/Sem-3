

last_elem(X,[X]).
last_elem(X,[_|T]):-last_elem(X,T),!.

last_but_one(X,[X,_]).
last_but_one(X,[_,Y|Ys]) :- last_but_one(X,[Y|Ys]).

kth_elem(X,[X|_],1).
kth_elem(X,[_|T],N):-N>1,N1 is N-1,kth_elem(X,T,N1).


pal(X):-reverse(X,X).

split(L,0,[],L).
split([X|Xs],N,[X|Ys],Zs) :- N > 0, N1 is N - 1, split(Xs,N1,Ys,Zs).

appender([],L,L).
appender([X|T1],Y,[X|T2]):-appender(T1,Y,T2).

isPrime(2).
isPrime(3).
isPrime(X):- integer(X),X>2,\+ has_factor(X,2).

has_factor(X,Y):-(X mod Y) =:= 0.
has_factor(X,Y):- Y*Y< X, Y1 is Y+1, has_factor(X,Y1).
