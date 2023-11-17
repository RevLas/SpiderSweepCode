#include <Servo.h>

Servo myservo2; 
Servo myservo3; 
Servo myservo4; 
Servo myservo5; 
Servo myservo6; 
Servo myservo7; 
Servo myservo8; 
Servo myservo9; 
Servo myservo10;
Servo myservo11; 
Servo myservo12; 
Servo myservo13; 

int pos = 90;
int a = 4;  //Beine heben & senken & Rumpf hin&her drehen
int b = 3;  // Vorwärts gehen
int j = 2;  // im Kreis drehen
int c = 3;  //Rückwärts
int d = 2;  // drehen hin
int e = 2;  // drehen zurück
int f = 2;  // drehen rechts an Ort
int g = 2;  // rudern hin und zurück
int h = 2;  // drehen links an Ort
int i = 4;  // winken

void setup() {
 myservo2.attach(2);
 myservo3.attach(3);
myservo4.attach(4);
 myservo5.attach(5);
 myservo6.attach(6);
myservo7.attach(7);
 myservo8.attach(8);
 myservo9.attach(9);
myservo10.attach(10);
 myservo11.attach(11);
 myservo12.attach(12);
myservo13.attach(13);
}

void loop() 
{ 

myservo2.write(70);   // 1.  Belastungshöhe vertikal
myservo5.write(110);        
myservo8.write(110);        
myservo11.write(70);  
delay(6);
myservo3.write(70);   // 2. Beinspitzen nach innen
myservo6.write(110);        
myservo9.write(110);        
myservo12.write(70);  
delay(6);
myservo4.write(120);   // 3. X-Stellung horizontal
myservo7.write(60);        
myservo10.write(60);        
myservo13.write(120); 
delay(6);

  { while (a>0)  // Beine heben & senken & Rumpf hin&her drehen
{ a--;

                 
//4.Bein1
for (pos = 70; pos >=30; pos -=1) {  
myservo2.write(pos);         //70>30 Bein1 heben                    
     
 delay(10);
} 
// 6b. Beinspitze Servo3 nach drehen aussen um 40Grad
for (pos = 70; pos <=110; pos +=1) {  
myservo3.write(pos);  //70>110 Beinspitze nach aussen 
delay(10);
}
for (pos = 110; pos >=70; pos -=1) {  
myservo3.write(pos);  //70>110 Beinspitze nach innen 
delay(10);
}
//5.Bein1
for (pos = 30; pos <=70; pos +=1) {  
myservo2.write(pos);         //30>70 Bein1 senken                    
  delay(10);
}
//6a. Bein2 heben
for (pos = 110; pos <=150; pos +=1) {  
myservo5.write(pos);  //110>150 Bein2 heben  
delay(10);
}
// 6b. Beinspitze Servo6 nach drehen aussen um 40Grad
for (pos = 110; pos >=70; pos -=1) {  
myservo6.write(pos);  //110>70 Beinspitze nach aussen 
delay(10);
}
//6c. Beinspitze Servo6 nach innen
for (pos = 70; pos <=110; pos +=1) {  
myservo6.write(pos);  //70>110 Beinspitze zurück 
delay(10);
}
 //7. Bein2
 for (pos = 70; pos <=110; pos +=1) {  
myservo5.write(220 - pos);  //150>110 Bein2 senken
delay(10);
}
  //8.  Bein4                     
 for (pos = 70; pos <=110; pos +=1) {  
myservo11.write(140 - pos);  //70>30 Bein4 heben
 delay(10);
}
// 6b. Beinspitze Servo12 nach drehen aussen um 40Grad
for (pos = 70; pos <=110; pos +=1) {  
myservo12.write(pos);  //70>110 Beinspitze nach aussen 
delay(10);
}
for (pos = 110; pos >=70; pos -=1) {  
myservo12.write(pos);  //70>110 Beinspitze nach innen 
delay(10);
}
//9.Bein4
 for (pos = 30; pos <=70; pos +=1) {  
myservo11.write(pos);  //30>70 Bein4 senken
 delay(10);
}
//10. Bein3
for (pos = 110; pos <=150; pos +=1) {  
myservo8.write(pos);  //110>150 Bein3 heben  
 delay(10);
}
//11.Beinspitze Servo9 um 30Grad nach aussen
for (pos = 110; pos >=80; pos -=1) {  
 myservo9.write(pos);   //110>80 Beinspitze nach aussen
 delay(10);
}
//12.Beinspitze Servo9 nach innen
for (pos = 80; pos <=110; pos +=1) {  
 myservo9.write(pos);   //80>110 Beinspitze nach innen
 delay(10);
}
//13. Bein3
 for (pos = 70; pos <=110; pos +=1) {  
myservo8.write(220 - pos);  //150>110 Bein3 senken
 delay(10);
}
//14. Servo4,7,10,13 Uhrzeiger 30Grad
 for (pos = 120; pos >=90; pos -=1) { 
myservo4.write(pos);         // 120>90 Uhrzeiger 
myservo7.write(pos - 60);    // 60>30  do  
myservo10.write(pos - 60);   // 60>30  do   
myservo13.write(pos);        // 120>90 do
 delay(10);
}
//14. Servo4,7,10,13 GegenUhrzeiger 30Grad
 for (pos = 90; pos <=120; pos +=1) { 
myservo4.write(pos);         // 90>120 GegenUhrzeiger 
myservo7.write(pos - 60);    // 30>60  do  
myservo10.write(pos - 60);   // 30>60  do   
myservo13.write(pos);        // 90>120 do
 delay(10);
}
//14. Servo4,7,10,13 Uhrzeiger 30Grad
 for (pos = 120; pos >=90; pos -=1) { 
myservo4.write(pos);         // 120>90 Uhrzeiger 
myservo7.write(pos - 60);    // 60>30  do  
myservo10.write(pos - 60);   // 60>30  do   
myservo13.write(pos);        // 120>90 do
 delay(10);
}
//14. Servo4,7,10,13 GegenUhrzeiger 30Grad
 for (pos = 90; pos <=120; pos +=1) { 
myservo4.write(pos);         // 90>120 GegenUhrzeiger 
myservo7.write(pos - 60);    // 30>60  do  
myservo10.write(pos - 60);   // 30>60  do   
myservo13.write(pos);        // 90>120 do
 delay(10);
}

} // Endklammer für while (a>0)
delay(10);
} // Endklammer für a--
//=======================================================
{ while (b>0)  // Vorwärts
{ b--;
                      //4. Bein1 heben, drehen,  
      //delay(300);                 
 for (pos = 120; pos <=160; pos +=1) {  
myservo2.write(190 - pos);    //70>30 Bein1 heben                    
myservo4.write(pos);          //120>160 Bein1 drehen GegenUhrzeiger   
 delay(6);
} 
                      //5.   senken
       //delay(300);                
 for (pos = 30; pos <=70; pos +=1) {  
myservo2.write(pos);        //30>70 Bein1 senken =Startpos        
 delay(6);
} 
                        // Bein2 heben, drehen
       //delay(300);                
 for (pos = 30; pos <=70; pos +=1) {  
myservo5.write(pos + 80);   //110>150 Bein2 heben                 
myservo7.write(pos + 30);  //60>100 Bein2 drehen GegenUhrzeiger   
 delay(6);
} 
                      //6. Bein2 senken, 
        //delay(300);               
 for (pos = 160; pos >=120; pos -=1) {  
myservo5.write(pos - 10);        //150>110 Bein2 senken =Startpos    
 delay(6);
} 
                      //7. Beine1-2 (Servos4&7) drehen am Boden: Uhrzeiger 

        //delay(300);               
 for (pos = 160; pos >=120; pos -=1) {  
myservo4.write(pos);          //160>120 Bein1 drehen Uhrzeiger = Startpos      
myservo7.write(pos - 60);     //100>60 Bein2 drehen Uhrzeiger = Startpos        

 delay(6);
} 
                      //7. Bein3 heben, drehen, senken
         //delay(300);              
 for (pos = 110; pos <=150; pos +=1) {  
myservo8.write(pos);        //110>150 Bein3 heben                                
myservo10.write(170 - pos);   //60>20 Bein3 drehen Uhrzeiger     
 delay(6);
} 
                   //8. Bein3 senken
        //delay(300);  
 for (pos = 160; pos >=120; pos -=1) {                    
myservo8.write(pos - 10);   //150>110 Bein3 senken =Startpos      
 delay(6);
} 
                    //9. Bein4 heben,drehen
        //delay(300);  
 for (pos = 160; pos >=120; pos -=1) { 
myservo11.write(pos - 90);   // 70>30 Bein4 heben                 
myservo13.write(pos - 40);   // 120>80 Bein4 drehen Uhrzeiger     
delay(6);
} 
                      //10. Bein4 senken. 
        //delay(300);               
 for (pos = 160; pos >=120; pos -=1) {  
myservo11.write(190 - pos);      //30>70 Bein4 senken =Startpos                            
 delay(6);
} 
                         //11. Beine3-4 drehen am Boden Gegenuhrzeiger
        //delay(300);               
 for (pos = 160; pos >=120; pos -=1) {       
myservo10.write(180 - pos);   // 20>60 Bein3 drehen GegenUhrzeiger =Startpos        
myservo13.write(240 - pos);   // 80>120 Bein4 drehen GegenUhrzeiger =Startpos           
 delay(6);
} 
      
} // Endklammer für while (b>0) = Vorwärts
delay(20);
} // Endklammer für b--
//============================================================

 { while (j>0)  // im Kreis drehen
{ j--;

//4. Servos2,5,8,11 40Grad hoch heben Nr. 1                  OK
 for (pos = 110; pos <=150; pos +=1) { 
myservo2.write(180 - pos);  // 70>30 hinauf
myservo5.write(pos);         // 110>150 hinauf
myservo8.write(pos);       // 110>150 hinauf
myservo11.write(180 - pos); // 70>30 hinauf
 delay(10);
} 
//14. Servo4,7,10,13 Uhrzeiger 30Grad drehen ind Luft: Nr 1
 for (pos = 120; pos >=90; pos -=1) { 
myservo4.write(pos);         // 120>90 Uhrzeiger 
myservo7.write(pos - 60);    // 60>30  do  
myservo10.write(pos - 60);   // 60>30  do   
myservo13.write(pos);        // 120>90 do
 delay(10);
}
   // 4. Beine1-4 hinunter.Nr1 Servos2,5,8,11 in der Vertikale 40Grad nach unten (=belastend) 30Grad höher als "sitzend"  
  delay(10);                                     
 for (pos = 150; pos >=110; pos -=1) { 
myservo2.write(180 - pos);  // 30>70 hinunter
myservo5.write(pos);         // 150>110 hinunter
myservo8.write(pos);       // 150>110 hinunter
myservo11.write(180 - pos); // 30>70 hinunter
 delay(10);
} 

//14. Servo4,7,10,13 GegenUhrzeiger 30Grad am Boden
 for (pos = 90; pos <=120; pos +=1) { 
myservo4.write(pos);         // 90>120 GegenUhrzeiger 
myservo7.write(pos - 60);    // 30>60  do  
myservo10.write(pos - 60);   // 30>60  do   
myservo13.write(pos);        // 90>120 do
 delay(10);
}
//4. Servos2,5,8,11 40Grad hoch heben Nr. 1                  OK
 for (pos = 110; pos <=150; pos +=1) { 
myservo2.write(180 - pos);  // 70>30 hinauf
myservo5.write(pos);         // 110>150 hinauf
myservo8.write(pos);       // 110>150 hinauf
myservo11.write(180 - pos); // 70>30 hinauf
 delay(10);
} 
//14. Servo4,7,10,13 Uhrzeiger 30Grad drehen ind Luft: Nr 1
 for (pos = 120; pos >=90; pos -=1) { 
myservo4.write(pos);         // 120>90 Uhrzeiger 
myservo7.write(pos - 60);    // 60>30  do  
myservo10.write(pos - 60);   // 60>30  do   
myservo13.write(pos);        // 120>90 do
 delay(10);
}
   // 4. Beine1-4 hinunter.Nr1 Servos2,5,8,11 in der Vertikale 40Grad nach unten (=belastend) 30Grad höher als "sitzend"  
  delay(10);                                     
 for (pos = 150; pos >=110; pos -=1) { 
myservo2.write(180 - pos);  // 30>70 hinunter
myservo5.write(pos);         // 150>110 hinunter
myservo8.write(pos);       // 150>110 hinunter
myservo11.write(180 - pos); // 30>70 hinunter
 delay(10);
} 

//14. Servo4,7,10,13 GegenUhrzeiger 30Grad am Boden
 for (pos = 90; pos <=120; pos +=1) { 
myservo4.write(pos);         // 90>120 GegenUhrzeiger 
myservo7.write(pos - 60);    // 30>60  do  
myservo10.write(pos - 60);   // 30>60  do   
myservo13.write(pos);        // 90>120 do
 delay(10);
}
} // Endklammer für while (j>0)
delay(10);
} // Endklammer für j--

//===================================================================
{ while (c>0)  // Rückwärts
{ c--;
                      //4. Bein1 heben, drehen,  
                     
 for (pos = 120; pos >=80; pos -=1) {  
myservo2.write(pos - 50);    //70>30 Bein1 heben                    
myservo4.write(pos);          // Rückwärts: 120>80 (Startpos-40)=Uhrzeiger. Vorwärts: 120>160 Bein1 drehen GegenUhrzeiger       
 delay(6);
} 
                      //5.   senken
                       
 for (pos = 30; pos <=70; pos +=1) {  
myservo2.write(pos);        //30>70 Bein1 senken =Startpos        
 delay(6);
} 
                        // 6.Bein2 heben, drehen
                      
 for (pos = 60; pos >=20; pos -=1) {  
myservo5.write(170 - pos);   //110>150 Bein2 heben                 
myservo7.write(pos);  //Rückwärts:  60>20 (Startpos-40)=Uhrzeiger     Vorwärts: 60>100 Bein2 drehen GegenUhrzeiger        
 delay(6);
} 
                      //7. Bein2 senken, 
        //delay(300);               
 for (pos = 160; pos >=120; pos -=1) {  
myservo5.write(pos - 10);        //150>110 Bein2 senken =Startpos    
 delay(6);
} 
                      //8. Beine1-2 (Servos4&7) drehen am Boden: Uhrzeiger 

                        
 for (pos = 80; pos <=120; pos +=1) {  
myservo4.write(pos);        //Rückwärts:    80>120 (Startpos)=GegenUhrzeiger    Vorwärts: 160>120 Bein1 drehen Uhrzeiger = Startpos    
myservo7.write(pos - 60);  //Rückwärts:    20>60  (Startpos)=GegenUhrzeiger    Vorwärts: 100>60 Bein2 drehen Uhrzeiger = Startpos     

 delay(6);
} 
                      //9. Bein3 heben, drehen, senken
                      
 for (pos = 110; pos <=150; pos +=1) {  
myservo8.write(pos);          //110>150 Bein3 heben                                
myservo10.write(pos - 50);   //Rückwärts:  60>100 (Startpos+40)=GegenUhrzeiger   Vorwärts: 60>20 Bein3 drehen Uhrzeiger         
 delay(6);
} 
                   //10. Bein3 senken
         
 for (pos = 160; pos >=120; pos -=1) {                    
myservo8.write(pos - 10);   //150>110 Bein3 senken =Startpos        
 delay(6);
} 
                    //11. Bein4 heben,drehen
        
 for (pos = 70; pos >=30; pos -=1) { 
myservo11.write(pos);   // 70>30 Bein4 heben                 
myservo13.write(190 - pos);   //  Rückwärts:  120>160 (Startpos+40)=GegenUhrzeiger     Vorwärts: 120>80 Bein4 drehen Uhrzeiger      
delay(6);
} 
                      //12. Bein4 senken. 
                       
 for (pos = 160; pos >=120; pos -=1) {  
myservo11.write(190 - pos);      //30>70 Bein4 senken =Startpos                            
 delay(6);
} 
                         //13. Beine3-4 (Servos10&13) drehen am Boden Gegenuhrzeiger
                       
 for (pos = 160; pos >=120; pos -=1) {       
myservo10.write(pos - 60);   // Rückwärts: 100>60  (Startpos)=Uhrzeiger     Vorwärts: 20>60 Bein3 drehen GegenUhrzeiger =Startpos     
myservo13.write(pos);        // Rückwärts: 160>120  (Startpos)=Uhrzeiger    Vorwärts: 80>120 Bein4 drehen GegenUhrzeiger =Startpos    
 delay(6);
} 
} // Endklammer für while (c>0) = Rückwärts
delay(10);
} // Endklammer für c--
//=================================================================

{ while (d>0)  //  drehen rechts
{ d--;
    //4. Bein1 (Servo2) heben und Bein1 indLuft drehen (Servo4 GegenUhrzeiger) ok
           
for (pos = 70; pos >=30; pos -=1) {  
myservo2.write(pos);     //70>30 Bein1 heben                    
myservo4.write(190 - pos);  //  120>160 Bein1 indLuft drehen: GegenUhrzeiger       
 delay(10);
} 
                                        //5.   Bein1 senken (Servo2).               
 for (pos = 30; pos <=70; pos +=1) {  
myservo2.write(pos); //30>70 Bein1 senken  
 delay(10);
} 
                                // 6. Bein1 am Boden zurückdrehen (Servo4 Uhrzeiger), Bein2 heben (Servo5), 
                                //Bein2 indLuft drehen (Servo7 GegenUhrzeiger).   
                  
 for (pos = 160; pos >=120; pos -=1) {  
myservo5.write(270 - pos );  //110>150 Bein2 heben   
myservo4.write(pos);         //160>120 Bein1 am Boden zurückdrehen: Uhrzeiger = Startpos   
myservo7.write(220 - pos);   // 60>100 Bein2 indLuft drehen: GegenUhrzeiger
delay(10);
} 
                                //7. Bein2 senken (Servo5)            

for (pos = 150; pos >=110; pos -=1) {  
myservo5.write(pos); //150>110 Bein2 senken
delay(10);
}
                            //8. Bein2 am Boden zurückdrehen(Servo7 Uhrzeiger), Bein3 heben (Servo8)
                            //Bein3 indLuft drehen (Servo10 GegenUhrzeiger).      

for (pos = 100; pos >=60; pos -=1) {  
myservo7.write(pos);       // 100>60 Bein2 am Boden zurückdrehen: Uhrzeiger
myservo8.write(210 - pos); //110>150 Bein3 heben 
myservo10.write(160 - pos);  //60>100 Bein3 drehen GegenUhrzeiger  
delay(10);
}

                           //9. Bein3  senken  (Servo8)                                  
for (pos = 150; pos >=110; pos -=1) {  
myservo8.write(pos);  //150>110 Bein3 senken
delay(10);
}
                            //10. Bein3 am Boden zurückdrehen (Servo10 Uhrzeiger), Bein4 heben           
                            // (Servo11), Bein4 indLuft drehen (Servo13 GegenUhrzeiger)        
                                           
for (pos = 20; pos <=60; pos +=1) {  
myservo10.write(120 - pos);          //100>60 Bein3 zurückdrehen Uhrzeiger  
myservo11.write(90 - pos);     // 70>30 Bein4 heben
myservo13.write(pos + 100);   //120>160 Bein4 indLuft drehen GegenUhrzeiger    
delay(10);
}
                           //11. Bein4 senken (Servo11).                   
for (pos = 30; pos <=70; pos +=1) {  
myservo11.write(pos);   // 30>70 Bein4 senken
delay(10);
}
                           //12. Bein4 am Boden zurückdrehen (Servo13 Uhrzeiger)
for (pos = 160; pos >=120; pos -=1) {  
myservo13.write(pos);   //160>120 Bein4 am Boden zurückdrehen Uhrzeiger  
delay(10);
}

} // Endklammer für while (d>0) = drehen rechts
delay(10);
} // Endklammer für d--
//=====================================================================
{ while (e>0)  //  drehen  links
{ e--;
    //4. Bein1 (Servo2) heben und Bein1 indLuft drehen (Servo4 Uhrzeiger) ok
           
for (pos = 70; pos >=30; pos -=1) {  
myservo2.write(pos);     //70>30 Bein1 heben                    
myservo4.write(pos + 50);  //  120>80 Bein1 indLuft drehen:  Uhrzeiger       
 delay(6);
} 
                                        //5.   Bein1 senken (Servo2).               
 for (pos = 30; pos <=70; pos +=1) {  
myservo2.write(pos); //30>70 Bein1 senken  
 delay(6);
} 
                                // 6. Bein1 am Boden zurückdrehen (Servo4 GegenUhrzeiger), Bein2 heben (Servo5), 
                                //Bein2 indLuft drehen (Servo7 Uhrzeiger).   
                  
 for (pos = 160; pos >=120; pos -=1) {  
myservo5.write(270 - pos );  //110>150 Bein2 heben   
myservo4.write(240 - pos);         //80>120 Bein1 am Boden zurückdrehen:  GegenUhrzeiger
myservo7.write(pos - 100);   // 60>20 Bein2 indLuft drehen: Uhrzeiger
delay(6);
} 
                                //7. Bein2 senken (Servo5)            

for (pos = 150; pos >=110; pos -=1) {  
myservo5.write(pos); //150>110 Bein2 senken
delay(6);
}

                            //8. Bein2 am Boden zurückdrehen(Servo7 GegenUhrzeiger), Bein3 heben (Servo8)
                            //Bein3 indLuft drehen (Servo10  Uhrzeiger).      

for (pos = 20; pos <=60; pos +=1) {  
myservo7.write(pos);       // 20>60 Bein2 am Boden zurückdrehen: GegenUhrzeiger
myservo8.write(pos + 90); //110>150 Bein3 heben 
myservo10.write(80 - pos);  //60>20 Bein3 drehen  Uhrzeiger  
delay(6);
}
                           //9. Bein3  senken  (Servo8)                                  
for (pos = 150; pos >=110; pos -=1) {  
myservo8.write(pos);  //150>110 Bein3 senken
delay(6);
}
                            //10. Bein3 am Boden zurückdrehen (Servo10 GegenUhrzeiger), Bein4 heben           
                            // (Servo11), Bein4 indLuft drehen (Servo13  Uhrzeiger)        
                                           
for (pos = 20; pos <=60; pos +=1) {  
myservo10.write(pos);          //20>60 Bein3 zurückdrehen GegenUhrzeiger  
myservo11.write(90 - pos);     // 70>30 Bein4 heben
myservo13.write(140 - pos);   //120>80 Bein4 indLuft drehen  Uhrzeiger    
delay(6);
}
                           //11. Bein4 senken (Servo11).                   
for (pos = 30; pos <=70; pos +=1) {  
myservo11.write(pos);   // 30>70 Bein4 senken
delay(6);
}
                           //12. Bein4 am Boden zurückdrehen (Servo13 GegenUhrzeiger)
for (pos = 80; pos <=120; pos +=1) {  
myservo13.write(pos);   //80>120 Bein4 am Boden zurückdrehen GegenUhrzeiger  
delay(6);
}

} // Endklammer für while (e>0) = drehen rechts
delay(10);
} // Endklammer für e--
//==========================================================

{ while (f>0)  // hin und zurück    
{ f--;
//4. Servos2,5,8,11 40Grad hoch heben                  OK
 for (pos = 110; pos <=150; pos +=1) { 
myservo2.write(180 - pos);  // 70>30 hinauf
myservo5.write(pos);         // 110>150 hinauf
myservo8.write(pos);       // 110>150 hinauf
myservo11.write(180 - pos); // 70>30 hinauf
 delay(10);
} 
      //5.  Servos4,7,10,13 ind Luft 40Grad drehen (keine Belastung der Servos2,5,8,11)
      //Einmal HIN drehen            OK
                                                      
 delay(10);
  for (pos = 120; pos <=160; pos +=1) {
 myservo4.write(pos);            // 120>160   Gegenuhrzeiger
 myservo7.write(pos - 60);       // 60>100 Gegenuhrzeiger
 myservo10.write(180 - pos);     //  60>20  Uhrzeiger
 myservo13.write(240 - pos);     //  120>80  Uhrzeiger
     delay(10);
  }
   // 4. Beine1-4 hinunter. Servos2,5,8,11 in der Vertikale 40Grad nach unten (=belastend) 30Grad höher als "sitzend"  
  delay(10);                                    //       OK
 for (pos = 150; pos >=110; pos -=1) { 
myservo2.write(180 - pos);  // 30>70 hinunter
myservo5.write(pos);         // 150>110 hinunter
myservo8.write(pos);       // 150>110 hinunter
myservo11.write(180 - pos); // 30>70 hinunter
 delay(10);
} 
      //5. Servos4,7,10,13 am Boden zurückdrehen unter Belastung der Servos2,5,8,11
       // Einmal ZURUECK drehen                         OK
  
   delay(10);
  for (pos = 160; pos >=120; pos -=1) {
 myservo4.write(pos);           // 160>120 Uhrzeiger 
 myservo7.write(pos - 60);           // 100>60 Uhrzeiger
 myservo10.write(180 - pos);    // 20>60 Gegenuhrzeiger
 myservo13.write(240 - pos);    // 80>120 Gegenuhrzeiger
     delay(10);
}
} // Endklammer für while (f>0)  drehen rechts an Ort
delay(10);
} // Endklammer für f--
//=============================================================================
{ while (g>0)     // rudern hin und zurück    
{ g--;
//4. Servos2,5,8,11 40Grad hoch heben                  OK
 for (pos = 110; pos <=150; pos +=1) { 
myservo2.write(180 - pos);  // 70>30 hinauf
myservo5.write(pos);         // 110>150 hinauf
myservo8.write(pos);       // 110>150 hinauf
myservo11.write(180 - pos); // 70>30 hinauf
 delay(10);
} 
      //5.  Servos4,7,10,13 ind Luft 40Grad drehen (keine Belastung der Servos2,5,8,11)
      //Einmal HIN drehen                               OK
                                                        
 delay(10);
 for (pos = 120; pos <=160; pos +=1) {
 myservo4.write(pos);            // 120>160   Gegenuhrzeiger
 myservo7.write(pos - 60);       // 60>100 Gegenuhrzeiger
 myservo10.write(180 - pos);     //  60>20  Uhrzeiger
 myservo13.write(240 - pos);     //  120>80  Uhrzeiger
     delay(10);
  }
   // 4. Beine1-4 hinunter. Servos2,5,8,11 in der Vertikale 40Grad nach unten (=belastend) 30Grad höher als "sitzend"  
                                                   //OK
 delay(300);                                          
for (pos = 150; pos >=110; pos -=1) { 
myservo2.write(180 - pos);  // 30>70 hinunter
myservo5.write(pos);         // 150>110 hinunter
myservo8.write(pos);       // 150>110 hinunter
myservo11.write(180 - pos); // 30>70 hinunter
 delay(10);
} 
      //5. Servos4,7,10,13 am Boden zurückdrehen unter Belastung der Servos2,5,8,11
       // Einmal ZURUECK drehen                         OK
  
 delay(10);
 for (pos = 160; pos >=120; pos -=1) {
 myservo4.write(pos);           // 160>120 Uhrzeiger 
 myservo7.write(pos - 60);           // 100>60 Uhrzeiger
 myservo10.write(180 - pos);    // 20>60 Gegenuhrzeiger
 myservo13.write(240 - pos);    // 80>120 Gegenuhrzeiger
     delay(6);
}
        // 6. Servos2,5,8,11 40 Grad hoch ziehen     OK
delay(10);                                         
 for (pos = 110; pos <=150; pos +=1) { 
myservo2.write(180 - pos);  // 70>30 hinauf
myservo5.write(pos);         // 110>150 hinauf
myservo8.write(pos);       // 110>150 hinauf
myservo11.write(180 - pos); // 70>30 hinauf
 delay(10);
} 
 //7. Servos4,7,10,13 in der Horizontalen drehen (keine Belastung der Servos2,5,8,11)
// Zeites Mal HIN drehen                              OK
                                                   
  delay(10);
  for (pos = 120; pos <=160; pos +=1) {
 myservo4.write(pos);            // 120>160   Gegenuhrzeiger
 myservo7.write(pos - 60);       // 60>100 Gegenuhrzeiger
 myservo10.write(180 - pos);     //  60>20  Uhrzeiger
 myservo13.write(240 - pos);     //  120>80  Uhrzeiger
     delay(10);
  }
     // 8. Beine1-4 hinunter. Servos2,5,8,11 in der Vertikale 30Grad nach unten (=belastend) 30Grad höher als "sitzend"  
                                                // OK
 delay(10);                                       
 for (pos = 150; pos >=110; pos -=1) { 
myservo2.write(180 - pos);  // 30>70 hinunter
myservo5.write(pos);         // 150>110 hinunter
myservo8.write(pos);       // 150>110 hinunter
myservo11.write(180 - pos); // 30>70 hinunter
 delay(10);
} 
     //9. Servos4,7,10,13 in der Horizontalen drehen (keine Belastung der Servos2,5,8,11)
      // Zeites Mal ZURUECK drehen
   delay(10);
  for (pos = 160; pos >=120; pos -=1) {
 myservo4.write(pos);           // 160>120 Uhrzeiger 
 myservo7.write(pos - 60);      // 100>60 Uhrzeiger
 myservo10.write(180 - pos);    // 20>60 Gegenuhrzeiger
 myservo13.write(240 - pos);    // 80>120 Gegenuhrzeiger
     delay(6);
}
} // Endklammer für while (g>0) =  rudern hin und zurück    
delay(10);
} // Endklammer für g--
//=============================================================================
{ while (h>0)  // drehen links an Ort   
{ h--;
//4. Servos2,5,8,11 40Grad hoch heben                  
 for (pos = 110; pos <=150; pos +=1) { 
myservo2.write(180 - pos);  // 70>30 hinauf
myservo5.write(pos);         // 110>150 hinauf
myservo8.write(pos);       // 110>150 hinauf
myservo11.write(180 - pos); // 70>30 hinauf
 delay(10);
} 
      //5.  Servos4,7,10,13 ind Luft 40Grad drehen (keine Belastung der Servos2,5,8,11)
      //Einmal HIN drehen            
                                                      
 delay(10);
  for (pos = 120; pos >=80; pos -=1) {
 myservo4.write(pos);            // 120>80    uhrzeiger
 myservo7.write(pos - 60);       // 60>20  uhrzeiger
 myservo10.write(180 - pos);     //  60>100  GegenUhrzeiger
 myservo13.write(240 - pos);     //  120>160  GegenUhrzeiger
     delay(10);
  }
   // 4. Beine1-4 hinunter. Servos2,5,8,11 in der Vertikale 40Grad nach unten (=belastend) 30Grad höher als "sitzend"  
  delay(10);                                    
 for (pos = 150; pos >=110; pos -=1) { 
myservo2.write(180 - pos);  // 30>70 hinunter
myservo5.write(pos);         // 150>110 hinunter
myservo8.write(pos);       // 150>110 hinunter
myservo11.write(180 - pos); // 30>70 hinunter
 delay(10);
} 
      //5. Servos4,7,10,13 am Boden zurückdrehen unter Belastung der Servos2,5,8,11
       // Einmal ZURUECK drehen                          
  
   delay(10);
  for (pos = 160; pos >=120; pos -=1) {
 myservo4.write(240 - pos);           // 80>120 GegenUhrzeiger 
 myservo7.write(180 - pos);           // 20>60 GegenUhrzeiger
 myservo10.write(pos - 60);    // 100>60 uhrzeiger
 myservo13.write(pos);    // 160>120 uhrzeiger
     delay(10);
}
} // Endklammer für while (h>0) = drehen links an Ort  
delay(10);
} // Endklammer für h--
//======================================================================================

{ while (i>0)  // winken
{ i--;
// Bein1-4 um 30 Grad heben
for (pos = 70; pos >=30; pos -=1) {  
myservo2.write(pos);              //70>30 Bein1 heben                    
myservo5.write(180 - pos);        //110>150 Bein2 heben
myservo8.write(180 - pos);       //110>150 Bein3 heben  
myservo11.write(pos);          //70>30 Bein4 heben  
 delay(10);
} 
// spitzen von Bein1&4 heben = Servos3&12 40Grad nach aussen
for (pos = 70; pos <=110; pos +=1) {  
myservo3.write(pos); // 70>110 Servo3 30Grad nach aussen
myservo12.write(pos); // 70>110 Servo 12 30Grad nach aussen
delay(10);
}
//  spitzen von Bein2&3 heben(Servos6&9); spitzen von Bein1&4 zurück (Servos3&12)
for (pos = 110; pos >=70; pos -=1) { 
myservo6.write(pos);   //110>70 servo6 30Grad nach aussen    
myservo9.write(pos); //110>70 Servo9 nach aussen
myservo3.write(pos); // 110>70 Servo3 30Grad zurück
myservo12.write(pos); // 110>70 Servo 12 30Grad zurück
delay(10);
}
// spitzen von Bein2&3 zurück(Servos6&9)
for (pos = 70; pos <=110; pos +=1) { 
myservo6.write(pos);   //70>110 servo6 30Grad zurück    
myservo9.write(pos); //70>110 Servo9 zurück
delay(10);
}
} // Endklammer für while (i>0) winken
delay(10);
} // Endklammer für i--
//=====================================================================================

delay(2000);
}









                      
