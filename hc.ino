int Trig = 10;
int Eco  = 9;
int Led  = 8;
int Buzz = 7;

int duracion;
int distancia;


void buzzSong (int dela){
  digitalWrite(Buzz, HIGH);
  delay(dela);
  digitalWrite(Buzz, LOW);
}

void setup() {
  pinMode(Trig,OUTPUT);
  pinMode(Eco,INPUT);
  pinMode(Led, OUTPUT);
  pinMode(Buzz, OUTPUT);
  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
  digitalWrite(Trig, HIGH);
  delay(1);
  digitalWrite(Trig, LOW);
  duracion = pulseIn(Eco, HIGH);
  distancia = duracion / 58.2;
  Serial.println(distancia );
  delay(200);

  if(distancia < 10){
    digitalWrite(Led, HIGH);
    buzzSong(50);
  } else {
    digitalWrite(Led, LOW);
    
  }


  if(distancia < 40){
    buzzSong(400);
  }


  // put your main code here, to run repeatedly:

}
