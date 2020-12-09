factorial(0,1). %factorial of 0 is 1
%factorial of N is factorial of N-1 times N
factorial(X,Y):- X>0,X1 is X-1,factorial(X1,Y1),Y is Y1*X,!.