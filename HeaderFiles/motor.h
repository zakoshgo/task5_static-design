// for motor_controller
void init(ST_MOTOR_config_t* configurations);
//base function to initialize the motor controler 
//	module configration

int start(MOTOR m);
// used to start the traget motor with the initial speed

uint getCurrentSpeed(MOTOR m);
// used to return the speed which the target motor moves with

int stop(MOTOR m);
// used to stop a specific motor
