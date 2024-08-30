from turtle import showturtle


n = 11
f = 1.234567
s = "computer"

print("my number is {:d}".format(n))
print("my number is {:b}".format(n))

a = 17
print("my age is {:b}".format(a))

#There are many format types such as :-

# e - exponents
# b - binary (base 2)
# o - octal (base 8)
# d - decimal (base 10)
# x - hexadecimal (base 16)
# f - floats ( decimal NO.)
# strings (defaults if none is specified )

#  FLOATING(f) Format :---
print(" my age is {:f}".format(a))

# print first 3 digits 
print("{:.3f}".format(a))

 # 11 is the no. of gaps 
print("{:11.3f}".format(a))


# PRINTING them all together
print("{0} {1} {2} {3}".format(n,f,s,a))

# to print sentence (in understandble way)

print("{name} own(s) {amount} of {object}".format
( name = "SHWET",
amount = "2",
object = " CAR"))
















