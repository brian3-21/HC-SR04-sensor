int Trig = 10;
int Eco  = 9;
int Led  = 8;

int duracion;
int distancia;

void setup() {
  pinMode(Trig,OUTPUT);
  pinMode(Eco,INPUT);
  pinMode(Led, OUTPUT);
  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
  digitalWrite(Trig, HIGH);
  delay(1);
  digitalWrite(Trig, LOW);
  duracion = pulseIn(Eco, HIGH);
  distancia = duracion / 58.2;
  Serial.println(distancia);
  delay(200);

  if(distancia < 10){
    digitalWrite(Led, HIGH);
  } else {
    digitalWrite(Led, LOW);
  }


  // put your main code here, to run repeatedly:

}
