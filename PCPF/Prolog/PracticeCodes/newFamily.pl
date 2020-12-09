
mother(louise,caroline).
mother(caroline,janet).

father(francis,caroline).
father(mark,janet).

parent(X,Y):-mother(X,Y).
parent(X,Y):-father(X,Y).

ancestor(X,Y):-parent(X,Y).
ancestor(X,Y):-parent(X,Z),ancestor(Z,Y).