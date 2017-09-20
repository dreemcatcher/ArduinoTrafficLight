/*
   mini traffic scheme
      north
  west     east
      south
*/
#define NORTH_SOUTH_RED 8
#define WEST_EAST_RED 9
#define YELLOW 10
#define NORTH_SOUTH_GREEN 11
#define WEST_EAST_GREEN 12

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(NORTH_SOUTH_RED, OUTPUT);
  pinMode(WEST_EAST_RED, OUTPUT);
  pinMode(YELLOW, OUTPUT);
  pinMode(NORTH_SOUTH_GREEN, OUTPUT);
  pinMode(WEST_EAST_GREEN, OUTPUT);
}

void loop() {
  // NS RED at start
  // WE GREEN at start
  digitalWrite(YELLOW, LOW);
  digitalWrite(NORTH_SOUTH_RED, HIGH);
  digitalWrite(WEST_EAST_GREEN, HIGH);
  digitalWrite(NORTH_SOUTH_GREEN, LOW);
  digitalWrite(WEST_EAST_RED, LOW);
  delay(5000);
  // Switch on Yellow 2 sec
  digitalWrite(NORTH_SOUTH_RED, HIGH);
  digitalWrite(WEST_EAST_GREEN, HIGH);
  digitalWrite(YELLOW, HIGH);
  delay(2000);
  // Switch off all
  digitalWrite(YELLOW, LOW);
  digitalWrite(NORTH_SOUTH_RED, LOW);
  digitalWrite(WEST_EAST_GREEN, LOW);
  digitalWrite(NORTH_SOUTH_GREEN, HIGH);
  digitalWrite(WEST_EAST_RED, HIGH);
  delay(5000);
  // Switch on Yellow 2 sec
  digitalWrite(NORTH_SOUTH_GREEN, HIGH);
  digitalWrite(WEST_EAST_RED, HIGH);
  digitalWrite(YELLOW, HIGH);
  delay(2000);

}
