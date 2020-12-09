naturalSum(1,1). %when arguement is 1, sum is 1
%sum of N natural numbers is the sum of first N-1 natural numbers plus N
naturalSum(N,M):-N>1,N1 is N-1,naturalSum(N1,M1),M is M1+N,!.
