len :: [Int] -> Int
len [] = 0
len (x:xs) = 1 + len xs  --Takes an integer list as an input and returns it's length