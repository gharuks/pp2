#Задача №3446. Ряд Лейбница. Тема 1
#1 3 5 7 9 11 13 15 17 19
n=1
x=0
a=1
while n<20:
    x+=4/n*a
    a*=-1
    n+=2
print(x)        

