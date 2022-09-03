// for buttons
void init(ST_BUTTONS_config_t* configurations);
//base function to initialize the Buttons module configration
int check_button_state(Button B);
//used to show the state of specific button 
int press_button(Button B);
// used to change the state of a specific button to pressed 
int release_button(Button B);
// used to change the state of a specific button to released 