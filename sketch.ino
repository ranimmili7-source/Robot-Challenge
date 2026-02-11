// Pin Definitions
#define a0 18    // 30 points
#define a1 17    // 20 points
#define a2 23    // 10 points
#define a3 22    // DISQ
#define a4 19    // SUIVANT
#define a5 35    // DEP
#define a6 32    // HADH
#define a7 33    // ANUB
#define a8 25    // KBAR
#define a9 26    // CHAMS
#define a10 27   // SPIDER
#define a11 14   // FIN

// Sensor Pin Definitions
#define MAX digitalRead(a0)  // 4 BUTTONS
#define MED digitalRead(a1)
#define MIN digitalRead(a2)
#define PUSHD digitalRead(a3)
#define PUSHP digitalRead(a4)
#define DEP digitalRead(a5)
#define HADH digitalRead(a6)
#define ANUB digitalRead(a7)
#define KBAR digitalRead(a8)
#define CHAMS digitalRead(a9)
#define SPIDER digitalRead(a10)
#define FIN digitalRead(a11)

// Variables
int deb = 0;
int hadh = 0;
int anub = 0;
int kbar = 0;
int chams = 0;
int spider = 0;
int fin = 0;
int total = 0;
int disq = 0;
int id = -1;
long t3 = 0;  // Time when the robot passes from first to last sensor
int y = -1;
int n1 = 0;
long wakt = 0;


void setup() {
  Serial.begin(115200);

  // Simulate Wi-Fi Connection
  Serial.println("Simulating Wi-Fi connection (not needed in Wokwi)");

  // Pin Initialization
  pinMode(a0, INPUT);
  pinMode(a1, INPUT);
  pinMode(a2, INPUT);
  pinMode(a3, INPUT);
  pinMode(a4, INPUT);


  pinMode(a5, INPUT);
  pinMode(a6, INPUT);
  pinMode(a7, INPUT);
  pinMode(a8, INPUT);
  pinMode(a9, INPUT);
  pinMode(a10, INPUT);
  pinMode(a11, INPUT);
  // Record system power-on time
  t1 = millis();
  Serial.println("System powered on");
}





