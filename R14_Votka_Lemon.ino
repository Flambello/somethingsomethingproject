//Recepie coktail 4

void VotkaandLemon ()
{ 
  Serial.println(F("Votka and Lemon"));

  printByte(glempty);
  delay(10);

  digitalWrite(n2, HIGH);
  delay(2000);
  
  digitalWrite(n2, LOW);
  delay(50);

  printByte(glfilling);
  delay(10);
  
  digitalWrite(m2, HIGH);
  delay(10000);
  
  digitalWrite(m2, LOW);
  delay(50);  

  printByte(glfull);
  delay(1000);

  Serial.println(F("Drink finished succsesful"));
  Serial.println(F("Thank you for trying Virtual Bartender"));
  
}
