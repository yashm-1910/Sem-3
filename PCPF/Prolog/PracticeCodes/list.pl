rev(List1,List2):-reverser(List1,[],List2).
reverser([],List,List).
reverser([Head|Tail],L1,L2):-reverser(Tail,[Head|L1],L2).

appender([],L,L).
appender([A|List1],List2,[A|List3]):-appender(List1,List2,List3).

len([],0).
len([_|T],N):-length(T,N1),N is N1+1.

mem(X,[X|T]).
mem(X,[_|T]):-mem(X,T).