/* Animals Database */ 
/* Devise and test goals to find (a) all the mammals, (b) all the carnivores that are
mammals, (c) all the mammals with stripes, (d) whether there is a reptile that has a
mane.*/

animal(mammal,tiger,carnivore,stripes).
animal(mammal,hyena,carnivore,ugly).
animal(mammal,lion,carnivore,mane).
animal(mammal,zebra,herbivore,stripes).
animal(bird,eagle,carnivore,large).
animal(bird,sparrow,scavenger,small).
animal(reptile,snake,carnivore,long).
animal(reptile,lizard,scavenger,small).

isMammal(X):-animal(mammal,X,Y,Z).
isMammalCarnivore(X):-animal(mammal,X,carnivore,Z).
isMammalStripes(X):-animal(mammal,X,Y,stripes).
isReptileMane(X):-animal(reptile,X,Y,mane).
