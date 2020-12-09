
main =do                
    -- prompt the user and get their input
    putStrLn "Enter height:"
    height<-getLine    --height::String

    putStrLn "Enter base:"
    base<-getLine      --base::String

    let h =read height :: Double  --h::Double 
    let b =read base :: Double    --b::Double

    -- displaying the output
    putStrLn "Area of triangle is:"
    print (0.5*h*b)