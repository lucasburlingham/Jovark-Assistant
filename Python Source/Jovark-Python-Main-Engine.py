# This file is the main engine for running the Jovark-Assistant.
#Features include:
# * Date and time time()
# * Greetings greetings()
# Declare Variables Below {in order of first appearance}:
    print("Hi. Welcome to the Jovark Assistant. Enter your command when you see the ">>$J:'.")


def tim()
	Time()
	entry()


def entry()
	CurrentCommand = ""
	CurrentCommand = input(">>$J:")

input(">>$J: ", CurrentCommand)

if CurrentCommand = "Quit" Or "Quit" 
then 
exit()
if CurrentCommand = "Hi" Or "hi" Or "Hello" Or "hello" Or "Sup" Or "Welcome!"
then
greetings()
End

if find("time") in CurrentCommand = True
then
tim()


def greetings():
# Sets random number generator to try to randomize greetings a bit'
randNum = rand(1, 4)
if randNum = 1 Then
print("Hi")
End
if randNum = 2
then
print("Hello")
End
if randNum = 3 Then
print("Welcome!")
end
if randNum = 4
then
print("Sup!")
end
entry()

# (C) Lucas Burlingham 2019. (CC By 4.0)