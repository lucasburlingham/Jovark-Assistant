# import various modules for use in the Jovark Assistant.
import os
from datetime import datetime
import math
import stat
import winsound
import webbrowser
import wave
import time
import shutil
import platform
import gzip
import cmd
import random
import time
import getpass
import os

# Displays an opening Message to the user.
openingMessage = 'Welcome to the Jovark Helper Bot. Enter your commands in below:'
# define variables to a 'nil' value or declares them
currentcommand = ''
rand = ''
print(openingMessage)
def start()
    return
currentcommand = input('>>>J$: ')
now = datetime.now()
username = getpass.getuser()
commands = ["time", "date", 'hi']   # these are the commands to be filtered out from the inputed text from 'currentcommand'
# function that filters key words to use as commands
# displays long time format (date and time)
if "time" in currentcommand:
    print ("Current date and time : ", time.strftime('%d/%m/%Y %H:%M:%S'))
# displays short time format (time in H:M:S format)
if "What time is it" in currentcommand:
    print ("Current time:")
    print ("Current time:", time.strftime("%m/%d/%Y, %H:%M:%S"))
    start()

# displays a randomly selected greeting from predefined list of 8 values
if "Hi" in currentcommand:
    for x in range(1):
        rand = random.randint(1, 5)
# 1 Greeting
        if rand == 1:
            print("Hello!")
            start()
# 2 Greeting
        if rand == 2:
            print("Hi!")
            start()
# 3 Greeting
        if rand == 3:
            print("Hello", + 'username')
            start()
# 4 Greeting
        if rand == 4:
            print ("Hi!")
            start()
        else:
            print("Greetings")
            start()
