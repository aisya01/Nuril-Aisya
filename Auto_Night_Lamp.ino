int ldr = A0;  // read the sensor output
int rel = 3;  // read the sensor
int val = 900; // read the value

void setup() {  // put your setup code here , to run once :

pinMode(A0,INPUT);  // digital pin A0 as input
pinMode(3,OUTPUT);  // digital pin 3 as output
Serial.begin(9600); // start the Serial Port at 9600  

}

void loop() {  // put your main code here , to repeatedly :

  int a = analogRead(A0);  // Read the analog sensor , a = light intensity 
  Serial.println(a);  // trouble shooting
  if(a>900){  //select either above 900 or below 900

    digitalWrite(3,HIGH);  // turn on

  }

  else {

	digitalWrite(3,LOW);  //turn off
  }

}