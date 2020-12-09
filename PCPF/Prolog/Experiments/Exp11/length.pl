len([],0). %length of list is 0 when list is empty

%Recurse until the end of list and after each invocation returns,add 1 to length 
len([_|T],N):-len(T,N1),N is N1 + 1.