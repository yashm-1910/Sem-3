func::Float->Float->String
func x y
    | sum < 10 ="Sum is less than 10"
    | sum >= 10 ="Sum is greater than equal to 10"
    where sum = x+y