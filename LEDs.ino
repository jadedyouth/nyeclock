void blackh () { 
for (int i = 0; i< 23; i++){
leds[a8[i]] = CHSV (160, 255, 0);
leds[b8[i]] = CHSV (160, 255, 0);
}
LEDS.show(); }

void blackm () { 
for (int i = 0; i< 23; i++){
leds[c8[i]] = CHSV (160, 255, 0);
leds[d8[i]] = CHSV (160, 255, 0); }
LEDS.show(); }

void dots () {
leds[64] = CHSV (huee, 255, 255);
leds[65] = CHSV (huee, 255, 255);
  
}

void twenty17 (){

leds[64] = CHSV (huee, 255, 0);
leds[65] = CHSV (huee, 255, 0);
  
for (int i = 0; i< z10; i++){
leds[two017[i]] = CHSV (hue2017, 255, 255); hue2017++;  }
LEDS.show(); 
delay (150);

}

void on (){

 //turn on the middle colon

//GET TIME FROM RTC
byte second, minute, hour, dayOfWeek, day, month, year;
  // retrieve data from DS3231
  readDS3231time(&second, &minute, &hour, &dayOfWeek, &day, &month,
  &year);



//AT MIDNIGHT
if (month == 1 && day == 1 && hour == 0) {

while (sw8 == 0) { blackm (); blackh (); sw8 = 1;}

twenty17 ();
  
}



//COUNTDOWN
else if (month == 12 && day == 31 && hour == 23 ) {

dots ();
//Determine seconds, minutes remaining
sr = 60 - second;
if (sr == 60){sr = 0;}
mr = 60 - minute;
if (mr == 60) {mr = 0;}

 //clear the leds between seconds
sw4 = sr;
if (sw4!= sw5) {
  blackm (); 
  huec = huec + 45; hued = hued + 45; 
  sw5 = sw4;
}
//display seconds
switch (sr) {

 case 0:    m00 ();  break;  
 case 1:    m01 ();  break;  
 case 2:    m02 ();  break; 
 case 3:    m03 ();  break; 
 case 4:    m04 ();  break; 
 case 5:    m05 ();  break; 
 case 6:    m06 ();  break; 
 case 7:    m07 ();  break;  
 case 8:    m08 ();  break; 
 case 9:    m09 ();  break; 
 case 10:   m10 ();  break; 
 case 11:   m11 ();  break;  
 case 12:   m12 ();  break; 
 case 13:   m13 ();  break; 
 case 14:   m14 ();  break; 
 case 15:   m15 ();  break; 
 case 16:   m16 ();  break; 
 case 17:   m17 ();  break;  
 case 18:   m18 ();  break; 
 case 19:   m19 ();  break; 
 case 20:   m20 ();  break; 
 case 21:   m21 ();  break;  
 case 22:   m22 ();  break; 
 case 23:   m23 ();  break; 
 case 24:   m24 ();  break; 
 case 25:   m25 ();  break; 
 case 26:   m26 ();  break; 
 case 27:   m27 ();  break;  
 case 28:   m28 ();  break; 
 case 29:   m29 ();  break;
 case 30:   m30 ();  break; 
 case 31:   m31 ();  break;  
 case 32:   m32 ();  break; 
 case 33:   m33 ();  break; 
 case 34:   m34 ();  break; 
 case 35:   m35 ();  break; 
 case 36:   m36 ();  break; 
 case 37:   m37 ();  break;  
 case 38:   m38 ();  break; 
 case 39:   m39 ();  break;  
 case 40:   m40 ();  break; 
 case 41:   m41 ();  break;  
 case 42:   m42 ();  break; 
 case 43:   m43 ();  break; 
 case 44:   m44 ();  break; 
 case 45:   m45 ();  break; 
 case 46:   m46 ();  break; 
 case 47:   m47 ();  break;  
 case 48:   m48 ();  break; 
 case 49:   m49 ();  break; 
 case 50:   m50 ();  break; 
 case 51:   m51 ();  break;  
 case 52:   m52 ();  break; 
 case 53:   m53 ();  break; 
 case 54:   m54 ();  break; 
 case 55:   m55 ();  break; 
 case 56:   m56 ();  break; 
 case 57:   m57 ();  break;  
 case 58:   m58 ();  break; 
 case 59:   m59 ();  break;  
 break;
 }



// clear the leds between minutes
sw6 = mr;
if (sw6!= sw7) {
  blackh (); 
  huea = huea + 45; hueb = hueb + 45; huee = huee + 45; 
  sw7 = sw6;
}
//display minutes remaining
switch (mr) {


 case 0:    h00 ();  break;  
 case 1:    h01 ();  break;  
 case 2:    h02 ();  break; 
 case 3:    h03 ();  break; 
 case 4:    h04 ();  break; 
 case 5:    h05 ();  break; 
 case 6:    h06 ();  break; 
 case 7:    h07 ();  break;  
 case 8:    h08 ();  break; 
 case 9:    h09 ();  break; 
 case 10:   h10 ();  break; 
 case 11:   h11 ();  break;  
 case 12:   h12 ();  break; 
 case 13:   h13 ();  break; 
 case 14:   h14 ();  break; 
 case 15:   h15 ();  break; 
 case 16:   h16 ();  break; 
 case 17:   h17 ();  break;  
 case 18:   h18 ();  break; 
 case 19:   h19 ();  break; 
 case 20:   h20 ();  break; 
 case 21:   h21 ();  break;  
 case 22:   h22 ();  break; 
 case 23:   h23 ();  break; 
 case 24:   h24 ();  break; 
 case 25:   h25 ();  break; 
 case 26:   h26 ();  break; 
 case 27:   h27 ();  break;  
 case 28:   h28 ();  break; 
 case 29:   h29 ();  break;
 case 30:   h30 ();  break; 
 case 31:   h31 ();  break;  
 case 32:   h32 ();  break; 
 case 33:   h33 ();  break; 
 case 34:   h34 ();  break; 
 case 35:   h35 ();  break; 
 case 36:   h36 ();  break; 
 case 37:   h37 ();  break;  
 case 38:   h38 ();  break; 
 case 39:   h39 ();  break;  
 case 40:   h40 ();  break; 
 case 41:   h41 ();  break;  
 case 42:   h42 ();  break; 
 case 43:   h43 ();  break; 
 case 44:   h44 ();  break; 
 case 45:   h45 ();  break; 
 case 46:   h46 ();  break; 
 case 47:   h47 ();  break;  
 case 48:   h48 ();  break; 
 case 49:   h49 ();  break; 
 case 50:   h50 ();  break; 
 case 51:   h51 ();  break;  
 case 52:   h52 ();  break; 
 case 53:   h53 ();  break; 
 case 54:   h54 ();  break; 
 case 55:   h55 ();  break; 
 case 56:   h56 ();  break; 
 case 57:   h57 ();  break;  
 case 58:   h58 ();  break; 
 case 59:   h59 ();  break;  
 break;
 }
 
 }

//NORMAL CLOCK
else {
  dots ();
//to tirn the minute pixels black between changes
sw = minute;
if (sw!= sw1) {
  blackm ();
  huea = huea + 45; hueb = hueb + 45;  huec = huec + 45; hued = hued + 45; huee = huee + 45; 
  sw1 = sw;
}

switch (minute) {

 case 0:    m00 ();  break;  
 case 1:    m01 ();  break;  
 case 2:    m02 ();  break; 
 case 3:    m03 ();  break; 
 case 4:    m04 ();  break; 
 case 5:    m05 ();  break; 
 case 6:    m06 ();  break; 
 case 7:    m07 ();  break;  
 case 8:    m08 ();  break; 
 case 9:    m09 ();  break; 
 case 10:   m10 ();  break; 
 case 11:   m11 ();  break;  
 case 12:   m12 ();  break; 
 case 13:   m13 ();  break; 
 case 14:   m14 ();  break; 
 case 15:   m15 ();  break; 
 case 16:   m16 ();  break; 
 case 17:   m17 ();  break;  
 case 18:   m18 ();  break; 
 case 19:   m19 ();  break; 
 case 20:   m20 ();  break; 
 case 21:   m21 ();  break;  
 case 22:   m22 ();  break; 
 case 23:   m23 ();  break; 
 case 24:   m24 ();  break; 
 case 25:   m25 ();  break; 
 case 26:   m26 ();  break; 
 case 27:   m27 ();  break;  
 case 28:   m28 ();  break; 
 case 29:   m29 ();  break;
 case 30:   m30 ();  break; 
 case 31:   m31 ();  break;  
 case 32:   m32 ();  break; 
 case 33:   m33 ();  break; 
 case 34:   m34 ();  break; 
 case 35:   m35 ();  break; 
 case 36:   m36 ();  break; 
 case 37:   m37 ();  break;  
 case 38:   m38 ();  break; 
 case 39:   m39 ();  break;  
 case 40:   m40 ();  break; 
 case 41:   m41 ();  break;  
 case 42:   m42 ();  break; 
 case 43:   m43 ();  break; 
 case 44:   m44 ();  break; 
 case 45:   m45 ();  break; 
 case 46:   m46 ();  break; 
 case 47:   m47 ();  break;  
 case 48:   m48 ();  break; 
 case 49:   m49 ();  break; 
 case 50:   m50 ();  break; 
 case 51:   m51 ();  break;  
 case 52:   m52 ();  break; 
 case 53:   m53 ();  break; 
 case 54:   m54 ();  break; 
 case 55:   m55 ();  break; 
 case 56:   m56 ();  break; 
 case 57:   m57 ();  break;  
 case 58:   m58 ();  break; 
 case 59:   m59 ();  break;  
 break;
 }


sw2 = hour;
if (sw2 != sw3) {
  blackh (); 
  sw3 = sw2;
}


switch (hour) {

 case 0:    h00 ();  break;  
 case 1:    h01 ();  break;  
 case 2:    h02 ();  break; 
 case 3:    h03 ();  break; 
 case 4:    h04 ();  break; 
 case 5:    h05 ();  break; 
 case 6:    h06 ();  break; 
 case 7:    h07 ();  break;  
 case 8:    h08 ();  break; 
 case 9:    h09 ();  break; 
 case 10:   h10 ();  break; 
 case 11:   h11 ();  break;  
 case 12:   h12 ();  break; 
 case 13:   h13 ();  break; 
 case 14:   h14 ();  break; 
 case 15:   h15 ();  break; 
 case 16:   h16 ();  break; 
 case 17:   h17 ();  break;  
 case 18:   h18 ();  break; 
 case 19:   h19 ();  break; 
 case 20:   h20 ();  break; 
 case 21:   h21 ();  break;  
 case 22:   h22 ();  break; 
 case 23:   h23 ();  break; 
 case 24:   h24 ();  break; 
 break;
 }

}
}

 
 





