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
int a = 10; // GERADEAUS
int b = 1; // Anpassen der Servos von GERADEAUS auf Hin und Her: Servos4(140>120),8 (100>120),12 (150>120),3(80>70),7 (40>70),11(80>70)
int c = 1; // HIN und HER
int d = 1; // Anpassen der Servos von Hin und Her auf GERADEAUS: Servos4(120>140),8 (120>100),12 (120>150),3(70>80),7 (70>40),11(70>80)
int e = 4; // GERADEAUS
int f = 1; // Anpassen von GERADEAUS auf RECHTSDREHUNG (nur Servo8: 100>140)
int g = 4; // RECHTSDREHUNG
int h = 1; // Anpassen von RECHTSDREHUNG auf GERADEAUS (Servo8: 140>100)
int i = 3; // GERADEAUS
int j = 1; // Anpassen von GERADEAUS auf LINKSDREHUNG:   (Servo7 40>80)
int k = 4; // LINKSDREHUNG
int l = 1; // Anpassen LINKSDREHUNG auf GERADEAUS: (Servo7 80>40) 
int m = 3; // GERADEAUS, RUECKWAERTS, RUECKWAERTS, GERADEAUS
int n = 1; // Anpassen der Servos von GERADEAUS auf Hin und Her: Servos4(140>120),8 (100>120),12 (150>120),3(80>70),7 (40>70),11(80>70)
int o = 1; // HIN und HER 
int p = 1; // Beinen auf und ab

void setup() {  
  //Servos oben auf der Platte nicht wie bei Stampe unter der Platte
  
 myservo2.attach(2);  // vertikale Drehung 90Grad bei 8Uhr
 myservo3.attach(3); // horizontale Drehung, Servo auf der Platte befestigt links
 myservo4.attach(4);//  horizontale Drehung, Servo auf der Platte befestigt rechts
 myservo5.attach(5);// vertikale Drehung 90Grad bei4Uhr
 myservo6.attach(6);  // vertikale Drehung 90Grad bei 8Uhr
 myservo7.attach(7); // horizontale Drehung, Servo auf der Platte befestigt links
 myservo8.attach(8);//  horizontale Drehung, Servo auf der Platte befestigt rechts
 myservo9.attach(9);// vertikale Drehung 90Grad bei4Uhr
 myservo10.attach(10);  // vertikale Drehung 90Grad bei 8Uhr
 myservo11.attach(11); // horizontale Drehung, Servo auf der Platte befestigt links
 myservo12.attach(12);//  horizontale Drehung, Servo auf der Platte befestigt rechts
 myservo13.attach(13);// vertikale Drehung 90Grad bei4Uhr
 
myservo2.write(120); // Startpositionen der Servos: vertikal tief
 myservo9.write(60); // vertikal tief
 myservo10.write(120);// vertikal tief
 
 myservo5.write(70); // vertikal tief
 myservo6.write(110); // vertikal tief
 myservo13.write(80); // vetikal tief
 
 myservo3.write(80); // horizontal vorne
 myservo8.write(100); // horizontal vorne
 myservo11.write(80); // horizontal vorne

 myservo4.write(140); // horizontal hinten
 myservo7.write(40);  // horizontal hinten
 myservo12.write(150); // horizontal hinten

 }
 
