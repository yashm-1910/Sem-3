main::IO()
--getLine:: IO String
main = do
    putStrLn "Hello, Enter your name"
    name <- getLine
    putStrLn ("Nice to meet you" ++ name)