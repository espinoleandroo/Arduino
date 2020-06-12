// * Jingle Bells
// * Collection by GitHub User @elubow - https://gist.github.com/elubow/7844436

#define LDRPin A0
int BuzzerPin = 10;

// Variable donde se almacena el valor del LDR
int LDRValue = 0;  

int length = 26;
char notes[] = "eeeeeeegcde fffffeeeeddedg";
int beats[] = { 1, 1, 2, 1, 1, 2, 1, 1, 1, 1, 4, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2};

int tempo = 300;
void playTone(int tone, int duration) {
  for (long i = 0; i < duration * 1000L; i += tone * 2) {
    digitalWrite(BuzzerPin, HIGH);
    delayMicroseconds(tone);
    digitalWrite(BuzzerPin, LOW);
    delayMicroseconds(tone);
  }
}
void playNote(char note, int duration) {
  char names[] = { 'c', 'd', 'e', 'f', 'g', 'a', 'b', 'C' };
  int tones[] = { 1915, 1700, 1519, 1432, 1275, 1136, 1014, 956 };
  
  // play the tone corresponding to the note name
  for (int i = 0; i < 8; i++) {
    if (names[i] == note) {
      playTone(tones[i], duration);
    }
  }
}

void setup() {

pinMode(LDRPin, INPUT);
pinMode(BuzzerPin, OUTPUT);

}

void loop() {


   

   pinMode(BuzzerPin,HIGH);

       for (int i = 0; i < length; i++) {
          if (notes[i] == ' ') {
            delay(beats[i] * tempo); // rest
          } else {
            playNote(notes[i], beats[i] * tempo);
          }
          
          // pause between notes
          delay(tempo / 2);
         }

}
