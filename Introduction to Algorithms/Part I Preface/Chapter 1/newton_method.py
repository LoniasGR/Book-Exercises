import math

N = int(input("Equals to: "))

def create_estimate (x):
    "We estimate as x/logx to begin the search for a root."
    return x/math.log(x,10)

def f (x):
    "x*lgx function"
    return x * math.log(x, 10)

def f_der (x):
    "lgx + 1/ln10"
    return math.log(x,10) + 1/math.log(10)

estimate = create_estimate(N)
print ("Estimate is ", estimate)
new_estimate = estimate - ((f(estimate) - N)/f_der(estimate))


while (abs(new_estimate - estimate) > 0.1 ):
    estimate = new_estimate
    new_estimate = estimate = estimate - ((f(estimate) - N)/f_der(estimate))

print (new_estimate)
