#include <DHT.h>

#define DHTPIN 2
#define DHTTYPE DHT22  // Use DHT11 if needed

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  float h = dht.readHumidity();
  float t = dht.readTemperature();

  if (isnan(h) || isnan(t)) {
    Serial.println("Sensor error!");
    return;
  }

  Serial.print("Temp: ");
  Serial.print(t);
  Serial.print(" °C  | Humidity: ");
  Serial.print(h);
  Serial.println(" %");

  delay(2000);
}
