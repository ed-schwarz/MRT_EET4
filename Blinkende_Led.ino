int einT = 0; //boolean fur Taster
volatile byte einS = LOW; //boolean fur Spannungsnulldurchgangs
double winkel = 0; 
double Period;
void setup () {
//Initialisiert Pin 14 (LED1) als output.
    pinMode(14, OUTPUT); //LED1
    pinMode(0, INPUT); //Ein
    pinMode(1, INPUT); //Aus
    pinMode(6, INPUT); //Spannungsnulldurchgangs
    pinMode(3, OUTPUT); //Triac
    pinMode(9, INPUT); //Interrupt
    attachInterrupt(digitalPinToInterrupt(9), nulldurchgang, CHANGE);
}
// LED1 blinkt im Zweisekundentakt
void loop () {
    if(digitalRead(0) == HIGH){ //Taster 1
        einT = 1;
        if(winkel*0.00001 < Period){
            winkel += 1;
        }
    }
    if(digitalRead(1) == HIGH){ //Taster 2
        einT = 0;
        if(winkel*0.00001 > -Period){
            winkel -= 1;
        }
    }
    if(einS == HIGH){
        digitalWrite(14, LOW); // LED1 aus
        delayMicroseconds(1*winkel);
        digitalWrite(3, HIGH); //Triac ein
    }
    else{
        digitalWrite(3, LOW); //Triac aus
    }
}
void nulldurchgang(){
    einS = !einS;
}
