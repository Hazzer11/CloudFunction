int led=D1;

void setup() {
    pinMode(led,OUTPUT);
    Particle.subscribe("Deakin_RIOT_SIT210_Photon_Buddy",wave ,ALL_DEVICES);
}

void loop() {

}

void wave (const char *eventName, const char *data){
    digitalWrite(led, HIGH);
    delay(300);
    digitalWrite(led, LOW);
    delay(300);
    digitalWrite(led, HIGH);
    delay(300);
    digitalWrite(led, LOW);
    delay(300);
    digitalWrite(led, HIGH);
    delay(300);
    digitalWrite(led, LOW);
    delay(300);
    
}
