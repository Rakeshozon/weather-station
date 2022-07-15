
#include<DHT.h>

DHT dht(7,DHT11);

void setup() {
 Serial.begin(9600);
 Serial.println("the temp and humidity (DHT11)");// put your setup code here, to run once:
dht.begin();

}

void loop() {
float humidity = dht.readHumidity();
float temperature = dht.readTemperature();

if(isnan(humidity)||isnan(temperature)){
  Serial.println("Error Reading ");
  return;
}
  float heatIndex = dht.computeHeatIndex(temperature,humidity,false);

 Serial.print("Humidity :");
 Serial.print(humidity);
 Serial.print("Temperature   :");
 Serial.print(temperature);
 Serial.print("Heatindex  :");
 Serial.println(heatIndex);
 delay(2000);
  
  
  }
