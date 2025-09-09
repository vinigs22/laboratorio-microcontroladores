int main(void) {
    DDRD = DDRD | 0b11100000;
    DDRD = DDRD & ~(0b00011100);
    PORTD = PORTD | 0b00011100;
    PORTD = PORTD & ~(0b11100000);

    for (;;) {
        int a = PIND & 0b00000100;
        int b = PIND & 0b00001000;
        int c = PIND & 0b00010000;

        int potencia = 0;
        int ma = 0, mb = 0, mc = 0;

        if (a == 0) { potencia += 30; ma = 1; }
        if (b == 0) { potencia += 50; mb = 1; }
        if (c == 0) { potencia += 70; mc = 1; }

        if (potencia > 90) {
            if (ma && mb && mc) { potencia -= 30; ma = 0; }
            if (potencia > 90) { potencia -= 50; mb = 0; }
        }

        if (ma) PORTD = PORTD |  (0b00100000); else PORTD = PORTD & ~(0b00100000);
        if (mb) PORTD = PORTD |  (0b01000000); else PORTD = PORTD & ~(0b01000000);
        if (mc) PORTD = PORTD |  (0b10000000); else PORTD = PORTD & ~(0b10000000);
    }
}