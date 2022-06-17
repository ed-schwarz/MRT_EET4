int ein = 0;
void setup () {
//In i t i a l i s i e r t Pin 14 (LED1) a l s o u t p u t .
    pinMode(14, OUTPUT);
    pinMode(15, INPUT); //Ein
    pinMode(16, INPUT); //Aus
}
// LED1 b l i n k t im Zw e i s e k u n d e n t a k t
void loop () {
    if(digitalRead(15) == HIGH){
        ein = 1;
    }
    if(digitalRead(16) == HIGH){
        ein = 0;
    }
    if(ein == 1){
        digitalWrite(14, HIGH ); // LED1 an
        delay(1000); // 1000 ms war ten
    }
    else{
        digitalWrite(14, LOW); // LED1 aus
        delay(1000); // 1000 ms war ten
    }
    
}
