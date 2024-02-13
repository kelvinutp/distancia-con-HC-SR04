from machine import Pin, time_pulse_us
from utime import sleep_us

print("Hello, ESP32!")

echo = Pin(15, Pin.IN)
trig = Pin(2, Pin.OUT)

echo.value(0)
trig.value(0)

while True:
    trig.value(1)
    sleep_us(10)
    trig.value(0)

    t_vuelo=time_pulse_us(echo,1,30000)
    print("tiempo de vuelo: ",t_vuelo)
    
    if t_vuelo>0:
        print(t_vuelo/2/29.1," cm") #distancia en cm

