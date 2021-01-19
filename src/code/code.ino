void  setup() { //Executado cada vez que o Arduino se inicializa;
	pinMode(13, OUTPUT); // Inicializa o pino 13 como saída.
}

void  loop() { // Função loop() executada interruptamente;
	digitalWrite(13, HIGH); // Acende o LED (HIGH nível de tensão liberado);
	delay(1000); // Espera um segundo;
	digitalWrite(13, LOW); // Apaga o LED (LOW nível de tensão interrompido);
	delay(1000); // Espera um segundo.
}