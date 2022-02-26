// Inicia variáveis de tempo
unsigned long tempoled1 = millis();
unsigned long tempoled2 = millis();

void setup() {
  // Define os pinos dos leds como saída
  pinMode(2, OUTPUT);
  pinMode(4, OUTPUT);
}

// Looping infinito
void loop() {
  led1();
  led2();
}

void led1(){
     if((millis() - tempoled1) < 400){ // Verifica se ha passou de 400 milisegundos
  digitalWrite(2, HIGH);   // Acende o led da porta 2
   }else{                  
  digitalWrite(2, LOW);    // Apaga o led da porta 2
    }
   if ((millis() - tempoled1) > 600){
    tempoled1 = millis();
    }
  }

void led2(){
     if((millis() - tempoled2) < 500){ // Verifica se ha passou de 500 milisegundos
  digitalWrite(4, HIGH);   // Acende o led da porta 4
   }else{                  
  digitalWrite(4, LOW);    // Apaga o led da porta 4
    }
   if ((millis() - tempoled2) > 800){
    tempoled2 = millis();
    }
  }
