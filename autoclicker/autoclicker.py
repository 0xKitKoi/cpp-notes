#from directKeys import click
import keyboard
import time
import win32api, win32con
import random

#def click():
#    win32api.mouse_event(win32con.MOUSEEVENTF_LEFTDOWN, 0,0)
#    time.sleep(0.0001)
#    win32api.mouse_event(win32con.MOUSEEVENTF_LEFTUP,0,0)

while (keyboard.is_pressed('q') == False):
    win32api.mouse_event(win32con.MOUSEEVENTF_LEFTDOWN, 0,0)
    time.sleep(random.random())
    win32api.mouse_event(win32con.MOUSEEVENTF_LEFTUP,0,0)
