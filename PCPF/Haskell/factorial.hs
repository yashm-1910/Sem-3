factorial1::Int->Int
factorial1 n|n==0=1
factorial1 n|n/=0=n*factorial1(n-1)
main = do print(factorial1 12)