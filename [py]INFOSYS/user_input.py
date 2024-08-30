from codecs import latin_1_decode


first_name = str(input("please enter your name:- "))
middle_name = str(input("please enter your middle name:- "))
last_name = str(input("please enter your last name:-  "))



first_name = first_name.upper()
middle_name = middle_name.upper()
last_name = last_name.upper()

name_format = "{first} {middle:.1s} {last}"
print(name_format.format(fisrt=first_name,middle=middle_name,last=last_name))










