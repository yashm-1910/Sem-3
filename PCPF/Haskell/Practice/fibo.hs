fibo::Int->Int

fibo 0 = 0
fibo 1 =1 
fibo x = fibo(x-1) + fibo(x-2)

fib::Int->[Int]

fib n = [fibo x| x <- [0..n]]