   char character='\r';
   char tempo[100];
   int i;


void setup()
{ Serial.begin(9600);
     pinMode(13,OUTPUT);
  
   
}


void loop()
{    
 if(Serial.available()>0)
   {delay(100);
    Serial.readBytesUntil(character,tempo,100);
      delay(100);
    for(i=0;tempo[i]!='\0';i++)
      { 
      switch(tempo[i])
      {
        case '\32' :
       delay(4000);
       break;
    
       case 'a' :
        morsedot();morsedash();
       break;
       case 'b' :
       morsedash();morsedot();morsedot();morsedot();
      break;
      case 'c':
        morsedot();morsedash();morsedot();morsedash();
      break;
       case 'd'  :
       morsedash();morsedot();morsedot();
      break;
       case 'e'  :
       morsedot();
      break;
       case 'f' :
       morsedot();morsedot();morsedash();morsedot();
      break;
       case 'g'  :
       morsedash();morsedash();morsedot();
      break;
       case 'h'  :
       morsedot();morsedot();morsedot();morsedot();
      break;
       case 'i'  :
      morsedot();morsedot();
      break;
       case 'j' :
       morsedot();morsedash();morsedash();morsedash();
      break;
       case 'k'  :
       morsedash();morsedot();morsedash();
      break;
       case 'l' :
       morsedot();morsedash();morsedot();morsedot();
      break;
       case 'm'  :
       morsedash();morsedash();
      break;
       case 'n'  :
       morsedash();morsedot();
      break;
       case 'o'  :
       morsedash();morsedash();morsedash();
      break;
       case 'p'  :
       morsedot();morsedash();morsedash();morsedot();
      break;
       case 'q'  :
       morsedash();morsedash();morsedot();morsedash();
      break;
       case 'r'  :
       morsedot();morsedash();morsedot();
      break;
       case 's'  :
       morsedot();morsedot();morsedot();morsedot();
      break;
       case 't'  :
       morsedash();
      break;
       case 'u' :
       morsedot();morsedot();morsedash();
      break;
       case 'v'  :
       morsedot();morsedot();morsedot();morsedash();
      break;
       case 'w'  :
       morsedot();morsedash();morsedash();
      break;
       case 'x'  :
       morsedash();morsedot();morsedot();morsedash();
      break;
       case 'y'  :
       morsedash();morsedot();morsedash();morsedash();
      break;
       case 'z':
       morsedash();morsedash();morsedot();morsedot();
      break;
            }
     delay(3000);
          
          }
       for(i=0;tempo[i]!='\0';i++)
       {tempo[i]='\0';
        }
       }
  
      }

void morsedot()
{
  digitalWrite(13,HIGH);
  delay(250);
  digitalWrite(13,LOW);
  delay(250);
}

void morsedash()
{
  digitalWrite(13,HIGH);
  delay(1000);
  digitalWrite(13,LOW);
  delay(250);
}
