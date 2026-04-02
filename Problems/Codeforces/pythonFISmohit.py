import numpy as np
def trimf(x, a, b, c):
    return np.maximum(np.minimum((x-a)/(b-a), (c-x)/(c-b)), 0)

temp = 30
low = trimf(temp, 0, 15, 25)
medium = trimf(temp, 20, 30, 40)
high = trimf(temp, 35, 45, 55)

w1, z1 = low, 25
w2, z2 = medium, 55
w3, z3 = high, 85
output = (w1*z1 + w2*z2 + w3*z3) / (w1 + w2 + w3 + 1e-9)

