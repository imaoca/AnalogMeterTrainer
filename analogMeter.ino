void setup() {
    pinMode(6,OUTPUT);
}
void loop(){
    for (int i=0;i<256;i++){
      analogWrite(6, i);
      delay(10);
    }
}
