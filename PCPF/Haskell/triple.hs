triple::[Int]->[Int]
triple [] = []
triple (x:xs)|0<x=(3*x):triple xs
             |otherwise = triple xs