void loop() {


  while (n1 == 0) {
    Serial.println("haya khouya");
    if (PUSHP == 1) {

      n1 = 1;
      id++;
      abaath();

    }
  }
  Serial.println("aaaaaaaaaaa nestana fl robot ymes capteur ");


  if (PUSHD == 1) {
    disq = 1;
  }
  if (DEP == 1 && disq == 0 && y == -1 ) {
    t3 = millis() ;
    Serial.println("svg 3in");
    //delay(1000);
    y = 0;
    deb = 1;
    if (PUSHD == 1) {  // disqal
      disq = 1;
      y = 0;
      abaath();
      Serial.println("YRAWAH HAHAHAHAHA  ");
    }

  }

  if (HADH == 1 && disq == 0 && y == 0) {
    //Serial.println("D5ALT LEL IF TA3 HADH ");
    Serial.println("10🙂 ou disq");

    while (y == 0) {
      // bech you93ed we7ed mayet3ada ely manenzel ena
      if (MIN == 1)  // chemin 1
      {
        total = total + 10;
        y = 1;  // ENA FANA CHALLENGE
        hadh = 10;
        abaath();
        Serial.print("rak lamyt ");
        Serial.println(total);
      }

      if (PUSHD == 1) {  // disqal
        disq = 1;
        y = 1;
        abaath();
        Serial.println("YRAWAH HAHAHAHAHA  ");
      }
    }
  }
  // annubis
  if (y == 1 && ANUB == 1 && disq == 0) {

    Serial.println("20 🙂 ou ;10");
    while (y == 1) { 

      if (MED == 1)  // chemin 1 anub
      {
        total = total + 20;
        y = 2;  // ENA FANA CHALLENGE
        anub = 20;
        abaath();
        Serial.print("rak lamyt ");
        Serial.println(total);
      }
      if (MIN == 1) {  // chemin 2 anub
        total = total + 10;
        y = 2;
        anub = 10;
        abaath();
        Serial.print("rak lamyt ");
        Serial.println(total);
      }
      if (PUSHD == 1) {  // disqal
        disq = 1;
        y = 2;
        abaath();
        Serial.println("YRAWAH HAHAHAHAHA  ");
      }
    }
  }
  // kbar

  if (y == 2 && KBAR == 1 && disq == 0) {
    Serial.println("30 🙂 ou ; 20 ");

    while (y == 2) {  

      if (MAX == 1)  // chemin 1 kbar
      {
        total = total + 30;
        y = 3;  // ENA FANA CHALLENGE
        kbar = 30;
        abaath();
        Serial.print("rak lamyt ");
        Serial.println(total);
      }
      if (MED == 1) {  // chemin 2 kbar
        total = total + 20;
        y = 3;
        kbar = 20;
        abaath();
        Serial.print("rak lamyt ");
        Serial.println(total);
      }
      if (PUSHD == 1) {  // disqal
        disq = 1;
        y = 3;
        abaath();
        Serial.println("YRAWAH HAHAHAHAHA  ");
      }
    }
  }
  // chams

  if (y == 3 && CHAMS == 1 && disq == 0) {
    Serial.println("30 🙂 ou ; 20 ou ;10");

    while (y == 3) { 
      if (MAX == 1) {
        total = total + 30;
        y = 4;
        chams = 30;
        abaath();
        Serial.print("rak lamyt ");
        Serial.println(total);
      }

      if (MED == 1) {
        total = total + 20;
        y = 4;
        chams = 30;
        abaath();
        Serial.print("rak lamyt ");
        Serial.println(total);
      }
      if (MIN == 1) {
        total = total + 10;
        y = 4;
        chams = 10;

        abaath();
        Serial.print("rak lamyt ");
        Serial.println(total);
      }

      if (PUSHD == 1) {
        disq = 1;
        y = 4;
        abaath();
        Serial.println("YRAWAH HAHAHAHAHA  ");
      }
    }
  }

  //spider
  if (y == 4 && SPIDER == 1 && disq == 0) {
    Serial.println("30 🙂 ou ; 20");

    while (y == 4) {  
      if (MAX == 1) {
        total = total + 30;
        y = 5;
        spider = 30;
        abaath();
        Serial.print("rak lamyt ");
        Serial.println(total);
      }

      if (MED == 1) {
        total = total + 20;
        y = 5;
        spider = 20;
        abaath();
        Serial.print("rak lamyt ");
        Serial.println(total);
      }


      if (PUSHD == 1) {
        disq = 1;
        y = 5;
        abaath();
        Serial.println("YRAWAH HAHAHAHAHA  ");
      }
    }
  }
  // fin
  if (y == 5 && FIN == 1 && disq == 0) {
    Serial.println("10 ou disq");

    while (y == 5) {  


      
      if (MIN == 1)  
      {
        total = total + 10;
        y = 6;
        fin = 10;
        abaath();
        Serial.print("rak lamyt ");
        Serial.println(total);
      }


      if (PUSHD == 1) {
        disq = 1;
        y = 6;
        abaath();
        Serial.println("YRAWAH HAHAHAHAHA  ");
      }
    }
  }

  if ((disq == 1) || y == 6) {

    wakt = (millis() - t3) ;
    sendData();
    // Reset values
    deb = hadh = anub = kbar = chams = spider = fin = total = disq = n1 =wakt = 0;
    t1 = t2 = t3 = 0;
    y=-1;
  }
}
void abaath() {
  // Simulate the data to be sent
  Serial.println("Simulating data transmission...");
}
void sendData() {
  Serial.println("Sending data...");
  //Serial.print("id: "); Serial.println(id);
  Serial.print("deb: "); Serial.println(deb);
  Serial.print("hadh: "); Serial.println(hadh);
  Serial.print("anub: "); Serial.println(anub);
  Serial.print("kbar: "); Serial.println(kbar);
  Serial.print("chams: "); Serial.println(chams);
  Serial.print("spider: "); Serial.println(spider);
  Serial.print("fin: "); Serial.println(fin);
  Serial.print("total: "); Serial.println(total);
  Serial.print(" wakt: "); Serial.println(wakt);
}