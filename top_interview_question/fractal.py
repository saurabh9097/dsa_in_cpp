import turtle

t=turtle.Turtle()
turtle.begin_fill()
turtle.colormode(255)
t.color(250,220,250)
t.penup()
t.setpos(0,-300)
t.pendown()
t.width(3)
t.left(90)
t.speed(300)
def tree(i=200):
    if(i>20):
        if(i<25):
            t.width(10)
            t.color(0,0,0)
        t.forward(i)
        t.left(20)
        tree(i*3/4)
        t.right(40)
        tree(i*3/4)
        t.left(20)
        t.backward(i)
        t.width(3)
        t.color(int(i),int(i),int(i))
tree()
# turtle.end_fill()
turtle.Screen().exitonclick()