/*  

  for (int i = 0; i< LED_COUNT; i++){
leds[i] = CHSV (160, 255, 255);
}
LEDS.show();


m00 ();
delay (500);
black ();

m01 ();
delay (500);
black ();

m02 ();
delay (500);
black ();

m03 ();
delay (500);
black ();

m04 ();
delay (500);
black ();

m05 ();
delay (500);
black ();

m06 ();
delay (500);
black ();

m07 ();
delay (500);
black ();

m08 ();
delay (500);
black ();

m09 ();
delay (500);
black ();

m10 ();
delay (500);
black ();

m11 ();
delay (500);
black ();

m12 ();
delay (500);
black ();

m13 ();
delay (500);
black ();

m14 ();
delay (500);
black ();

m15 ();
delay (500);
black ();

m16 ();
delay (500);
black ();

m17 ();
delay (500);
black ();

m18 ();
delay (500);
black ();

m19 ();
delay (500);
black ();

m20 ();
delay (500);
black ();

m21 ();
delay (500);
black ();

m22 ();
delay (500);
black ();

m23 ();
delay (500);
black ();

m24 ();
delay (500);
black ();

m25 ();
delay (500);
black ();

m26 ();
delay (500);
black ();

m27 ();
delay (500);
black ();

m28 ();
delay (500);
black ();

m29 ();
delay (500);
black ();

m30 ();
delay (500);
black ();

m31 ();
delay (500);
black ();

m32 ();
delay (500);
black ();

m33 ();
delay (500);
black ();

m34 ();
delay (500);
black ();

m35 ();
delay (500);
black ();

m36 ();
delay (500);
black ();

m37 ();
delay (500);
black ();

m38 ();
delay (500);
black ();

m39 ();
delay (500);
black ();

m40 ();
delay (500);
black ();

m41 ();
delay (500);
black ();

m42 ();
delay (500);
black ();

m43 ();
delay (500);
black ();

m44 ();
delay (500);
black ();

m45 ();
delay (500);
black ();

m46 ();
delay (500);
black ();

m47 ();
delay (500);
black ();

m48 ();
delay (500);
black ();

m49 ();
delay (500);
black ();

m50 ();
delay (500);
black ();

m51 ();
delay (500);
black ();

m52 ();
delay (500);
black ();

m53 ();
delay (500);
black ();

m54 ();
delay (500);
black ();

m55 ();
delay (500);
black ();

m56 ();
delay (500);
black ();

m57 ();
delay (500);
black ();

m58 ();
delay (500);
black ();

m59 ();
delay (500);
black ();


h00 ();
delay (500);
black ();

h01 ();
delay (500);
black ();

h02 ();
delay (500);
black ();

h03 ();
delay (500);
black ();

h04 ();
delay (500);
black ();

h05 ();
delay (500);
black ();

h06 ();
delay (500);
black ();

h07 ();
delay (500);
black ();

h08 ();
delay (500);
black ();

h09 ();
delay (500);
black ();

h10 ();
delay (500);
black ();

h11 ();
delay (500);
black ();

h12 ();
delay (500);
black ();

h13 ();
delay (500);
black ();

h14 ();
delay (500);
black ();

h15 ();
delay (500);
black ();

h16 ();
delay (500);
black ();

h17 ();
delay (500);
black ();

h18 ();
delay (500);
black ();

h19 ();
delay (500);
black ();

h20 ();
delay (500);
black ();

h21 ();
delay (500);
black ();

h22 ();
delay (500);
black ();

h23 ();
delay (500);
black ();

h24 ();
delay (500);
black ();

h25 ();
delay (500);
black ();

h26 ();
delay (500);
black ();

h27 ();
delay (500);
black ();

h28 ();
delay (500);
black ();

h29 ();
delay (500);
black ();

h30 ();
delay (500);
black ();

h31 ();
delay (500);
black ();

h32 ();
delay (500);
black ();

h33 ();
delay (500);
black ();

h34 ();
delay (500);
black ();

h35 ();
delay (500);
black ();

h36 ();
delay (500);
black ();

h37 ();
delay (500);
black ();

h38 ();
delay (500);
black ();

h39 ();
delay (500);
black ();

h40 ();
delay (500);
black ();

h41 ();
delay (500);
black ();

h42 ();
delay (500);
black ();

h43 ();
delay (500);
black ();

h44 ();
delay (500);
black ();

h45 ();
delay (500);
black ();

h46 ();
delay (500);
black ();

h47 ();
delay (500);
black ();

h48 ();
delay (500);
black ();

h49 ();
delay (500);
black ();

h50 ();
delay (500);
black ();

h51 ();
delay (500);
black ();

h52 ();
delay (500);
black ();

h53 ();
delay (500);
black ();

h54 ();
delay (500);
black ();

h55 ();
delay (500);
black ();

h56 ();
delay (500);
black ();

h57 ();
delay (500);
black ();

h58 ();
delay (500);
black ();

h59 ();
delay (500);
black ();

  for (int i = 0; i< LED_COUNT; i++){
leds[i] = CHSV (160, 255, 255);  }
LEDS.show(); 
delay (10000);
  for (int i = 0; i< LED_COUNT; i++){
leds[i] = CHSV (96, 255, 255);  }
LEDS.show(); 
delay (10000);



newvalue = second;
if (newvalue != oldvalue) {
  blackm (); 
  oldvalue = newvalue;
}

*/


