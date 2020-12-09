appender([],L,L). %when List1 is empty List3 is equal to List2

% if List1 and List3 are non-empty lists, they both have the same head
appender([H|List1],List2,[H|List3]):-appender(List1,List2,List3).