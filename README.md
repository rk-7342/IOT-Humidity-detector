# IOT-Humidity-detector
Components Required:
1.Arduino Pro Mini
2.DHT11 Temperature & Humidity Sensor
3.16x2 LCD Display (I2C or Parallel Connection) (Optional for display)
4.Buzzer or LED (For alerting when humidity crosses a threshold)
5.4.7kΩ Resistor (If needed for sensor pull-up)
6.Power Supply (5V)

Here’s the detailed circuit connection for using the DHT11 sensor with an Arduino Pro Mini.

1️⃣ DHT11 to Arduino Pro Mini Connection
DHT11 Pin	Arduino Pro Mini Pin	Description
VCC	VCC (5V)	Power Supply
DATA	A0 (or any digital pin, e.g., D2)	Sensor data output
GND	GND	Ground
🔹 Pull-up Resistor: Connect a 4.7kΩ resistor between DATA and VCC (5V) for stable readings.

2️⃣ LCD (16x2) I2C Display to Arduino Pro Mini (Optional for Display Output)
LCD I2C Pin	Arduino Pro Mini Pin
SDA	A4 (I2C Data Line)
SCL	A5 (I2C Clock Line)
VCC	5V
GND	GND
3️⃣ Buzzer (Optional for Alerts)
Buzzer Pin	Arduino Pro Mini Pin
Positive (+)	D5 (or any PWM pin)
Negative (-)	GND

DHT11 → Arduino Pro Mini (A0, 5V, GND)
LCD I2C → Arduino Pro Mini (A4, A5, 5V, GND)
Buzzer (Optional) → Arduino Pro Mini (D5, GND)

Working:
The DHT11 sensor reads temperature & humidity.
The data is displayed on Serial Monitor & LCD.
You can add a buzzer alert if humidity goes above a certain limit.
