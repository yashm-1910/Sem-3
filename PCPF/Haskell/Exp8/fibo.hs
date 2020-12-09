fib::Integer->Integer    
fib 0=0
fib 1=1
fib n=fib (n-1)+fib (n-2)   --takes an integer n as input and returns nth fibonacci number

fibo::Integer->[Integer]
fibo n=[fib x|x<-[0..n]]    --Takes an integer n as input and returns a list of fibonacci numbers upto n
