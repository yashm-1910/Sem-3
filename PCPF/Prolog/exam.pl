vegetarian(jose).
vegetarian(james).
vegetable(potato).
vegetable(brinjal,carrot).
nonvegetarian(egg,fish).
likes(jose,X):-vegetable(X).
loves(Who,fish):-nonvegetarian(Who).