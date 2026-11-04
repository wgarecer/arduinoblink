int led = 12; // Контакт 12 подключен к светодиоду через резистор
void setup() {
pinMode(led, OUTPUT); // Инициализация цифрового вывода как
}
void loop() {
digitalWrite(led, HIGH); // Включить светодиод
delay(1000); // Подождать секунду
digitalWrite(led, LOW); // Выключить светодиод
delay(100); // Подождать секунду
}
