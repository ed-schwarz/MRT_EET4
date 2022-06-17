void setup () {
//In i t i a l i s i e r t Pin 14 (LED1) a l s o u t p u t .
pinMode (14 , OUTPUT) ;
}
// LED1 b l i n k t im Zw e i s e k u n d e n t a k t
void loop () {
digitalWrite(14 , HIGH ) ; // LED1 an
delay (1000) ; // 1000 ms war ten
digitalWrite(14 , LOW) ; // LED1 aus
delay (1000) ; // 1000 ms war ten
}
