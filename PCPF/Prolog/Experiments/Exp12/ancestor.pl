mother(mary,mia). %mary is mother of mia
mother(mia,jaden). %mia is mother of jaden

father(frank,mia). %frank is father of mia
father(mark,jaden). %mark is father of jaden

parent(X,Y):-mother(X,Y). %X is parent of Y  if X is mother of Y
parent(X,Y):-father(X,Y). %X is parent of Y  if X is father of Y

ancestor(X,Y):-parent(X,Y). %X is ancestor of Y if X is parent of Y
%X is ancestor of Y if X is parent of Z and Z is ancestor of Y
ancestor(X,Y):-parent(X,Z),ancestor(Z,Y). 