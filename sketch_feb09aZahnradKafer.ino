#include <Servo.h>

Servo myservo1; // horizontale Drehung
Servo myservo2; // vertikale Drehung  Servo links
Servo myservo4; // vertikale Drehung  Servo rechts
Servo myservo3; // horizontale Drehung
Servo myservo6; // vertikale Drehung Servo links
Servo myservo8; // vertikale Drehung Servo rechts
Servo myservo5; // horizontale Drehung
Servo myservo10; // vertikale Drehung  Servo links
Servo myservo12; // vertikale Drehung  Servo rechts

int pos = 45; // 45=Beine tief; 0=Beine hoch

int a = 4; // Geradeaus
int b = 3; // Linksdrehung
int c = 4; // wieder geradeaus
int d = 3; // Rechtsdrehung
int e = 4; // wieder geradeaus


void setup() {

myservo1.attach(1);
myservo2.attach(2);
myservo4.attach(4);
myservo3.attach(3);
myservo6.attach(6);
myservo8.attach(8);
myservo5.attach(5);  
myservo10.attach(10);   
myservo12.attach(12);    

}

void loop() 
{
{ while (a>0) //Geradeaus

{ a--;

  for (pos = 45; pos >=10; pos -= 1) { 

myservo4.write(45 - pos); //    Servo4 rechts hebt Bein
myservo2.write(pos);      //    Servo2 links senkt Bein
myservo8.write(45 - pos); //    Servo8 senkt Bein
myservo6.write(pos);      //    Servo6 hebt Bein
myservo12.write(45 - pos); //    Servo4/12 rechts hebt Bein
myservo10.write(pos);      //    Servo2/10 links senkt Bein

   delay(10); 
}

  delay(500);

 for (pos = 45; pos >= 0; pos -= 1) { 
 myservo1.write(pos);       // Servo1 dreht nach rechts
 myservo3.write(45 - pos);  // Servo3 dreht nach links. Zahnräder mit 6&8 nach rechts
 myservo5.write(pos);   // Servo5 dreht nach rechts
 delay(10);
 
}
 delay(500);

for (pos = 10; pos <=45; pos += 1) { 

myservo4.write(45 - pos); //  Servo4 rechts senkt Bein
myservo2.write(pos);      //  Servo2 links hebt Bein
myservo8.write(45 - pos); //  Servo8 hebt Bein
myservo6.write(pos);      //  Servo6 senkt Bein
myservo12.write(45 - pos); //  Servo4/12 rechts senkt Bein
myservo10.write(pos);      //  Servo2/10 links hebt Bein

   delay(10); 
 }

 delay(500);
 
 for (pos = 0; pos <=45; pos += 1) {  
  
 myservo1.write(pos);       // Servo1 dreht nach links zurück
 myservo3.write(45 - pos);  // Servo3 dreht nach rechts zurück.Zahnräder mit 6&8 nach links
 myservo5.write(pos);   
 delay(10);  
}

  delay(500);

  }    }  

 { while (b>0)  // Linksdrehung

{ b--;
  
  for (pos = 45; pos >=0; pos -= 1) {   
myservo6.write(0); // Servos 6 & 8: Beine hoch
myservo8.write(0);
myservo4.write(45 - pos); //    Servo4,2,10,12 senken  Beine
myservo2.write(45 - pos);      
myservo10.write(45 - pos);  
myservo12.write(45 - pos); 
   delay(5); 
}
delay(500);
 for (pos = 45; pos >= 0; pos -= 1) { 
 myservo1.write(pos); // Servo1 dreht nach rechts
 myservo3.write(0);   // Servo3 still
 myservo5.write(pos);  
 delay(5);
 }
 
 delay(500);
 for (pos = 0; pos <=45; pos += 1) {  
myservo6.write(0); // Servos 6 & 8: Beine hoch
myservo8.write(0);
myservo4.write(45 - pos);  //Servo4,2,10,12 heben  Beine
myservo2.write(45 - pos);       
myservo10.write(45 - pos);  
myservo12.write(45 - pos); 
   delay(5); 
 }
 
 delay(500);
 for (pos = 0; pos <=45; pos += 1) {  
 myservo1.write(pos);       // Servo1 dreht nach links zurück
 myservo3.write(0);   //Servo3 still
 myservo5.write(pos); 
  delay(5);  
}
  delay(500);
  
}   } 

{ while (c>0) // wieder geradeaus

{ c--;

  for (pos = 45; pos >=10; pos -= 1) { 

myservo4.write(45 - pos); //    Servo4 rechts hebt Bein
myservo2.write(pos);      //    Servo2 links senkt Bein
myservo8.write(45 - pos); //    Servo8 senkt Bein
myservo6.write(pos);      //    Servo6 hebt Bein
myservo12.write(45 - pos); //    Servo4/12 rechts hebt Bein
myservo10.write(pos);      //    Servo2/10 links senkt Bein

   delay(10); 
}

  delay(500);

 for (pos = 45; pos >= 0; pos -= 1) { 
 myservo1.write(pos);       // Servo1 dreht nach rechts
 myservo3.write(45 - pos);  // Servo3 dreht nach links. Zahnräder mit 6&8 nach rechts
 myservo5.write(pos);   // Servo5 dreht nach rechts
 delay(10);
 
}
 delay(500);

for (pos = 10; pos <=45; pos += 1) { 

myservo4.write(45 - pos); //  Servo4 rechts senkt Bein
myservo2.write(pos);      //  Servo2 links hebt Bein
myservo8.write(45 - pos); //  Servo8 hebt Bein
myservo6.write(pos);      //  Servo6 senkt Bein
myservo12.write(45 - pos); //  Servo4/12 rechts senkt Bein
myservo10.write(pos);      //  Servo2/10 links hebt Bein

   delay(10); 
 }

 delay(500);
 
 for (pos = 0; pos <=45; pos += 1) {  
  
 myservo1.write(pos);       // Servo1 dreht nach links zurück
 myservo3.write(45 - pos);  // Servo3 dreht nach rechts zurück.Zahnräder mit 6&8 nach links
 myservo5.write(pos);   
 delay(10);  
}

  delay(500);

  }    }  

{ while (d>0) // Rechtsdrehung

{ d--;
  
  for (pos = 45; pos >=0; pos -= 1) {   
myservo6.write(0); // Servos 6 & 8: Beine hoch
myservo8.write(0);
myservo4.write(pos); //    Servo4,2,10,12 hebt  Beine
myservo2.write(pos);      
myservo10.write(pos);  
myservo12.write(pos); 
   delay(5); 
}
delay(500);
 for (pos = 45; pos >= 0; pos -= 1) { 
 myservo1.write(pos); // Servo1 dreht nach rechts
 myservo3.write(0);   // Servo3 still
 myservo5.write(pos);  
 delay(5);
 }
 
 delay(500);
 for (pos = 0; pos <=45; pos += 1) {  
myservo6.write(0); // Servos 6 & 8: Beine hoch
myservo8.write(0);
myservo4.write(pos);  //Servo4,2,10,12 senkt  Beine
myservo2.write(pos);       
myservo10.write(pos);  
myservo12.write(pos); 
   delay(5); 
 }
 
 delay(500);
 for (pos = 0; pos <=45; pos += 1) {  
 myservo1.write(pos);       // Servo1 dreht nach links zurück
 myservo3.write(0);   //Servo3 still
 myservo5.write(pos); 
  delay(5);  
}
  delay(500);
  }   } 

  { while (e>0) // wieder geradeaus

{ e--;

  for (pos = 45; pos >=10; pos -= 1) { 

myservo4.write(45 - pos); //    Servo4 rechts hebt Bein
myservo2.write(pos);      //    Servo2 links senkt Bein
myservo8.write(45 - pos); //    Servo8 senkt Bein
myservo6.write(pos);      //    Servo6 hebt Bein
myservo12.write(45 - pos); //    Servo4/12 rechts hebt Bein
myservo10.write(pos);      //    Servo2/10 links senkt Bein

   delay(10); 
}

  delay(500);

 for (pos = 45; pos >= 0; pos -= 1) { 
 myservo1.write(pos);       // Servo1 dreht nach rechts
 myservo3.write(45 - pos);  // Servo3 dreht nach links. Zahnräder mit 6&8 nach rechts
 myservo5.write(pos);   // Servo5 dreht nach rechts
 delay(10);
 
}
 delay(500);

for (pos = 10; pos <=45; pos += 1) { 

myservo4.write(45 - pos); //  Servo4 rechts senkt Bein
myservo2.write(pos);      //  Servo2 links hebt Bein
myservo8.write(45 - pos); //  Servo8 hebt Bein
myservo6.write(pos);      //  Servo6 senkt Bein
myservo12.write(45 - pos); //  Servo4/12 rechts senkt Bein
myservo10.write(pos);      //  Servo2/10 links hebt Bein

   delay(10); 
 }

 delay(500);
 
 for (pos = 0; pos <=45; pos += 1) {  
  
 myservo1.write(pos);       // Servo1 dreht nach links zurück
 myservo3.write(45 - pos);  // Servo3 dreht nach rechts zurück.Zahnräder mit 6&8 nach links
 myservo5.write(pos);   
 delay(10);  
}

  delay(500);

  }    }  

  }
