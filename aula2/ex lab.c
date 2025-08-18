#define LED_VERDE 2
#define LED_AMARELO 3
#define LED_VERMELHO 4

#define TEMPO_VERDE 12000
#define TEMPO_AMARELO 3000
#define TEMPO_VERMELHO 15000

char estadoAtual = 2;

int main(void)
{
  for (;;)
  {
    switch (estadoAtual)
    {
    case (LED_VERDE):
      digitalWrite(LED_VERDE, HIGH);
      digitalWrite(LED_AMARELO, LOW);
      digitalWrite(LED_VERMELHO, LOW);

      delay(TEMPO_VERDE);
      estadoAtual = LED_AMARELO;
      break;

    case (LED_AMARELO):
      digitalWrite(LED_VERDE, LOW);
      digitalWrite(LED_AMARELO, HIGH);
      digitalWrite(LED_VERMELHO, LOW);

      delay(TEMPO_AMARELO);
      estadoAtual = LED_VERMELHO;
      break;

    case (LED_VERMELHO):
      digitalWrite(LED_VERDE, LOW);
      digitalWrite(LED_AMARELO, LOW);
      digitalWrite(LED_VERMELHO, HIGH);

      delay(TEMPO_VERMELHO);
      estadoAtual = LED_VERDE;
      break;
    }
  }
}