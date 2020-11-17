dog(rottweiler).       
cat(siamese).         
large(rottweiler). 
large(siamese). 
large_animal(A) :- dog(A),large(A).  
large_animal(C) :- cat(C),large(C).