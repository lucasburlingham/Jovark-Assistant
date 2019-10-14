' This file is the main engine for running the Jovark-Assistant. Features include: (Please also include Label names for "GoTo" command access.)
' * Date and time (TIME)
' * Greetings (GREETINGS)
' Declare Variables Below (in order of first appearance):
Dim CurrentCommand As String
Dim RandNum As Integer
Private CurrentCommand, GREETINGS, TIM, ENTRY
Print "Hi. Welcome to the Jovark Assistant. Enter your commands below when you see the '>>$J:'." 
Function ENTRY:
' This is always what you should go back to. Use the label "Entry" to go back easily. '
' To do this, use the 'GoTo Entry' command.
Getkeystroke">>$J: ", CurrentCommand
' Sets the avaliable commands for engine processing 
'
' Syntax for organization: 
'If CurrentCommand  = "[Command1]" Or "[Command2]" etc...
'	Goto [Label Name for respective output]
' End

If CurrentCommand = "Quit" Or "Quit" Then

If CurrentCommand  = "Hi" Or "hi" Or "Hello" Or "hello" Or "Sup" Or "Welcome!" Then Goto GREETINGS
End

If CurrentCommand = "What time is it" Or "what time is it" Or "What time is it?" Or "what time is it?" Or "Time" Or "time" Then
Goto Tim

Function GREETINGS:
	' Sets random number generator to try to randomize greetings a bit
Set randNum = Rnd(1, 4)
	If randNum = 1 Then
			Print "Hi"
	End
	If randNum = 2 Then 
			Print "Hello"
	End
	If randNum = 3 Then
			Print "Welcome!"
	End
	If randNum = 4 Then 
			Print "'Sup!"
			Console.WriteLine("Sup!")
	End
Goto ENTRY
Function Tim:
' Code from https://www.thecodingguys.net/tutorials/visualbasic/vb-dates-and-time 
	 Time()
Goto ENTRY
End



' (C) Lucas Burlingham 2019. (CC By 4.0) (See https://creativecommons.org/licenses/by/4.0/ for more information)