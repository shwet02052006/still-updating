prefix = "python is an "
suffix = "awesome language"



astr = prefix + suffix 
print(astr)

astr = astr.replace("language", "snake")
print (astr)
astr = astr * 2
astr = astr.replace("snake.","language",1)
print(astr)


#count func.
print(astr.count("an"))