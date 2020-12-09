naturalNum(0). %when arguement is 0 do nothing (terminate recursion)
%loop to N
naturalNum(N):-N>0,N1 is N-1,naturalNum(N1),write(N),nl,!.