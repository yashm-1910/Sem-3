main = do
    -- prompt the user and get their input
    putStrLn "Enter radius "
    radius<-getLine    --radius::String

    let r=read radius :: Double    --r::Double

    -- displaying the output
    putStrLn "Area of circle is:"
    print (3.14*r*r)