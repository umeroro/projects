import turtle #for visuals
import random #statistical analysis
import time # for time duration, pausing etc

#making the screen...........

screen = turtle.Screen()
screen.title("Snake Game") #title
screen.setup(width=700, height=700) #screen size
screen.tracer(0) # control the animation speed of drawings on the screen like movements are displayed immediately on the screen
screen.bgcolor("#1d1d1d")

#creating the borders...........

turtle.speed(5)
turtle.pensize(4) #width of the border
turtle.penup() #move freely across the drawing surface without leaving any mark
turtle.goto(-310,250) #take the border to left side(-310) (250) up sidethat why its show in center
turtle.pendown() #leaves a trail behind as it moves across the drawing surface
turtle.color("red")
turtle.forward(600) #facing by the specified distance
turtle.right(90) #rotate without changing its position
turtle.forward(500)
turtle.right(90)
turtle.forward(600)
turtle.right(90)
turtle.forward(500)
turtle.penup()
turtle.hideturtle() #hide the turtle cursor or icon etc

#creating the score.......

score = 0; #variables intial value = 0
delay = 0.1

#creating the snake..........

snake = turtle.Turtle() #module
snake.speed()
snake.shape("square")
snake.color("green")
snake.penup()
snake.goto(0, 0) #snake start from the center of the screen
snake.direction = 'stop'

# creating the food

food = turtle.Turtle()
food.speed(0)
food.shape("square")
food.color("white")
food.penup()
food.goto(30, 30)

old_food = [] # store old food

# creating scoring display system

scoring = turtle.Turtle()
scoring.speed(0)
scoring.color("white")
scoring.penup()
scoring.hideturtle()
scoring.goto(0, 300)
scoring.write("Score: ", align="center", font=("Courier", 24, "bold"))

# how to move

def snake_move_up():
  if snake.direction != "down":
    snake.direction = "up"

def snake_move_down():
  if snake.direction != "up":
    snake.direction = "down"

def snake_move_left():
  if snake.direction != "right":
    snake.direction = "left"

def snake_move_right():
  if snake.direction != "left":
    snake.direction = "right"

def snake_move():
  if snake.direction == "up":
    y = snake.ycor() #retive current vertical position
    snake.sety(y + 20)
  if snake.direction == "down":
    y = snake.ycor() #retive current vertical position
    snake.sety(y - 20)
  if snake.direction == "left":
    x = snake.xcor() #retive current vertical position
    snake.setx(x - 20)
  if snake.direction == "right":
    x = snake.xcor() #retive current vertical position
    snake.setx(x + 20)

# defining the keyboard binding

screen.listen()
screen.onkeypress(snake_move_up, "Up")
screen.onkeypress(snake_move_down, "Down")
screen.onkeypress(snake_move_left, "Left")
screen.onkeypress(snake_move_right, "Right")

# creating main loop or main functionality

while True:
  screen.update()


  #snake and food colision
  if snake.distance(food) < 20:
    x = random.randint(-290, 270)
    y = random.randint(-240,240)
    #updaing score and food
    food.goto(x, y)
    scoring.clear()
    score += 1
    scoring.write("Score: {}".format(score), align="center", font=("Courier", 24, "bold"))
    delay -=0.001

    #creating new foods

    new_food = turtle.Turtle()
    new_food.speed(0)
    new_food.shape("square")
    new_food.color("red")
    new_food.penup()
    old_food.append(new_food)

  #adding ball to snake

  for index in range(len(old_food) -1, 0, -1):
    a = old_food[index -1].xcor()
    b = old_food[index -1].ycor()

    old_food[index].goto(a, b)

  if len(old_food) > 0:
    a = snake.xcor()
    b = snake.ycor()
    old_food[0].goto(a, b)
  snake_move()

  #snake & border colision

  if snake.xcor() > 280 or snake.xcor() < -300 or snake.ycor() > 240 or snake.ycor() < -240:
    time.sleep(1)
    screen.clear()
    screen.bgcolor("turquoise")
    scoring.goto(0, 0)
    scoring.write("Game Over \n Your score is {}".format(score), align="center", font=("Courier", 30, "bold"))


  # snake colision

  for ffoodd in old_food:
    if ffoodd.distance(snake) < 20:
      time.sleep(1)
      screen.clear()
      screen.bgcolor("turquuoise")
      scoring.goto(0, 0)
      scoring.write("Game Over \n Your score is {score}".format(score), align="center", font=("Courier", 30, "bold"))


  time.sleep(delay)


turtle.Terminator()