void loop() 
{ 

  //GERADEAUS
//GERADEAUS =================================================
    { while (a>0)   
{ a--; 
  //  

//Tripod Gait vertikal 1
for (pos = 90; pos >=70; pos -=1) {  //VertikalDrehung
myservo2.write(120);   //  120 Bein tief
myservo9.write(60);            //  60 Bein tief
myservo10.write(120);   //  120 Bein tief
myservo5.write(160 - pos);  // 70>90 Bein tief>hoch: vertikal 2 auf vertikal 1
myservo6.write(pos + 20);   //  110>90 Bein tief>hoch
myservo13.write(170 - pos); // 80>100 Bein tief>hoch
delay(10);
} 
//Tripod Gait horizontal 1
 
for (pos = 80; pos >=40; pos -=1) {  // Horizontaldrehung hin 
myservo3.write(pos); //  80>40 Dreht im Uhrzeiger mit                 tiefem Bein=hin
myservo8.write(180 - pos); // 100>140 Dreht im GegenUhrzeiger mit tiefem Bein=hin
myservo11.write(pos + 10); //  90>50 Dreht im Uhrzeiger mit            tiefem Bein=hin
myservo4.write(pos + 60); // 140>100 Dreht im  Uhrzeiger mit          hohem Bein=zurück
myservo7.write(120 - pos); //  40>80 Dreht im GegenUhrzeiger mit       hohem Bein=zurück
myservo12.write(pos + 80); // 160>120  Dreht im Uhrzeiger mit        hohem Bein=zurück
delay(10);
} 

//Tripod Gait vertikal 2
 
//VertikalDrehung    Servos 5,6,13=tief zusammen mit Servos2,9,10=tief
for (pos = 70; pos <=90; pos +=1) {  

myservo5.write(160 - pos); // 90>70      Bein hoch>tief=hin
myservo6.write(pos + 20); // 90>110       Bein hoch>tief=hin
myservo13.write(170 - pos); // 100>80     Bein hoch>tief=hin
delay(10);
}

//Tripod Gait vertikal 3
 
//VertikalDrehung  Servos 2,9,10=hoch; Servos 5,6,13=tief
for (pos = 70; pos <=90; pos +=1) {  
myservo2.write(190 - pos); // 120>100      Bein tief>hoch=zurück
myservo9.write(pos - 10); // 60>80             Bein tief>hochhoch=zurück
myservo10.write(190 - pos); // 120>100    Bein tief>hoch=zurück
delay(10);}

//Tripod Gait horizontal 2
 
  for (pos = 40; pos <=80; pos +=1) {  // Horizontaldrehung zurück
myservo3.write(pos + 10);       //  50>90 im GegenUhrzeiger mit          hohem Bein=zurück
myservo8.write(180 - pos); // 140>100 im Uhrzeiger                    hohem Bein=zurück
myservo11.write(pos + 10);       //  50>90 im GegenUhrzeiger             hohem Bein=zurück
myservo4.write(pos + 60); // 100>140 im GegenUhrzeiger mit          tiefem Bein=hin
myservo7.write(120 - pos);  //  80>40 im  Uhrzeiger mit.             tiefem Bein=hin
myservo12.write(pos + 80); // 120>160  GegenUhrzeiger mit.            tiefem Bein=hin 
delay(10);
} 
 

//Tripod Gait vertikal 4
 
//VertikalDrehung  Servos 2,9,10 und Servos 5,6,13 sind alle tief, wie vertikal1 verlangt
for (pos = 70; pos <=90; pos +=1) {  
myservo2.write(pos + 30 ); // 100>120      Bein hoch>tief
myservo9.write( 150 - pos); // 80>60             Bein hoch>tief
myservo10.write( pos + 30); // 100>120    Bein hoch>tief
delay(10);
}
} // Endklammer für while (a>0)
} // Endklammer für a--

//=========================================================================================
   // Anpassen von GERADEAUS zu HIN und HER
  //Anpassen der horizontalen Servos4(140>120),8 (100>120),12 (150>120),3(80>70),7 (40>70),11(80>70) an Hin und Her Startposition

    { while (b>0)   
{ b--; 

for (pos = 150; pos >=120; pos -=1) {
myservo12.write(pos);         //150>120
myservo7.write(190 - pos);    //40>70
delay(10);
} 
for (pos = 140; pos >=120; pos -=1) {
myservo4.write(pos); //140>120
myservo8.write(240 - pos); //100>120
delay(10); 
}
for (pos = 80; pos >=70; pos -=1) {
myservo3.write(pos); //80>70
myservo11.write(pos); //80>70
delay(10); 
}
} // Endklammer für while (b>0)
} // Endklammer für b--


// HIN und HER schwenken=================================================================
//Startposition Hin und Her:

    { while (c>0)   
{ c--; 

for (pos = 110; pos >=40; pos -=1) {  //VertikalDrehung
myservo4.write(120); //parallel zur Längsrichtung (von 140>20)
myservo5.write(70); // tief
myservo8.write(120); //parallel zur Längsrichtung (von 100>120)
myservo9.write(60); // tief
myservo12.write(120); //parallel zur Längsrichtung (von 150>120)
myservo13.write(80); //tief: 60 musste addiert werden, damit dass Bein nicht an die Platte stiess

myservo2.write(120); // tief
myservo3.write(70);   //parallel zur Längsrichtung (von 80>70)
myservo6.write(110); //tief
myservo7.write(70);    //parallel zur Längsrichtung (von 40>70)
myservo10.write(120); //tief
myservo11.write(70);    //parallel zur Längsrichtung (von 80>70))
delay(10);
} 
//HinUndHer Nr1
//Neigung nach links Beine2,6,10 gleichzeitig heben. Beine5,9,13 gleichzeitig senken verstärkt die Neiging

for (pos = 120; pos >=90; pos -=1) {  //Hebung  von Servo5,6,13. Servos2,9,11 bleiben unten
myservo2.write(pos); // 120>90 geht hoch
myservo6.write(pos - 10); // 110>80 geht hoch
myservo10.write(pos); //120>90 geht hoch
myservo5.write(pos - 50);      //70>40 geht 30 tiefer      
myservo9.write(pos - 60);      //60>30 geht 30 tiefer  
myservo13.write(pos - 40);  // 80>50 geht 30 tiefer      
delay(10);
} 
//Neiging nach rechts Beine2,6,10 60Grad tiefer bei fast 6 Uhr. Beine 5,9,13 60Grad höher bei fast 3 Uhr

for (pos = 90; pos <=150; pos +=1) {  //Hebung  von Servo5,6,13. Servos2,9,11 bleiben unten
myservo2.write(pos); // geht tief 90>150
myservo6.write(pos - 10); //  geht tief 80>140
myservo10.write(pos); // geht tief 90> 150
myservo5.write(pos - 50);      //  geht hoch 40>100      
myservo9.write(pos - 60);      //geht hoch 30>90  
myservo13.write(pos - 40);  // geht hoch 50>110   
delay(10);
} 
// HinUndHer Nr2
for (pos = 150; pos >=90; pos -=1) {  //Hebung  von Servo5,6,13. Servos2,9,11 bleiben unten
myservo2.write(pos); // geht hoch 150>90
myservo6.write(pos - 10); //  geht hoch 140>80
myservo10.write(pos); // geht hoch 150>90
myservo5.write(pos - 50);      //  geht tief 100>40      
myservo9.write(pos - 60);      //geht tief 90>30  
myservo13.write(pos - 40);  // geht tief 110>50  
delay(10);
} 
//Neigung nach rechts
for (pos = 90; pos <=150; pos +=1) {  //Hebung  von Servo5,6,13. Servos2,9,11 bleiben unten
myservo2.write(pos); // geht tief 90>150
myservo6.write(pos - 10); //  geht tief 80>140
myservo10.write(pos); // geht tief 90> 150
myservo5.write(pos - 50);      //  geht hoch 40>100      
myservo9.write(pos - 60);      //geht hoch 30>90  
myservo13.write(pos - 40);  // geht hoch 50>110   
delay(10);
} 
// HinUndHer Nr3
for (pos = 150; pos >=90; pos -=1) {  //Hebung  von Servo5,6,13. Servos2,9,11 bleiben unten
myservo2.write(pos); // geht hoch 150>90
myservo6.write(pos - 10); //  geht hoch 140>80
myservo10.write(pos); // geht hoch 150>90
myservo5.write(pos - 50);      //  geht tief 100>40      
myservo9.write(pos - 60);      //geht tief 90>30  
myservo13.write(pos - 40);  // geht tief 110>50  
delay(10);
} 
//Neigung nach rechts
for (pos = 90; pos <=150; pos +=1) {  //Hebung  von Servo5,6,13. Servos2,9,11 bleiben unten
myservo2.write(pos); // geht tief 90>150
myservo6.write(pos - 10); //  geht tief 80>140
myservo10.write(pos); // geht tief 90> 150
myservo5.write(pos - 50);      //  geht hoch 40>100      
myservo9.write(pos - 60);      //geht hoch 30>90  
myservo13.write(pos - 40);  // geht hoch 50>110   
delay(10);
} 

//Neigung zurück auf Startwerte

for (pos = 150; pos >=120; pos -=1) {  //Hebung  von Servo5,6,13. Servos2,9,11 bleiben unten
myservo2.write(pos); // geht hoch 150>120
myservo6.write(pos -10); //  geht hoch 140>110
myservo10.write(pos); // geht hoch 150>120
myservo5.write(pos - 50);      //  geht tief 100>70     
myservo9.write(pos - 60);      //geht tief 90>60 
myservo13.write(pos - 40);  // geht tief 110>80   
delay(10);
} 
} // Endklammer für while (c>0)
} // Endklammer für c—-

//==========================================================================================
// Korrektur von HIN und HER zu Startwerten von GERADEAUS,falls Geradeaus im Code
//  nachfolgt. 
 // Reverse: Servos4(120>140),8 (120>100),12 (120>150),3(70>80),7 (70>40),11(70>80) an Hin und Her 
     
     { while (d>0)   
{ d--; 
for (pos = 120; pos <=150; pos +=1) {
myservo12.write(pos);         //120>150
myservo7.write(190 - pos);    //70>40
delay(10);
} 
for (pos = 120; pos <=140; pos +=1) {
myservo4.write(pos); //120>140
myservo8.write(240 - pos); //120>100
delay(10); 
}
for (pos = 70; pos <=80; pos +=1) {
myservo3.write(pos); //70>80
myservo11.write(pos); //70>80
delay(10); 
} 
} // Endklammer für while (d>0)
} // Endklammer für d—-

// GERADEAUS zum zweiten Mal================================================================================

     { while (e>0)   
{ e--; 
//Tripod Gait vertikal 1
for (pos = 90; pos >=70; pos -=1) {  //VertikalDrehung
myservo2.write(120);   //  120 Bein tief
myservo9.write(60);            //  60 Bein tief
myservo10.write(120);   //  120 Bein tief
myservo5.write(160 - pos);  // 70>90 Bein tief>hoch: vertikal 2 auf vertikal 1
myservo6.write(pos + 20);   //  110>90 Bein tief>hoch
myservo13.write(170 - pos); // 80>100 Bein tief>hoch
delay(10);
} 
//Tripod Gait horizontal 1
 
for (pos = 80; pos >=40; pos -=1) {  // Horizontaldrehung hin 
myservo3.write(pos); //  80>40 Dreht im Uhrzeiger mit                 tiefem Bein=hin
myservo8.write(180 - pos); // 100>140 Dreht im GegenUhrzeiger mit tiefem Bein=hin
myservo11.write(pos + 10); //  90>50 Dreht im Uhrzeiger mit            tiefem Bein=hin
myservo4.write(pos + 60); // 140>100 Dreht im  Uhrzeiger mit          hohem Bein=zurück
myservo7.write(120 - pos); //  40>80 Dreht im GegenUhrzeiger mit       hohem Bein=zurück
myservo12.write(pos + 80); // 160>120  Dreht im Uhrzeiger mit        hohem Bein=zurück
delay(10);
} 

//Tripod Gait vertikal 2
 
//VertikalDrehung    Servos 5,6,13=tief zusammen mit Servos2,9,10=tief
for (pos = 70; pos <=90; pos +=1) {  

myservo5.write(160 - pos); // 90>70      Bein hoch>tief=hin
myservo6.write(pos + 20); // 90>110       Bein hoch>tief=hin
myservo13.write(170 - pos); // 100>80     Bein hoch>tief=hin
delay(10);
}

//Tripod Gait vertikal 3
 
//VertikalDrehung  Servos 2,9,10=hoch; Servos 5,6,13=tief
for (pos = 70; pos <=90; pos +=1) {  
myservo2.write(190 - pos); // 120>100      Bein tief>hoch=zurück
myservo9.write(pos - 10); // 60>80             Bein tief>hochhoch=zurück
myservo10.write(190 - pos); // 120>100    Bein tief>hoch=zurück
delay(10);}

//Tripod Gait horizontal 2
 
  for (pos = 40; pos <=80; pos +=1) {  // Horizontaldrehung zurück
myservo3.write(pos + 10);       //  50>90 im GegenUhrzeiger mit          hohem Bein=zurück
myservo8.write(180 - pos); // 140>100 im Uhrzeiger                    hohem Bein=zurück
myservo11.write(pos + 10);       //  50>90 im GegenUhrzeiger             hohem Bein=zurück
myservo4.write(pos + 60); // 100>140 im GegenUhrzeiger mit          tiefem Bein=hin
myservo7.write(120 - pos);  //  80>40 im  Uhrzeiger mit.             tiefem Bein=hin
myservo12.write(pos + 80); // 120>160  GegenUhrzeiger mit.            tiefem Bein=hin 
delay(10);
} 
 
//Tripod Gait vertikal 4
 
//VertikalDrehung  Servos 2,9,10 und Servos 5,6,13 sind alle tief, wie vertikal1 verlangt
for (pos = 70; pos <=90; pos +=1) {  
myservo2.write(pos + 30 ); // 100>120      Bein hoch>tief
myservo9.write( 150 - pos); // 80>60             Bein hoch>tief
myservo10.write( pos + 30); // 100>120    Bein hoch>tief
delay(10);
}
} // Endklammer für while (e>0)
} // Endklammer für e—-

//Anpassen von GERADEAUS auf Rechtsdrehung (nur Servo8: 100>140)=============================

     { while (f>0)   
{ f--; 
for (pos = 100; pos <=140; pos +=1) { 
myservo8.write(pos); // 100>140
delay(10);
}
} // Endklammer für while (f>0)
} // Endklammer für f—-

// RECHTSDREHUNG =======================================================================
     
{ while (g>0)   
{ g--; 

//Tripod Gait vertikal 1
for (pos = 90; pos >=70; pos -=1) {  //VertikalDrehung
myservo2.write(120);   //  120 Bein tief
myservo9.write(60);            //  60 Bein tief
myservo10.write(120);   //  120 Bein tief
myservo5.write(160 - pos);  // 70>90 Bein tief>hoch: vertikal 2 auf vertikal 1
myservo6.write(pos + 20);   //  110>90 Bein tief>hoch
myservo13.write(170 - pos); // 80>100 Bein tief>hoch
delay(10);
} 
//Tripod Gait horizontal 1
 
for (pos = 80; pos >=40; pos -=1) {  // Horizontaldrehung hin 
myservo3.write(pos); //  80>40 Dreht im Uhrzeiger mit                 tiefem Bein=hin
myservo8.write(pos + 60); // 140>100 Dreht im Uhrzeiger mit tiefem Bein=hin
myservo11.write(pos + 10); //  90>50 Dreht im Uhrzeiger mit            tiefem Bein=hin
myservo4.write(pos + 60); // 140>100 Dreht im  Uhrzeiger mit          hohem Bein=zurück
myservo7.write(120 - pos); //  40>80 Dreht im GegenUhrzeiger mit       hohem Bein=zurück
myservo12.write(pos + 80); // 160>120  Dreht im Uhrzeiger mit        hohem Bein=zurück
delay(10);
} 

//Tripod Gait vertikal 2
 
//VertikalDrehung    Servos 5,6,13=tief zusammen mit Servos2,9,10=tief
for (pos = 70; pos <=90; pos +=1) {  

myservo5.write(160 - pos); // 90>70      Bein hoch>tief=hin
myservo6.write(pos + 20); // 90>110       Bein hoch>tief=hin
myservo13.write(170 - pos); // 100>80     Bein hoch>tief=hin
delay(10);
}

//Tripod Gait vertikal 3
 
//VertikalDrehung  Servos 2,9,10=hoch; Servos 5,6,13=tief
for (pos = 70; pos <=90; pos +=1) {  
myservo2.write(190 - pos); // 120>100      Bein tief>hoch=zurück
myservo9.write(pos - 10); // 60>80             Bein tief>hochhoch=zurück
myservo10.write(190 - pos); // 120>100    Bein tief>hoch=zurück
delay(10);}

//Tripod Gait horizontal 2
 
  for (pos = 40; pos <=80; pos +=1) {  // Horizontaldrehung zurück
myservo3.write(pos + 10);       //  50>90 im GegenUhrzeiger mit          hohem Bein=zurück
myservo8.write(pos + 60); // 100>140 im GegenUhrzeiger                    hohem Bein=zurück
myservo11.write(pos + 10);       //  50>90 im GegenUhrzeiger             hohem Bein=zurück
myservo4.write(pos + 60); // 100>140 im GegenUhrzeiger mit          tiefem Bein=hin
myservo7.write(120 - pos);  //  80>40 im  Uhrzeiger mit.             tiefem Bein=hin
myservo12.write(pos + 80); // 120>160  GegenUhrzeiger mit.            tiefem Bein=hin 
delay(10);
} 
 

//Tripod Gait vertikal 4
 
//VertikalDrehung  Servos 2,9,10 und Servos 5,6,13 sind alle tief, wie vertikal1 verlangt
for (pos = 70; pos <=90; pos +=1) {  
myservo2.write(pos + 30 ); // 100>120      Bein hoch>tief
myservo9.write( 150 - pos); // 80>60             Bein hoch>tief
myservo10.write( pos + 30); // 100>120    Bein hoch>tief
delay(10);
}
} // Endklammer für while (g>0)
} // Endklammer für g—-

//Anpassen von RESCHTSDREHUNG auf GERADEAUS
// Servo8 (140>100)==============================================================================
     
     { while (h>0)   
{ h--; 

for (pos = 140; pos >=100; pos -=1) {  
myservo8.write(pos); //140>100
delay(10);
}
} // Endklammer für while (h>0)
} // Endklammer für h—-


// GERADEAUS==================================================================================
    { while (i>0)   
{ i--; 
//Tripod Gait vertikal 1
for (pos = 90; pos >=70; pos -=1) {  //VertikalDrehung
myservo2.write(120);   //  120 Bein tief
myservo9.write(60);            //  60 Bein tief
myservo10.write(120);   //  120 Bein tief
myservo5.write(160 - pos);  // 70>90 Bein tief>hoch: vertikal 2 auf vertikal 1
myservo6.write(pos + 20);   //  110>90 Bein tief>hoch
myservo13.write(170 - pos); // 80>100 Bein tief>hoch
delay(10);
} 
//Tripod Gait horizontal 1
 
for (pos = 80; pos >=40; pos -=1) {  // Horizontaldrehung hin 
myservo3.write(pos); //  80>40 Dreht im Uhrzeiger mit                 tiefem Bein=hin
myservo8.write(180 - pos); // 100>140 Dreht im GegenUhrzeiger mit tiefem Bein=hin
myservo11.write(pos + 10); //  90>50 Dreht im Uhrzeiger mit            tiefem Bein=hin
myservo4.write(pos + 60); // 140>100 Dreht im  Uhrzeiger mit          hohem Bein=zurück
myservo7.write(120 - pos); //  40>80 Dreht im GegenUhrzeiger mit       hohem Bein=zurück
myservo12.write(pos + 80); // 160>120  Dreht im Uhrzeiger mit        hohem Bein=zurück
delay(10);
} 

//Tripod Gait vertikal 2
 
//VertikalDrehung    Servos 5,6,13=tief zusammen mit Servos2,9,10=tief
for (pos = 70; pos <=90; pos +=1) {  

myservo5.write(160 - pos); // 90>70      Bein hoch>tief=hin
myservo6.write(pos + 20); // 90>110       Bein hoch>tief=hin
myservo13.write(170 - pos); // 100>80     Bein hoch>tief=hin
delay(10);
}

//Tripod Gait vertikal 3
 
//VertikalDrehung  Servos 2,9,10=hoch; Servos 5,6,13=tief
for (pos = 70; pos <=90; pos +=1) {  
myservo2.write(190 - pos); // 120>100      Bein tief>hoch=zurück
myservo9.write(pos - 10); // 60>80             Bein tief>hochhoch=zurück
myservo10.write(190 - pos); // 120>100    Bein tief>hoch=zurück
delay(10);}

//Tripod Gait horizontal 2
 
  for (pos = 40; pos <=80; pos +=1) {  // Horizontaldrehung zurück
myservo3.write(pos + 10);       //  50>90 im GegenUhrzeiger mit          hohem Bein=zurück
myservo8.write(180 - pos); // 140>100 im Uhrzeiger                    hohem Bein=zurück
myservo11.write(pos + 10);       //  50>90 im GegenUhrzeiger             hohem Bein=zurück
myservo4.write(pos + 60); // 100>140 im GegenUhrzeiger mit          tiefem Bein=hin
myservo7.write(120 - pos);  //  80>40 im  Uhrzeiger mit.             tiefem Bein=hin
myservo12.write(pos + 80); // 120>160  GegenUhrzeiger mit.            tiefem Bein=hin 
delay(10);
} 
 

//Tripod Gait vertikal 4
 
//VertikalDrehung  Servos 2,9,10 und Servos 5,6,13 sind alle tief, wie vertikal1 verlangt
for (pos = 70; pos <=90; pos +=1) {  
myservo2.write(pos + 30 ); // 100>120      Bein hoch>tief
myservo9.write( 150 - pos); // 80>60             Bein hoch>tief
myservo10.write( pos + 30); // 100>120    Bein hoch>tief
delay(10);
}

} // Endklammer für while (i>0)
} // Endklammer für i—-


 //==========================================================================================
 // Anpassen von von GERADEAUS auf LINKSDREHUNG: (Servo7 40>80)

    { while (j>0)   
{ j--; 

for (pos = 40; pos <=80; pos +=1) {
 myservo7.write(pos); // 40>80 
 delay(10);
}
} // Endklammer für while (j>0)
} // Endklammer für j—-

// LINKSDREHUNG====================================================================
     { while (k>0)   
{ k--; 
//Tripod Gait vertikal 1
for (pos = 90; pos >=70; pos -=1) {  //VertikalDrehung
myservo2.write(120);   //  120 Bein tief
myservo9.write(60);            //  60 Bein tief
myservo10.write(120);   //  120 Bein tief
myservo5.write(160 - pos);  // 70>90 Bein tief>hoch: vertikal 2 auf vertikal 1
myservo6.write(pos + 20);   //  110>90 Bein tief>hoch
myservo13.write(170 - pos); // 80>100 Bein tief>hoch
delay(10);
} 
//Tripod Gait horizontal 1
 
for (pos = 80; pos >=40; pos -=1) {  // Horizontaldrehung hin 
myservo3.write(pos); //  80>40 Dreht im Uhrzeiger mit                 tiefem Bein=hin
myservo8.write(180 - pos); // 100>140 Dreht im GegenUhrzeiger mit tiefem Bein=hin
myservo11.write(pos + 10); //  90>50 Dreht im Uhrzeiger mit            tiefem Bein=hin
myservo4.write(pos + 60); // 140>100 Dreht im  Uhrzeiger mit          hohem Bein=zurück
myservo7.write(pos); //  80>40 Dreht im Uhrzeiger mit       hohem Bein=zurück
myservo12.write(pos + 80); // 160>120  Dreht im Uhrzeiger mit        hohem Bein=zurück
delay(10);
} 

//Tripod Gait vertikal 2
 
//VertikalDrehung    Servos 5,6,13=tief zusammen mit Servos2,9,10=tief
for (pos = 70; pos <=90; pos +=1) {  

myservo5.write(160 - pos); // 90>70      Bein hoch>tief=hin
myservo6.write(pos + 20); // 90>110       Bein hoch>tief=hin
myservo13.write(170 - pos); // 100>80     Bein hoch>tief=hin
delay(10);
}

//Tripod Gait vertikal 3
 
//VertikalDrehung  Servos 2,9,10=hoch; Servos 5,6,13=tief
for (pos = 70; pos <=90; pos +=1) {  
myservo2.write(190 - pos); // 120>100      Bein tief>hoch=zurück
myservo9.write(pos - 10); // 60>80             Bein tief>hochhoch=zurück
myservo10.write(190 - pos); // 120>100    Bein tief>hoch=zurück
delay(10);
}

//Tripod Gait horizontal 2
 
  for (pos = 40; pos <=80; pos +=1) {  // Horizontaldrehung zurück
myservo3.write(pos + 10);       //  50>90 im GegenUhrzeiger mit          hohem Bein=zurück
myservo8.write(180 - pos); // 140>100 im Uhrzeiger                    hohem Bein=zurück
myservo11.write(pos + 10);       //  50>90 im GegenUhrzeiger             hohem Bein=zurück
myservo4.write(pos + 60); // 100>140 im GegenUhrzeiger mit          tiefem Bein=hin
myservo7.write(pos);  //  40>80 im  GEGENUhrzeiger mit.             tiefem Bein=hin
myservo12.write(pos + 80); // 120>160  GegenUhrzeiger mit.            tiefem Bein=hin 
delay(10);
} 
 
//Tripod Gait vertikal 4
 
//VertikalDrehung  Servos 2,9,10 und Servos 5,6,13 sind alle tief, wie vertikal1 verlangt
for (pos = 70; pos <=90; pos +=1) {  
myservo2.write(pos + 30 ); // 100>120      Bein hoch>tief
myservo9.write( 150 - pos); // 80>60             Bein hoch>tief
myservo10.write( pos + 30); // 100>120    Bein hoch>tief
delay(10);
}
} // Endklammer für while (k>0)
} // Endklammer für k—-

//==========================================================================================================================================
// Anpassen von LINKSDREHUNG auf GERADEAUS: (Servo7 80>40)


    { while (l>0)   
{ l--; 

for (pos = 80; pos >=40; pos -=1) {
 myservo7.write(pos); // 80>40 
 delay(10);
}
} // Endklammer für while (l>0)
} // Endklammer für l—-

//=====================================================================================================================================
// GERADEAUS und RUECKWAERTS
// GERADEAUS = VORWAERTS

    { while (m>0)   
{ m--; 
  
//Tripod Gait vertikal 1
for (pos = 90; pos >=70; pos -=1) {  //VertikalDrehung
myservo2.write(120);   //  120 Bein tief
myservo9.write(60);            //  60 Bein tief
myservo10.write(120);   //  120 Bein tief
myservo5.write(160 - pos);  // 70>90 Bein tief>hoch: vertikal 2 auf vertikal 1
myservo6.write(pos + 20);   //  110>90 Bein tief>hoch
myservo13.write(170 - pos); // 80>100 Bein tief>hoch
delay(10);
} 
//Tripod Gait horizontal 1
 
for (pos = 80; pos >=40; pos -=1) {  // Horizontaldrehung hin 
myservo3.write(pos); //  80>40 Dreht im Uhrzeiger mit                 tiefem Bein=hin
myservo8.write(180 - pos); // 100>140 Dreht im GegenUhrzeiger mit tiefem Bein=hin
myservo11.write(pos + 10); //  90>50 Dreht im Uhrzeiger mit            tiefem Bein=hin
myservo4.write(pos + 60); // 140>100 Dreht im  Uhrzeiger mit          hohem Bein=zurück
myservo7.write(120 - pos); //  40>80 Dreht im GegenUhrzeiger mit       hohem Bein=zurück
myservo12.write(pos + 80); // 160>120  Dreht im Uhrzeiger mit        hohem Bein=zurück
delay(10);
} 

//Tripod Gait vertikal 2
 
//VertikalDrehung    Servos 5,6,13=tief zusammen mit Servos2,9,10=tief
for (pos = 70; pos <=90; pos +=1) {  

myservo5.write(160 - pos); // 90>70      Bein hoch>tief=hin
myservo6.write(pos + 20); // 90>110       Bein hoch>tief=hin
myservo13.write(170 - pos); // 100>80     Bein hoch>tief=hin
delay(10);
}

//Tripod Gait vertikal 3
 
//VertikalDrehung  Servos 2,9,10=hoch; Servos 5,6,13=tief
for (pos = 70; pos <=90; pos +=1) {  
myservo2.write(190 - pos); // 120>100      Bein tief>hoch=zurück
myservo9.write(pos - 10); // 60>80             Bein tief>hochhoch=zurück
myservo10.write(190 - pos); // 120>100    Bein tief>hoch=zurück
delay(10);}

//Tripod Gait horizontal 2
 
  for (pos = 40; pos <=80; pos +=1) {  // Horizontaldrehung zurück
myservo3.write(pos + 10);       //  50>90 im GegenUhrzeiger mit          hohem Bein=zurück
myservo8.write(180 - pos); // 140>100 im Uhrzeiger                    hohem Bein=zurück
myservo11.write(pos + 10);       //  50>90 im GegenUhrzeiger             hohem Bein=zurück
myservo4.write(pos + 60); // 100>140 im GegenUhrzeiger mit          tiefem Bein=hin
myservo7.write(120 - pos);  //  80>40 im  Uhrzeiger mit.             tiefem Bein=hin
myservo12.write(pos + 80); // 120>160  GegenUhrzeiger mit.            tiefem Bein=hin 
delay(10);
} 
 

//Tripod Gait vertikal 4
 
//VertikalDrehung  Servos 2,9,10 und Servos 5,6,13 sind alle tief, wie vertikal1 verlangt
for (pos = 70; pos <=90; pos +=1) {  
myservo2.write(pos + 30 ); // 100>120      Bein hoch>tief
myservo9.write( 150 - pos); // 80>60             Bein hoch>tief
myservo10.write( pos + 30); // 100>120    Bein hoch>tief
delay(10);
}


// RUECKWAERTS====================================================================================================

//Tripod Gait Rückwärts vertikal 1
for (pos = 90; pos >=70; pos -=1) {  //VertikalDrehung
myservo2.write(pos + 30);             // 120>100 Bein tief>hoch
myservo9.write(150 - pos);            //  60>80 Bein tief>hoch 
myservo10.write(pos + 30);            //120>100 Bein tief>hoch
myservo5.write(70);                 // 70 Bein bleibt tief 
myservo6.write(110);                //  110 Bein bleibt tief 
myservo13.write(80);                // 80 Bein bleibt tief 
delay(10);
}   

//Tripod Gait Rückwärts horizontal 1
for (pos = 80; pos >=40; pos -=1) {  // Horizontaldrehung hin 
myservo3.write(pos); //  80>40 Dreht im Uhrzeiger mit              hohem Bein=vorne nach >hinten
myservo8.write(180 - pos); // 100>140 Dreht im GegenUhrzeiger mit  hohemBein=vorne>hinten
myservo11.write(pos + 10); //  90>50 Dreht im Uhrzeiger mit        hohem Bein=vorne>hinten
myservo4.write(pos + 60); // 140>100 Dreht im  Uhrzeiger mit       tiefem Bein=von hinten nach vorne
myservo7.write(120 - pos); //  40>80 Dreht im GegenUhrzeiger mit   tiefem Bein=hinten>vorne
myservo12.write(pos + 80); // 160>120  Dreht im Uhrzeiger mit      tiefem Bein=hinten>vorne
delay(10);
} 

//Tripod Gait Rückwärts vertikal 2
//VertikalDrehung    vServos 5,6,13 & 2,9,10=tief
for (pos = 100; pos <=120; pos +=1) {  //VertikalDrehung
myservo2.write(pos);             // 100>120 Bein hoch>tief
myservo9.write(180 - pos);       //   80>60 Bein hoch>tief
myservo10.write(pos);           // 100>120 Bein hoch>tief
delay(10);
}

//Tripod Gait Rückwärts vertikal 3
//vServos5,6,13 tief>hoch
for (pos = 70; pos <=90; pos +=1) {  
myservo5.write(pos );       // 70>90   Bein tief>hoch
myservo6.write(180 - pos); // 110>90   Bein tief>hoch
myservo13.write(pos + 10 ); // 80>100  Bein tief>hoch
delay(10);
}

//Tripod Gait Rückwärts horizontal 2
for (pos = 40; pos <=80; pos +=1) {  // Horizontaldrehung zurück
myservo3.write(pos + 10);       //  50>90 im GegenUhrzeiger mit     tiefemBein=hinten>vorne
myservo8.write(180 - pos); // 140>100 im Uhrzeiger                  teifem Bein=hinten>vorne
myservo11.write(pos + 10);       //  50>90 im GegenUhrzeiger        tiefem Bein=hinten>vorne
myservo4.write(pos + 60); // 100>140 im GegenUhrzeiger mit         hohem Bein=vorne>hinten
myservo7.write(120 - pos);  //  80>40 im  Uhrzeiger mit.           hohem Bein=vorne>hinten
myservo12.write(pos + 80); // 120>160  GegenUhrzeiger mit.         hohem Bein=vorne>hinten
delay(10);
} 
 
//Tripod Gait Rückwärts vertikal 4
for (pos = 90; pos >=70; pos -=1) {  
myservo5.write(pos ); // 90>70            Bein  hoch>tief
myservo6.write(180 - pos); // 90>110      Bein  hoch>tief
myservo13.write(pos + 10 ); // 100>80     Bein  hoch>tief
delay(10);
}

//RUECKWAERTS===============================================================================

//Tripod Gait Rückwärts vertikal 1
for (pos = 90; pos >=70; pos -=1) {  //VertikalDrehung
myservo2.write(pos + 30);             // 120>100 Bein tief>hoch
myservo9.write(150 - pos);            //  60>80 Bein tief>hoch 
myservo10.write(pos + 30);            //120>100 Bein tief>hoch
myservo5.write(70);                 // 70 Bein bleibt tief 
myservo6.write(110);                //  110 Bein bleibt tief 
myservo13.write(80);                // 80 Bein bleibt tief 
delay(10);
}   

//Tripod Gait Rückwärts horizontal 1
for (pos = 80; pos >=40; pos -=1) {  // Horizontaldrehung hin 
myservo3.write(pos); //  80>40 Dreht im Uhrzeiger mit              hohem Bein=vorne nach >hinten
myservo8.write(180 - pos); // 100>140 Dreht im GegenUhrzeiger mit  hohemBein=vorne>hinten
myservo11.write(pos + 10); //  90>50 Dreht im Uhrzeiger mit        hohem Bein=vorne>hinten
myservo4.write(pos + 60); // 140>100 Dreht im  Uhrzeiger mit       tiefem Bein=von hinten nach vorne
myservo7.write(120 - pos); //  40>80 Dreht im GegenUhrzeiger mit   tiefem Bein=hinten>vorne
myservo12.write(pos + 80); // 160>120  Dreht im Uhrzeiger mit      tiefem Bein=hinten>vorne
delay(10);
} 

//Tripod Gait Rückwärts vertikal 2
//VertikalDrehung    vServos 5,6,13 & 2,9,10=tief
for (pos = 100; pos <=120; pos +=1) {  //VertikalDrehung
myservo2.write(pos);             // 100>120 Bein hoch>tief
myservo9.write(180 - pos);       //   80>60 Bein hoch>tief
myservo10.write(pos);           // 100>120 Bein hoch>tief
delay(10);
}

//Tripod Gait Rückwärts vertikal 3
//vServos5,6,13 tief>hoch
for (pos = 70; pos <=90; pos +=1) {  
myservo5.write(pos );       // 70>90   Bein tief>hoch
myservo6.write(180 - pos); // 110>90   Bein tief>hoch
myservo13.write(pos + 10 ); // 80>100  Bein tief>hoch
delay(10);
}

//Tripod Gait Rückwärts horizontal 2
for (pos = 40; pos <=80; pos +=1) {  // Horizontaldrehung zurück
myservo3.write(pos + 10);       //  50>90 im GegenUhrzeiger mit     tiefemBein=hinten>vorne
myservo8.write(180 - pos); // 140>100 im Uhrzeiger                  teifem Bein=hinten>vorne
myservo11.write(pos + 10);       //  50>90 im GegenUhrzeiger        tiefem Bein=hinten>vorne
myservo4.write(pos + 60); // 100>140 im GegenUhrzeiger mit         hohem Bein=vorne>hinten
myservo7.write(120 - pos);  //  80>40 im  Uhrzeiger mit.           hohem Bein=vorne>hinten
myservo12.write(pos + 80); // 120>160  GegenUhrzeiger mit.         hohem Bein=vorne>hinten
delay(10);
} 
 
//Tripod Gait Rückwärts vertikal 4
for (pos = 90; pos >=70; pos -=1) {  
myservo5.write(pos ); // 90>70            Bein  hoch>tief
myservo6.write(180 - pos); // 90>110      Bein  hoch>tief
myservo13.write(pos + 10 ); // 100>80     Bein  hoch>tief
delay(10);
}
// GERADEAUS========================================================================
//Tripod Gait vertikal 1
for (pos = 90; pos >=70; pos -=1) {  //VertikalDrehung
myservo2.write(120);   //  120 Bein tief
myservo9.write(60);            //  60 Bein tief
myservo10.write(120);   //  120 Bein tief
myservo5.write(160 - pos);  // 70>90 Bein tief>hoch: vertikal 2 auf vertikal 1
myservo6.write(pos + 20);   //  110>90 Bein tief>hoch
myservo13.write(170 - pos); // 80>100 Bein tief>hoch
delay(10);
} 
//Tripod Gait horizontal 1
 
for (pos = 80; pos >=40; pos -=1) {  // Horizontaldrehung hin 
myservo3.write(pos); //  80>40 Dreht im Uhrzeiger mit                 tiefem Bein=hin
myservo8.write(180 - pos); // 100>140 Dreht im GegenUhrzeiger mit tiefem Bein=hin
myservo11.write(pos + 10); //  90>50 Dreht im Uhrzeiger mit            tiefem Bein=hin
myservo4.write(pos + 60); // 140>100 Dreht im  Uhrzeiger mit          hohem Bein=zurück
myservo7.write(120 - pos); //  40>80 Dreht im GegenUhrzeiger mit       hohem Bein=zurück
myservo12.write(pos + 80); // 160>120  Dreht im Uhrzeiger mit        hohem Bein=zurück
delay(10);
} 

//Tripod Gait vertikal 2
 
//VertikalDrehung    Servos 5,6,13=tief zusammen mit Servos2,9,10=tief
for (pos = 70; pos <=90; pos +=1) {  

myservo5.write(160 - pos); // 90>70      Bein hoch>tief=hin
myservo6.write(pos + 20); // 90>110       Bein hoch>tief=hin
myservo13.write(170 - pos); // 100>80     Bein hoch>tief=hin
delay(10);
}

//Tripod Gait vertikal 3
 
//VertikalDrehung  Servos 2,9,10=hoch; Servos 5,6,13=tief
for (pos = 70; pos <=90; pos +=1) {  
myservo2.write(190 - pos); // 120>100      Bein tief>hoch=zurück
myservo9.write(pos - 10); // 60>80             Bein tief>hochhoch=zurück
myservo10.write(190 - pos); // 120>100    Bein tief>hoch=zurück
delay(10);}

//Tripod Gait horizontal 2
 
  for (pos = 40; pos <=80; pos +=1) {  // Horizontaldrehung zurück
myservo3.write(pos + 10);       //  50>90 im GegenUhrzeiger mit          hohem Bein=zurück
myservo8.write(180 - pos); // 140>100 im Uhrzeiger                    hohem Bein=zurück
myservo11.write(pos + 10);       //  50>90 im GegenUhrzeiger             hohem Bein=zurück
myservo4.write(pos + 60); // 100>140 im GegenUhrzeiger mit          tiefem Bein=hin
myservo7.write(120 - pos);  //  80>40 im  Uhrzeiger mit.             tiefem Bein=hin
myservo12.write(pos + 80); // 120>160  GegenUhrzeiger mit.            tiefem Bein=hin 
delay(10);
} 
 

//Tripod Gait vertikal 4
 
//VertikalDrehung  Servos 2,9,10 und Servos 5,6,13 sind alle tief, wie vertikal1 verlangt
for (pos = 70; pos <=90; pos +=1) {  
myservo2.write(pos + 30 ); // 100>120      Bein hoch>tief
myservo9.write( 150 - pos); // 80>60             Bein hoch>tief
myservo10.write( pos + 30); // 100>120    Bein hoch>tief
delay(10);
}
} // Endklammer für while (m>0)
} // Endklammer für m—-

//===============================================================================================================
//Anpassen von GERADEAUS auf HIN und HER
//Anpassen der horizontalen Servos4(140>120),8 (100>120),12 (150>120),3(80>70),7 (40>70),11(80>70) an Hin und Her Startposition

    { while (n>0)   
{ n--; 

for (pos = 150; pos >=120; pos -=1) {
myservo12.write(pos);         //150>120
myservo7.write(190 - pos);    //40>70
delay(10);
} 
for (pos = 140; pos >=120; pos -=1) {
myservo4.write(pos); //140>120
myservo8.write(240 - pos); //100>120
delay(10); 
}
for (pos = 80; pos >=70; pos -=1) {
myservo3.write(pos); //80>70
myservo11.write(pos); //80>70
delay(10); 
}
} // Endklammer für while (n>0)
} // Endklammer für n--

// ===========================================================================================================================
// HIN und HER
    { while (o>0)   
{ o--; 


for (pos = 110; pos >=40; pos -=1) {  //VertikalDrehung
myservo4.write(120); //parallel zur Längsrichtung (von 140>20)
myservo5.write(70); // tief
myservo8.write(120); //parallel zur Längsrichtung (von 100>120)
myservo9.write(60); // tief
myservo12.write(120); //parallel zur Längsrichtung (von 150>120)
myservo13.write(80); //tief: 60 musste addiert werden, damit dass Bein nicht an die Platte stiess

myservo2.write(120); // tief
myservo3.write(70);   //parallel zur Längsrichtung (von 80>70)
myservo6.write(110); //tief
myservo7.write(70);    //parallel zur Längsrichtung (von 40>70)
myservo10.write(120); //tief
myservo11.write(70);    //parallel zur Längsrichtung (von 80>70))
delay(10);
} 
//HinUndHer Nr1
//Neigung nach links Beine2,6,10 gleichzeitig heben. Beine5,9,13 gleichzeitig senken verstärkt die Neiging

for (pos = 120; pos >=90; pos -=1) {  //Hebung  von Servo5,6,13. Servos2,9,11 bleiben unten
myservo2.write(pos); // 120>90 geht hoch
myservo6.write(pos - 10); // 110>80 geht hoch
myservo10.write(pos); //120>90 geht hoch
myservo5.write(pos - 50);      //70>40 geht 30 tiefer      
myservo9.write(pos - 60);      //60>30 geht 30 tiefer  
myservo13.write(pos - 40);  // 80>50 geht 30 tiefer      
delay(10);
} 
//Neiging nach rechts Beine2,6,10 60Grad tiefer bei fast 6 Uhr. Beine 5,9,13 60Grad höher bei fast 3 Uhr

for (pos = 90; pos <=150; pos +=1) {  //Hebung  von Servo5,6,13. Servos2,9,11 bleiben unten
myservo2.write(pos); // geht tief 90>150
myservo6.write(pos - 10); //  geht tief 80>140
myservo10.write(pos); // geht tief 90> 150
myservo5.write(pos - 50);      //  geht hoch 40>100      
myservo9.write(pos - 60);      //geht hoch 30>90  
myservo13.write(pos - 40);  // geht hoch 50>110   
delay(10);
} 
// HinUndHer Nr2
for (pos = 150; pos >=90; pos -=1) {  //Hebung  von Servo5,6,13. Servos2,9,11 bleiben unten
myservo2.write(pos); // geht hoch 150>90
myservo6.write(pos - 10); //  geht hoch 140>80
myservo10.write(pos); // geht hoch 150>90
myservo5.write(pos - 50);      //  geht tief 100>40      
myservo9.write(pos - 60);      //geht tief 90>30  
myservo13.write(pos - 40);  // geht tief 110>50  
delay(10);
} 
//Neigung nach rechts
for (pos = 90; pos <=150; pos +=1) {  //Hebung  von Servo5,6,13. Servos2,9,11 bleiben unten
myservo2.write(pos); // geht tief 90>150
myservo6.write(pos - 10); //  geht tief 80>140
myservo10.write(pos); // geht tief 90> 150
myservo5.write(pos - 50);      //  geht hoch 40>100      
myservo9.write(pos - 60);      //geht hoch 30>90  
myservo13.write(pos - 40);  // geht hoch 50>110   
delay(10);
} 
// HinUndHer Nr3
for (pos = 150; pos >=90; pos -=1) {  //Hebung  von Servo5,6,13. Servos2,9,11 bleiben unten
myservo2.write(pos); // geht hoch 150>90
myservo6.write(pos - 10); //  geht hoch 140>80
myservo10.write(pos); // geht hoch 150>90
myservo5.write(pos - 50);      //  geht tief 100>40      
myservo9.write(pos - 60);      //geht tief 90>30  
myservo13.write(pos - 40);  // geht tief 110>50  
delay(10);
} 
//Neigung nach rechts
for (pos = 90; pos <=150; pos +=1) {  //Hebung  von Servo5,6,13. Servos2,9,11 bleiben unten
myservo2.write(pos); // geht tief 90>150
myservo6.write(pos - 10); //  geht tief 80>140
myservo10.write(pos); // geht tief 90> 150
myservo5.write(pos - 50);      //  geht hoch 40>100      
myservo9.write(pos - 60);      //geht hoch 30>90  
myservo13.write(pos - 40);  // geht hoch 50>110   
delay(10);
} 

//Neigung zurück auf Startwerte

for (pos = 150; pos >=120; pos -=1) {  //Hebung  von Servo5,6,13. Servos2,9,11 bleiben unten
myservo2.write(pos); // geht hoch 150>120
myservo6.write(pos -10); //  geht hoch 140>110
myservo10.write(pos); // geht hoch 150>120
myservo5.write(pos - 50);      //  geht tief 100>70     
myservo9.write(pos - 60);      //geht tief 90>60 
myservo13.write(pos - 40);  // geht tief 110>80   
delay(10);
} 
} // Endklammer für while (o>0)
} // Endklammer für o--

// =======================================================================================
// BEINE auf und Ab

    { while (p>0)   
{ p--; 
// Servo2 Auf/Ab====================================
for (pos = 120; pos >=90; pos -=1) {   
myservo2.write(pos); // 120>90 geht hoch
delay(10);
} 
for (pos = 90; pos <=120; pos +=1) {   
myservo2.write(pos); // 90>120 geht tief
delay(10);
} 
// Servo5 Auf/Ab 70>110================================
for (pos = 70; pos <=110; pos +=1) {   
myservo5.write(pos); // 70>110 geht hoch
delay(10);
} 
for (pos = 110; pos >=70; pos -=1) {   
myservo5.write(pos); // 110>70 geht hoch
delay(10);
} 
//Servo6 Auf/Ab=======================================
for (pos = 110; pos >=70; pos -=1) {   
myservo6.write(pos); // 110>70 geht hoch
delay(10);
} 
for (pos = 70; pos <=110; pos +=1) {   
myservo6.write(pos); // 70>110 geht tief
delay(10);
} 

//Servo9 Auf/Ab 60>90================================
for (pos = 60; pos <=90; pos +=1) {   
myservo9.write(pos); // 60>90 geht hoch
delay(10);
} 
for (pos = 90; pos >=60; pos -=1) {   
myservo9.write(pos); // 90>60 geht tief
delay(10);
} 

//Servo10 Auf 120>90 und Ab============================ 
for (pos = 120; pos >=90; pos -=1) {   
myservo10.write(pos); // 120>90 geht hoch
delay(10);
} 
for (pos = 90; pos <=120; pos +=1) {   
myservo10.write(pos); // 90>120 geht tief
delay(10);
} 
////Servo13 Auf 80>110 und Ab============================ 
for (pos = 80; pos <=110; pos +=1) {   
myservo13.write(pos); // 80>110 geht hoch
delay(10);
} 
for (pos = 110; pos >=80; pos -=1) {   
myservo13.write(pos); // 90>110 geht tief
delay(10);
} 
} // Endklammer für while (o>0)
} // Endklammer für o--
} 







 
