float temp,t,a;
int aa,ab,ac,ad,af;

int b=0;
void switch1();
void switch2();
void switch3();
void switch4();
void switch5();
void setup()
{
   Serial.begin(9600);
   
   pinMode(12,OUTPUT);
   pinMode(A0,INPUT);
   pinMode(3,INPUT);
   pinMode(4,INPUT);
   pinMode(5,INPUT);
   pinMode(6,INPUT);
   pinMode(7,INPUT);
   pinMode(8,INPUT);
   

}
void(* resetFunc) (void)=0;

void loop()
{
  delay(2000);
  a=analogRead(A1);
  a= a*0.0048828125;
  temp = analogRead(A0);
  temp = temp * 0.48828125;
  a=analogRead(A1);
  a= a*0.0048828125;
  temp = analogRead(A0);
  temp = temp * 0.48828125; 
  Serial.print("\n");
  Serial.print(temp);
  Serial.print("--");
  Serial.print(a);
                                   if(digitalRead(8)==HIGH)
                                     {           if(digitalRead(3) == LOW)//switch 0
                                                     {
                                                         switch0();
                                                     } 
                                                 if(digitalRead(4) == LOW)//switch 1
                                                     {
                                                         switch1();
                                                     } 
                                                 if(digitalRead(5) == LOW)// switch //2
                                                     {
                                                         switch2();
                                                     }
                                                 if(digitalRead(6) == LOW)// switch 3
                                                    {
                                                         switch3();
                                                     }
                                                 if(digitalRead(7) == LOW)// switch //4
                                                    {
                                                        switch4();
                                                     }
                                        }
                                     else
                                      {Serial.print("NORMAL");
                                        
                                                  if(digitalRead(4) == LOW)//switch 1
                                                      {
                                                          switch1n();
                                                       } 
                                                  if(digitalRead(5) == LOW)// switch //2
                                                       {
                                                           switch2n();
                                                         }
                                                   if(digitalRead(6) == LOW)// switch 3
                                                        {
                                                            switch3n();
                                                         }
                                                    if(digitalRead(7) == LOW)// switch //4
                                                         {
                                                              switch4n();
                                                          }
                                          }
}
void switch0()

{
                           for(;;)
                               {
                                   t = analogRead(A0);
                                   t = t * 0.48828125;
                                   Serial.print("\n");
                                   Serial.print("motion:");
                                   Serial.print(t);
                                   aa=temp;
                                   ab=temp+2;
                                   ac=temp+4;
                                   ad=temp+6;
                                   af=temp+8;
                                                   if(t>=aa && t<ab)//speed 1
                                                       {
                                                           digitalWrite(12,LOW);
                                                    
    
                                                          }
                                                    if(t>=ab && t<ac)//speed 2
                                                       { 
                                                            Serial.print("aaa");
                                                            digitalWrite(12,HIGH);
                                                            delay(5);
                                                            digitalWrite(12,LOW);
                                                            delay(12);
                                                            Serial.print("a");                             
                                                       }
                                                   if(t>=ac && t<ad)//speed 3
                                                       { 
                                                            Serial.print("aaa");
                                                            digitalWrite(12,HIGH);
                                                            delay(8);
                                                            digitalWrite(12,LOW);
                                                            delay(10);
                                                         }
                                                    if(t>=ad && t<af)//speed 4
                                                        {
                                                             Serial.print("bbb");
                                                             digitalWrite(12,HIGH);
                                                             delay(10);
                                                             digitalWrite(12,LOW);
                                                             delay(8 );
                                                         }
                                                     if(t>=af)//speed 5
                                                         {
                                                              digitalWrite(12,HIGH);
                                                              delay(10);
                                                              digitalWrite(12,LOW);
                                                              delay(2 );
                                                         }
                                                    
                                                     if(digitalRead(5) == LOW)// switch //2
                                                         {
                                                               switch2();
                                                          }
                                                     if(digitalRead(6) == LOW)// switch 3
                                                          {
                                                               switch3();
                                                           }
                                                      if(digitalRead(7) == LOW)// switch //4
                                                          {
                                                                switch4();
                                                          }
                                        }
}

void switch1()

