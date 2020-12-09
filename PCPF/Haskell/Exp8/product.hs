prod::[Int]->Int
prod [ ] = 1
prod (x:xs) =x*prod xs  --Takes an integer list as input and returns the product of all elements in the list
