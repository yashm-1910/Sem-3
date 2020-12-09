type Solution = [Int]
extend :: Solution -> Int -> Maybe Solution
extend b new = go 0 b
    where
    n = length b
    go _ []  =  Just (b ++ [new])
    go i (x:xs)
      | x == new                      = Nothing
      | abs (i - n) == abs (x - new)  = Nothing
      | otherwise                     = go (i+1) xs

fullExtend :: Int -> Solution -> Maybe Solution
fullExtend n partialSolution
  | length partialSolution == n     = Just partialSolution
  | otherwise                       = foldr propose Nothing [1..(n-1)]
  where
    propose _ (Just xs) = Just xs
    propose x Nothing   = extend partialSolution x >>= fullExtend n

nQueens :: Int -> Maybe Solution
nQueens n = fullExtend n []

