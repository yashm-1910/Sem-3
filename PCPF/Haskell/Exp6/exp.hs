--3. Write a Haskell snippet to filter the elements from the list whose square root is greater than  7. 
expt::[Int]->[Int]
expt x = filter(\x->sqrt(fromIntegral x)>=7) x

expt1::[Int]->[Int]
expt1 [] = []
expt1 (x:xs)|7<=sqrt(fromIntegral x) =x : expt1 xs
            |otherwise = expt1 xs

