#define POTPIN0
#define POTPIN1 2
#define POTPIN2 3
#define POTPIN3 4
#define POTPIN4 5
#define POTPIN5 6
#define POTPIN6 7
const int Threshold=1000;
int val=0;

void setup() {
  Serial begin(9600);       //kecepatan dalam satuan detik
  pinMode(LEDPIN1,OUTPUT);  //deklarasi lampu sebagai output
  pinMode(LEDPIN2,OUTPUT);
  pinMode(LEDPIN3,OUTPUT);
  pinMode(LEDPIN4,OUTPUT);
  pinMode(LEDPIN5,OUTPUT);
  pinMode(LEDPIN6,OUTPUT);
   
}

void loop() {
  val = analogRead(POTPIN);
Serial.println(val, DEC);              // mencetak data pada serial monitor
delay(100);                                 // waktu tunggu
if (val >Threshold){                       // kecerahan cahaya untuk menghidupkan lampu
digitalWrite(LEDPIN1, HIGH);    // hidupin lampu
delay(100);
digitalWrite(LEDPIN2, HIGH);
delay(150);
digitalWrite(LEDPIN3, HIGH);
delay(200);
digitalWrite(LEDPIN4, HIGH);
delay(250);
digitalWrite(LEDPIN5, HIGH);
delay(250);
digitalWrite(LEDPIN6, HIGH);
delay(300);
digitalWrite(LEDPIN1, LOW);     //matikan lampu
delay(100);
digitalWrite(LEDPIN2, LOW);
delay(150);
digitalWrite(LEDPIN3, LOW);
delay(200);
digitalWrite(LEDPIN4, LOW);
delay(250);
digitalWrite(LEDPIN5, LOW);
delay(250);
digitalWrite(LEDPIN6, LOW);
delay(300);
}
}
