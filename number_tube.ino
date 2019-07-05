 
 int num=0;
 void setup()
  
{ pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
 Serial.begin(9600);
  delay(100);
  digitalWrite(5,HIGH);
  delay(10);
  
   
}


void loop()
{    
  if(Serial.available()>0)
     {   delay(10);
         digitalWrite(5,LOW);//当输入一个数字时，解锁改变数码管的值
      num=Serial.read();
         if(num>='0'&&num<=9)
            {show(num);
             delay(10);
             digitalWrite(5,HIGH);
             delay(10);
             
              }
              
            }
      
}
 


  int show(int number)
  {  int result=0,k=1,i;   
     number=number-'0';
     while(number)
   {
     i = number%2;
     result = k * i + result;
     k = k*10;
     number = number/2;//把输入的数转化为二进制
    } 
   number=result;
   
      for(i=1;i<=4;i++)
       { k=number / (10^(i-1)) % 10;
            if(k==1)//按照二进制数分别向1—4端口输出高低电平
             {
                delay(10);
                digitalWrite(i,HIGH);
                delay(10);
                }
            else
               { delay(10);
                 digitalWrite(i,LOW);  
                 delay(10);
                }
              
             }
        }  
