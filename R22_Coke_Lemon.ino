//Recepie softdrink 2

void CokeandLemon ()
{ 
  Serial.println(F("Coke and Lemon"));

  printByte(glempty);
  delay(10);
  
  digitalWrite(n1, HIGH);
  delay(8000);

  digitalWrite(n1, LOW);
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
