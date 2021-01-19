## 3.1 Código

<p align="center">
  <img src="https://github.com/GiganteDev/Arduino/blob/main/.github/img-arduino-logo.png" width="120">
</p>

```cpp
void  setup() { // Executado cada vez que o Arduino se inicializa;
	pinMode(13, OUTPUT); // Inicializa o pino 13 como saída.
}

void  loop() { // Função loop() executada interruptamente;
	digitalWrite(13, HIGH); // Acende o LED (HIGH nível de tensão liberado);
	delay(1000); // Espera um segundo;
	digitalWrite(13, LOW); // Apaga o LED (LOW nível de tensão interrompido);
	delay(1000); // Espera um segundo.
}
```

Em uma rápida interpretação, este código fará com que o LED entre em estado HIGH, estado o qual libera tensão para o pino e consecutivamente ascende o LED, espere 1 segundo (1000 milissegundo) e muda o estado do pino para LOW onde o envio de tensão é interrompido e o LED se apaga, espera mais 1 segundo e através da função loop reinicia o sistema de forma interrupta.

---

<a  href="https://github.com/GiganteDev/Arduino/"><img  src="https://img.shields.io/badge/%E2%9E%94%20-Projetos-fff"/></a>