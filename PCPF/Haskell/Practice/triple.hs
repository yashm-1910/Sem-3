triple::(Int->Int)->[Int]->[Int]
triple _ [] = []
triple f (x:xs) |0 < x = f x : triple f xs
                |otherwise = x : triple f xs