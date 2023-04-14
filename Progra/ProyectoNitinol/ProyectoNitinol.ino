//left es el nitinol del dorsal izquierdo del lagarto
//right el dorsal del lado derecho
//p1 son las patas superior izquierda e inferior derecha
//p2 son las patas superior derecha e inferior izquierda

int left = 9;
int right = 10;
int p1 = 6;
int p2 = 5;

void setup() {
  pinMode(left, OUTPUT);
  pinMode(right, OUTPUT);
  pinMode(p1, OUTPUT);
  pinMode(p2, OUTPUT);
  pinMode(13, 1);
}

void loop() {

  /*analogWrite(p1, 120);
  delay(500);*/
  analogWrite(left, 120);
  digitalWrite(13, 1);
  delay(2500);
  analogWrite(left, 255);
  analogWrite(p1, 255);
  digitalWrite(13, 0);
  delay(6000);

  /*analogWrite(p2, 120);
  delay(500);*/
  analogWrite(right, 120);
  digitalWrite(13, 1);
  delay(2500);
  analogWrite(right, 255);
  analogWrite(p2, 255);
  digitalWrite(13, 0);
  delay(6000);

}