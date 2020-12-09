import System.Environment
import Data.List
nqueens :: Int -> [[Int]]
nqueens n = [qs | qs <- perm [1..n], dontFight qs]
    where
        dontFight :: [Int] -> Bool
        dontFight qs = and [ abs ((qs!!j) - (qs!!i)) /= j - i
                           | i <- [0..n-2],
                             j <- [i+1..n-1]
                           ]
        perm :: Eq a => [a] -> [[a]]
        perm [] = [[]]
        perm xs = [x:xs' | x <- xs, xs' <- perm (delete x xs)]

nqueens' :: Int -> [[Int]]
nqueens' n = solve n []
    where
	solve :: Int -> [Int] -> [[Int]]
        solve 0 qs = [qs]
        solve i qs = concat [ solve (i-1) (q:qs)
                            | q <- positions,
                              dontFight q qs
                            ]
        positions = [1..n]
dontFight :: Int -> [Int] -> Bool
dontFight q qs = and [ (dq /= 0) && (dq /= i) && (dq /= -i)
                     | (i,q') <- zip [1..] qs,
                       let dq = q' - q
                     ]
