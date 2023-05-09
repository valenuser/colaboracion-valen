int led = 15


void setup() {
	pinMode(led, OUTPUT);

}


void loop() {

	digitalWriter(led, HIGH);
	delay(1000);
	digitalWriter(led, LOW);
	delay(1000);

}