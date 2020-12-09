rev :: [a] -> [a] 
rev []  = [] 
rev (x:xs) = rev xs ++ [x]  --Takes any list and reverses it