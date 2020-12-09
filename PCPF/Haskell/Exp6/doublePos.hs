doublePos::[Int]->[Int]
doublePos [] = []
doublePos (x:xs)|0<x=(2*x):doublePos xs
               |otherwise = doublePos xs