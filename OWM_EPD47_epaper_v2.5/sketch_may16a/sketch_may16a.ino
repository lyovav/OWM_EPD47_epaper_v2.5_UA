void setup() {
  Serial.begin(9600);
  while (!Serial) {
    // Очікування підключення серійного порту
  }
}

void loop() {
  // Виведення символу градуса Цельсія
  Serial.print("Temperature: 25");
  Serial.write(0xB0); // Код символу градуса Цельсія
  Serial.println("C");

  delay(1000); // Затримка 1 секунда між виведеннями
}
