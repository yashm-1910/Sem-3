xor1::Bool->Bool->Bool
xor1 x y|x==True && y ==True = False
       |x==False && y ==False = False
       |otherwise = True
main = do print(xor1 True False)


