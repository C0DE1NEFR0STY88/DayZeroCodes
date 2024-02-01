#https://docs.python.org/3/library/turtle.html#starting-a-turtle-environment

from turtle import * #for fd commands etc
import turtle #for turtle.()s

def square():
    forward(100) #can be fd
    right(90) #can be rt
    fd(100)
    rt(90)
    fd(100)
    rt(90)
    fd(100)

turtle.Screen().bgcolor("red")
#https://www.geeksforgeeks.org/turtle-screen-bgcolor-function-in-python/
#https://www.geeksforgeeks.org/python-turtle-screen-setup-method/

square()

turtle.Screen().exitonclick()
#https://stackoverflow.com/questions/6234798/turtle-graphics-how-do-i-control-when-the-window-closes
