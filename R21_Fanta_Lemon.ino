//Recepie softdrink 1

void FantaandLemon ()
{
  Serial.println(F("Fanta and Lemon"));

  printByte(glempty);
  delay(10);

  digitalWrite(n3, HIGH);
  delay(8000);

  digitalWrite(n3, LOW);
  delay(50);
  
  printByte(glfilling);
  delay(10);

  digitalWrite(n2, HIGH);
  delay(2000);

  digitalWrite(n2, LOW);
  delay(50);

  printByte(glfull);
  delay(1000);

  Serial.println(F("Drink finished succsesful"));
  Serial.println(F("Thank you for trying Virtual Bartender"));
}