{
                           for(;;)
                               {
                                   t = analogRead(A0);
                                   t = t * 0.48828125;
                                   Serial.print("\n");
                                   Serial.print("motion:");
                                   Serial.print(t);
                                   aa=temp-2;
                                   ab=temp;
                                   ac=temp+2;
                                   ad=temp+4;
                                   af=temp+6;
                                                   if(t>=aa && t<ab)//speed 1
                                                       {
                                                           digitalWrite(12,LOW);
                                                    
    
                                                          }
                                                    if(t>=ab && t<ac)//speed 2
                                                       { 
                                                            Serial.print("aaa");
                                                            digitalWrite(12,HIGH);
                                                            delay(5);
                                                            digitalWrite(12,LOW);
                                                            delay(12);
                                                            Serial.print("a");                             
                                                       }
                                                   if(t>=ac && t<ad)//speed 3
                                                       { 
                                                            Serial.print("aaa");
                                                            digitalWrite(12,HIGH);
                                                            delay(8);
                                                            digitalWrite(12,LOW);
                                                            delay(10);
                                                         }
                                                    if(t>=ad && t<af)//speed 4
                                                        {
                                                             Serial.print("bbb");
                                                             digitalWrite(12,HIGH);
                                                             delay(10);
                                                             digitalWrite(12,LOW);
                                                             delay(8 );
                                                         }
                                                     if(t>=af)//speed 5
                                                         {
                                                              digitalWrite(12,HIGH);
                                                              delay(10);
                                                              digitalWrite(12,LOW);
                                                              delay(2 );
                                                         }
                                                      if(digitalRead(3) == LOW) // switch 0
                                                        {
                                                              digitalWrite(12,LOW);
                                                              resetFunc();
                                                         }
                                                     if(digitalRead(5) == LOW)// switch //2
                                                         {
                                                               switch2();
                                                          }
                                                     if(digitalRead(6) == LOW)// switch 3
                                                          {
                                                               switch3();
                                                           }
                                                      if(digitalRead(7) == LOW)// switch //4
                                                          {
                                                                switch4();
                                                          }
                                        }
}

void switch2()

