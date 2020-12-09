elem(X,[X|_]). %X is a element of a list with head X 

%X is a member of the list if X is member of tail of the list
elem(X,[_|T]):-elem(X,T),!.