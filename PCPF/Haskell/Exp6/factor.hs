factor::Int->[Int]
factor n = [x | x <- [1..n], n `mod`x == 0, x /= 1, x /= n ]