{
                              for(;;)
                              {
                                 t = analogRead(A0);
                                 t = t * 0.48828125;
                                 Serial.print("\n");
                                 Serial.print("motion:");
                                 Serial.print(t);
                                 aa=temp-4;
                                 ab=temp-2;
                                 ac=temp;
                                 ad=temp+2;
                                 af=temp+4;
                                                  if(t>=aa && t<ab)//speed 1
                                                      {
                                                         digitalWrite(12,LOW);
                                                         
                                                        }
                                                  if(t>=ab && t<ac)//speed 2
                                                       {
                                                           digitalWrite(12,HIGH);
                                                           delay(5);
                                                           digitalWrite(12,LOW);
                                                           delay(12);
                                                        }
                                                   if(t>=ac && t<ad)//speed 3
                                                        {
                                                           digitalWrite(12,HIGH);
                                                           delay(8);
                                                           digitalWrite(12,LOW);
                                                           delay(10 );
                                                        }
                                                   if(t>=ad && t<af)//speed 4
                                                        {
                                                           digitalWrite(12,HIGH);
                                                           delay(10);
                                                           digitalWrite(12,LOW);
                                                           delay(8 );
                                                         }
                                                   if(t>=af)//speed 5
                                                         {
                                                           digitalWrite(12,HIGH);
                                                           delay(10);
                                                           digitalWrite(12,LOW);
                                                           delay(2 );
                                                         }
                                                   if(digitalRead(3) == LOW) // switch 1
                                                         {
                                                            digitalWrite(12,LOW);
                                                            resetFunc();
                                                          }
                                                    if(digitalRead(4) == LOW)//switch 1
                                                          {
                                                             switch1();
                                                          } 
                                                    if(digitalRead(6) == LOW)// switch 3
                                                        {
                                                             switch3();
                                                           }
                                                    if(digitalRead(7) == LOW)// switch //4
                                                         {
                                                              switch4();
                                                          }
                                    }
}
void switch3()
{
                                  for(;;)
                                    {
                                      t = analogRead(A0);
                                      t = t * 0.48828125;
                                      Serial.print("\n");
                                      Serial.print("motion1:");
                                      Serial.print(t);
                                      aa=temp-8;
                                      ab=temp-4;
                                      ac=temp-2;
                                      ad=temp;
                                      af=temp+2;
                                                    if(t>=aa && t<ab)//speed 1
                                                       {
                                                       digitalWrite(12,LOW);
                                                            
                                                       }
                                                    if(t>=ab && t<ac)//speed 2
                                                      {
                                                       digitalWrite(12,HIGH);
                                                       delay(5);
                                                       digitalWrite(12,LOW);
                                                       delay(12);
                                                      }
                                                   if(t>=ac && t<ad)//speed 3
                                                     {
                                                       Serial.print("low");
                                                       Serial.print(ac);
                                                       digitalWrite(12,HIGH);
                                                       delay(8);
                                                       digitalWrite(12,LOW);
                                                       delay(10 );
                                                      }
                                                  if(t>=ad && t<af)//speed 4
                                                     {
                                                        Serial.print("go");
                                                        Serial.print(ad);
                                                        digitalWrite(12,HIGH);
                                                        delay(10);
                                                        digitalWrite(12,LOW);
                                                        delay(8);
                                                    }
                                                 if(t>=af)//speed 5
                                                    {
                                                        Serial.print("test");
                                                        Serial.print(af);
                                                        digitalWrite(12,HIGH);
                                                        delay(10);
                                                        //digitalWrite(12,LOW);
                                                        //delay(2);
                                                    }
                                               if(digitalRead(3) == LOW) // switch 1
                                                    { 
                                                        digitalWrite(12,LOW);
                                                        resetFunc();
                                                     } 
                                                if(digitalRead(4) == LOW)//switch 1
                                                    {
                                                         switch1();
                                                    } 
                                               if(digitalRead(5) == LOW)// switch //2
                                                    {
                                                       switch2();
                                                     }
                                               if(digitalRead(7) == LOW)// switch //4
                                                     {
                                                       switch4();
                                                     }
                                   }
}
void switch4()
{
                                  for(;;)
                                  {
                                    t = analogRead(A0);
                                    t = t * 0.48828125;
                                    Serial.print("\n");
                                    Serial.print("motion:");
                                    Serial.print(t);
                                    aa=temp-6;
                                    ab=temp-4;
                                    ac=temp-2;
                                    ad=temp-1;
                                    af=temp;
                                          if(t>=aa && t<ab)//speed 1
                                          {
                                            digitalWrite(12,LOW);
                                            
                                              }
                                          if(t>=ab && t<ac)//speed 2
                                          {
                                            digitalWrite(12,HIGH);
                                            delay(5);
                                            digitalWrite(12,LOW);
                                            delay(12);
                                              }
                                         if(t>=ac && t<ad)//speed 3
                                           {
                                            digitalWrite(12,HIGH);
                                            delay(8);
                                            digitalWrite(12,LOW);
                                            delay(10 );
                                               }
                                        if(t>=ad && t<af)//speed 4
                                         {
                                           digitalWrite(12,HIGH);
                                           delay(10);
                                           digitalWrite(12,LOW);
                                           delay(8 );
                                              }
                                       if(t>=af)//speed 5
                                          {
                                             digitalWrite(12,HIGH);
                                             Serial.print("working");
                                             delay(10);
                                             //digitalWrite(12,LOW);
                                            //delay(2);
                                         }
                                     if(digitalRead(3) == LOW) // switch 1
                                        {
                                            digitalWrite(12,LOW);
                                            resetFunc();
                                         } 
                                     if(digitalRead(4) == LOW)//switch 1
                                        {
                                            switch1();
                                        } 
                                    if(digitalRead(5) == LOW)// switch //2
                                        {
                                            switch2();
                                         }
                                   if(digitalRead(6) == LOW)// switch 3
                                       {
                                           switch3();
                                        }
                           }
}
void  switch1n()
{
                        for(;;)
                        {
                         digitalWrite(12,HIGH);
                         delay(5);
                         digitalWrite(12,LOW);
                         delay(12);          
                              if(digitalRead(3) == LOW) // switch 1
                                {
                                    digitalWrite(12,LOW);
                                    resetFunc();
                                 } 
                              if(digitalRead(5) == LOW)// switch //2
                                 {
                                     switch2n();
                                 }
                             if(digitalRead(6) == LOW)// switch 3
                                 {
                                    switch3n();
                                  }
                             if(digitalRead(7) == LOW)// switch //4
                                 {
                                    switch4n();
                                  }
                            }
}
void switch2n()
{
                    for(;;)
                    {
                      digitalWrite(12,HIGH);
                      delay(8);
                      digitalWrite(12,LOW);
                      delay(10 );
                                       if(digitalRead(3) == LOW) // switch 1
                                            {
                                            digitalWrite(12,LOW);
                                            resetFunc();
                                            } 
                                        if(digitalRead(4) == LOW)//switch 1
                                            {
                                              switch1n();
                                             } 
  
                                        if(digitalRead(6) == LOW)// switch 3
                                            {
                                             switch3n();
                                            }
                                        if(digitalRead(7) == LOW)// switch //4
                                             {
                                              switch4n();
                                              }
                         }
  }
void switch3n()
{                    for(;;)
                      {
                       digitalWrite(12,HIGH);
                       delay(10);
                       digitalWrite(12,LOW);
                       delay(8 );
                                      if(digitalRead(3) == LOW) // switch 1
                                        {
                                          digitalWrite(12,LOW);
                                          resetFunc();
                                        } 
                                      if(digitalRead(4) == LOW)//switch 1
                                        {
                                           switch1n();
                                         } 
                                     if(digitalRead(5) == LOW)// switch //2
                                        {
                                          switch2n();
                                         }

                                   if(digitalRead(7) == LOW)// switch //4
                                       {
                                           switch4n();
                                         }
                         }
  }
void switch4n()
{     
               for(;;)
               {
                Serial.println("normal");
                digitalWrite(12,HIGH);
                                if(digitalRead(3) == LOW) // switch 1
                                   {
                                       digitalWrite(12,LOW);
                                       resetFunc();
                                   } 
                                if(digitalRead(4) == LOW)//switch 1
                                   {
                                      switch1n();
                                    } 
                               if(digitalRead(5) == LOW)// switch //2
                                    {
                                      switch2n();
                                    }
                                if(digitalRead(6) == LOW)// switch 3
                                    {
                                      switch3n();
                                    }
              }
 }
