int einT = 0; //boolean fur Taster
int einS = 0; //boolean fur Spannungsnulldurchgangs
void setup () {
//In i t i a l i s i e r t Pin 14 (LED1) a l s o u t p u t .
    pinMode(14, OUTPUT); //LED1
    pinMode(0, INPUT); //Ein
    pinMode(1, INPUT); //Aus
    pinMode(6, INPUT); //Spannungsnulldurchgangs
    pinMode(3, OUTPUT); //Triac
}
// LED1 b l i n k t im Zw e i s e k u n d e n t a k t
void loop () {
    if(digitalRead(0) == HIGH){ //Taster 1
        einT = 1;
    }
    if(digitalRead(1) == HIGH){ //Taster 2
        einT = 0;
    }
    if(digitalRead(16) == HIGH){
        if(einT == 1){
            digitalWrite(14, HIGH ); // LED1 an
        }
        else{
            digitalWrite(14, LOW); // LED1 aus
        }
        delay(0.00001);
        digitalWrite(3, HIGH); //Triac ein
    }
    
    
}
