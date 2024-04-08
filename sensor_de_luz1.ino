int ledVermelho = 10;
int ledAmarelo = 9;
int ledVerde = 8;
int buzina = 7;
int ldr = A0;
int valorldr = 0;

void setup()
{
  pinMode(ledVermelho, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVerde, OUTPUT);
  pinMode(ldr, INPUT);
  pinMode(buzina, OUTPUT);
  
  Serial.begin(2400);
}

void loop()
{
  valorldr = analogRead(ldr);
  Serial.print("Valor lido pelo LDR = ");
  Serial.println(valorldr);
  
  if(valorldr <= 400) { 
    digitalWrite(ledVerde, LOW);
    digitalWrite(ledAmarelo, LOW);
    digitalWrite(ledVermelho, HIGH);
    noTone(buzina);
  } else if (valorldr < 700 && valorldr > 400) { 
    digitalWrite(ledVerde, LOW);
   	digitalWrite(ledVermelho, LOW);
    digitalWrite(ledAmarelo, HIGH);
    tone(buzina,1000, 3000);
    noTone(buzina);
    delay(1500);
  } else { 
    digitalWrite(ledVermelho, LOW);
    digitalWrite(ledAmarelo, LOW);
    digitalWrite(ledVerde, HIGH);
    noTone(buzina);
  }
}