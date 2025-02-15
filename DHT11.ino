#include <DHT.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// Define DHT sensor type and pin
#define DHTPIN A0
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);
LiquidCrystal_I2C lcd(0x27, 16, 2); // Adjust 0x27 if needed

void setup() {
    Serial.begin(9600);
    dht.begin();
    lcd.begin(16, 2);
    lcd.backlight();
    lcd.setCursor(0, 0);
    lcd.print("Humidity Monitor");
    delay(2000);
}

void loop() {
    float h = dht.readHumidity();
    float t = dht.readTemperature();

    if (isnan(h) || isnan(t)) {
        Serial.println("Failed to read DHT11!");
        return;
    }

    Serial.print("Humidity: ");
    Serial.print(h);
    Serial.print("% Temperature: ");
    Serial.print(t);
    Serial.println("°C");

    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Temp: "); 
    lcd.print(t); 
    lcd.print(" C");
    lcd.setCursor(0, 1);
    lcd.print("Humidity: ");
    lcd.print(h); 
    lcd.print("%");

    delay(2000);
}
