//Recepie simple 5

void JustFanta ()
{ 
  Serial.println(F("Just Fanta"));

  printByte(glempty);
  delay(10);
  
  digitalWrite(n3, HIGH);
  delay(5000);

  printByte(glfilling);
  delay(5000);

  digitalWrite(n3, LOW);
  delay(50);

  printByte(glfull);
  delay(1000);  

  Serial.println(F("Drink finished succsesful"));
  Serial.println(F("Thank you for trying Virtual Bartender"));
  
  
}
