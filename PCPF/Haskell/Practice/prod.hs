prod::[Int]->Int
prod [] = 1
prod (x:xs) = x*prod xs