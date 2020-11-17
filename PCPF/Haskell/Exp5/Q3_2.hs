xor::Bool->Bool->Bool
xor x y|x==True && y ==True = False
       |x==False && y ==False = False
       |otherwise = True

xnor::Bool->Bool->Bool
xnor x y |x==True && y ==True = True
       |x==False && y ==False = True
       |otherwise = False
