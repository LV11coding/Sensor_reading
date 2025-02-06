# Sensor_reading
Sensor reading are sent to the Arduino and then soted in an SQL databse. <br/>

# Required components:
-Arduino Uno <br/>
-DHT11 (temperature and humidity sensor) <br/>
-SSD1306 oled screen with i2c communication protocol <br/>
-Jumper wires <br/>

# How it works:
-DHT11 sensor read active temperature and humidity. <br/>
-This data is sent to an Arduino, which displays it on the oled display. <br/>
-Using node.js, this information can also be shown a website.<br/>
-All the data is additionaly stored on an SQL database (public or local). <br/>

# Code versions:
-v1.0 - Reads data from sensor and displays it on the oled display with some additional icons. <br/>
--animation_code - Seperate program that creates a small animation for the display (it will be added to the main code later). <br/>

### This is a work in progress.
