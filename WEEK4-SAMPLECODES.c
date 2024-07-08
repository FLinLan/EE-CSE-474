// build a simple roundrobin scheduler using pointers and startfunciton()
// taskA is ledp1 flashing at A rate
// taskB is ledp2 flashing at B rate

#define ledp1 13
#define ledp2 10

#define HIGH 1
#define LOW 0
#define OUTPUT 1

// func prototypes
void taskA();
void taskB();
void start_function();

typedef void (*funcPtr)(); // Define a type for function pointers with a void return and no arguments

// Function pointers
funcPtr funcPtr1 = taskA;
funcPtr funcPtr2 = taskB;

void setup() {
    pinMode(ledp1, OUTPUT);
    pinMode(ledp2, OUTPUT);
}

void loop() {
    start_function(funcPtr1);
    start_function(funcPtr2);
    delay(10); // this is a blocking delay but it is outside of the task
}

void start_function(funcPtr functionPTR) {
    functionPTR();
}

void taskA() {
    static int timer = 0;
    timer++;
    if (timer == 50) {
        digitalWrite(ledp1, HIGH);
    } 
    if (timer == 100) {
        digitalWrite(ledp1, LOW);
    }
}

void taskB() {
    static int timer = 0;
    timer++;
    if (timer == 500) {
        digitalWrite(ledp1, HIGH);
    }
    if (timer == 1000) {
        digitalWrite(ledp1, LOW);
    }
}
