int led = 4;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int a = digitalRead(led);
  if(a== 1){
    Serial.println("ada lubang, belok kanan");
  }else{
    Serial.println("no lubang, jalan terus");
  }
  
  
}
