int main(void) {
    DDRD = DDRD | 0b11000000;    
    DDRD = DDRD & ~(0b00011100); 
    PORTD = PORTD | 0b00011100;  
    PORTD = PORTD & ~(0b11000000);

    for (;;) {
        int liga    = PIND & 0b00000100;
        int desliga = PIND & 0b00001000;
        int s1      = PIND & 0b00010000;

        if (s1 == 0) {
            PORTD = PORTD & ~(0b01000000);
            PORTD = PORTD |  (0b10000000);
        } 
        else if (liga == 0) {
            PORTD = PORTD |  (0b01000000);
            PORTD = PORTD & ~(0b10000000);
        } 
        else if (desliga == 0) {
            PORTD = PORTD & ~(0b01000000);
        }
    }
}