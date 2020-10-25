studies(charlie, csc135).
studies(olivia, csc135).
studies(jack, csc131).
studies(aurther, csc134).
teaches(kirke, csc135).
teaches(collins, csc131).
teaches(collins, csc171).
teaches(juniper, csc134).
professor(X,Y) :- teaches(X, C),studies(Y, C).

/* 
, is used for and 
:- is used for if
professor X teaches Y if teaches(X,course) and studies(Y,course) are true
variables start with capital letters 
eg. studies(charlie,What). What = csc135
*/