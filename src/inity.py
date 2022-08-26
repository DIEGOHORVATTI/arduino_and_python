#!/usr/bin/python3

import serial
from rich.panel import Panel
from rich.console import Group
from rich.console import Console
from rich.panel import Panel

port = '/dev/ttyACM0'
speed = 9600
conect = serial.Serial(port, speed)

console = Console()
panel_group = Group(
  Panel("", style="green"),
)

console.print(Panel(panel_group))

cache = 'x'
acumulador = 0
while True:
  
  teclado = input(" >> ")
  
  match teclado:
    case '':        
      conect.write(b'')
      exit()

  cache = teclado

conect.close()
