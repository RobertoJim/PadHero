//intro
int intro_melody[] = {NOTE_A4, NOTE_A4, NOTE_E6, NOTE_E6, NOTE_F6, NOTE_F6, NOTE_G6, NOTE_G6, NOTE_A4, NOTE_A4, NOTE_E6, NOTE_E6, NOTE_F6, NOTE_F6, NOTE_G6, NOTE_G6, NOTE_A4, NOTE_A4, NOTE_E6, NOTE_E6, NOTE_F6, NOTE_F6, NOTE_G6, NOTE_G6, NOTE_A4, NOTE_A4, NOTE_E6, NOTE_E6, NOTE_F6, NOTE_F6, NOTE_G6, NOTE_G6, NOTE_G5, NOTE_A5, NOTE_A5, NOTE_E6, NOTE_D6, NOTE_C6, NOTE_B5, NOTE_C6, NOTE_A5, NOTE_C6, NOTE_B5, NOTE_C6, NOTE_B5, NOTE_A5, NOTE_A5, NOTE_E6, NOTE_D6, NOTE_C6, NOTE_B5, NOTE_C6, NOTE_A5, NOTE_C6, NOTE_B5, NOTE_C6, NOTE_B5, NOTE_A5, NOTE_A5, NOTE_A6, NOTE_G6, NOTE_D6, NOTE_E6};
int intro_tempo[] = {8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 2, 1, 4, 4, 1, 6, 6, 1, 6, 6, 1, 6, 6, 1, 6, 6, 1, 6, 6, 1, 6, 6, 1, 6, 6, 1, 6, 4, 2, 2, 1};
int intro_lenght = 61;

//Super Mario
int melody1[] = {NOTE_E7, NOTE_E7, NOTE_E7, NOTE_C7, NOTE_E7, NOTE_G7, NOTE_G6, NOTE_C7, NOTE_G6, NOTE_E6, NOTE_A6, NOTE_B6, NOTE_AS6, NOTE_A6, NOTE_G6, NOTE_E7, NOTE_G7, NOTE_A7, NOTE_F7, NOTE_G7,  NOTE_E7,  NOTE_C7, NOTE_D7, NOTE_B6,  NOTE_C7, NOTE_G6,  NOTE_E6, NOTE_A6,  NOTE_B6,  NOTE_AS6, NOTE_A6, NOTE_G6, NOTE_E7, NOTE_G7, NOTE_A7, NOTE_F7, NOTE_G7, NOTE_E7, NOTE_C7, NOTE_D7, NOTE_B6};
int tempo1[] = { 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 9, 9, 9, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12};
int lenght1 = 40;

//take on me
int melody2[] = {NOTE_FS5, NOTE_FS5, NOTE_D5, NOTE_B4, NOTE_B4, NOTE_E5, NOTE_E5, NOTE_E5, NOTE_GS5, NOTE_GS5, NOTE_A5, NOTE_B5, NOTE_A5, NOTE_A5, NOTE_A5, NOTE_E5, NOTE_D5, NOTE_FS5, NOTE_FS5, NOTE_FS5, NOTE_E5, NOTE_E5, NOTE_FS5, NOTE_E5};
int tempo2[] = { 8, 8, 8, 4, 4, 4, 4, 8, 8, 8, 8, 8, 8, 8, 8, 4, 4, 4, 4, 8, 8, 8, 8, 8};
int lenght2 = 23;

// Jingle Bells
int melody3[] = {NOTE_E5, NOTE_E5, NOTE_E5,  NOTE_E5, NOTE_E5, NOTE_E5,  NOTE_E5, NOTE_G5, NOTE_C5, NOTE_D5,  NOTE_E5,  NOTE_F5, NOTE_F5, NOTE_F5, NOTE_F5,  NOTE_F5, NOTE_E5, NOTE_E5, NOTE_E5, NOTE_E5,  NOTE_E5, NOTE_D5, NOTE_D5, NOTE_E5,  NOTE_D5, NOTE_G5};
int tempo3[] = {  8, 8, 4,  8, 8, 4,  8, 8, 8, 8,  2,  8, 8, 8, 8,  8, 8, 8, 16, 16,  8, 8, 8, 8,  4, 4};
int lenght3 = 26;

// We wish you a merry Christmas
int melody4[] = {  NOTE_B3,   NOTE_F4, NOTE_F4, NOTE_G4, NOTE_F4, NOTE_E4,  NOTE_D4, NOTE_D4, NOTE_D4,  NOTE_G4, NOTE_G4, NOTE_A4, NOTE_G4, NOTE_F4,  NOTE_E4, NOTE_E4, NOTE_E4,  NOTE_A4, NOTE_A4, NOTE_B4, NOTE_A4, NOTE_G4,  NOTE_F4, NOTE_D4, NOTE_B3, NOTE_B3,  NOTE_D4, NOTE_G4, NOTE_E4,  NOTE_F4};
int tempo4[] = {  4,  4, 8, 8, 8, 8,  4, 4, 4,  4, 8, 8, 8, 8,  4, 4, 4,  4, 8, 8, 8, 8,  4, 4, 8, 8,  4, 4, 4,  2};
int lenght4 = 29;

// Santa Claus is coming to town
int melody5[] = {  NOTE_G4,  NOTE_E4, NOTE_F4, NOTE_G4, NOTE_G4, NOTE_G4,  NOTE_A4, NOTE_B4, NOTE_C5, NOTE_C5, NOTE_C5,  NOTE_E4, NOTE_F4, NOTE_G4, NOTE_G4, NOTE_G4,  NOTE_A4, NOTE_G4, NOTE_F4, NOTE_F4,  NOTE_E4, NOTE_G4, NOTE_C4, NOTE_E4,  NOTE_D4, NOTE_F4, NOTE_B3,  NOTE_C4};
int tempo5[] = {  8,  8, 8, 4, 4, 4,  8, 8, 4, 4, 4,  8, 8, 4, 4, 4,  8, 8, 4, 2,  4, 4, 4, 4,  4, 2, 4,  1};
int lenght5 = 27;

//piratas del caribe
int melody6[] = { NOTE_D4, NOTE_D4, NOTE_D4, NOTE_D4, NOTE_D4, NOTE_D4, NOTE_D4, NOTE_D4, NOTE_A3, NOTE_C4, NOTE_D4, NOTE_D4, NOTE_D4, NOTE_E4, NOTE_F4, NOTE_F4, NOTE_F4, NOTE_G4, NOTE_E4, NOTE_E4, NOTE_D4, NOTE_C4, NOTE_C4, NOTE_D4,  NOTE_A3, NOTE_C4, NOTE_B3, NOTE_D4, NOTE_B3, NOTE_E4, NOTE_F4, NOTE_F4, NOTE_C4, NOTE_C4, NOTE_C4, NOTE_C4, NOTE_D4, NOTE_C4, NOTE_D4,  NOTE_A3, NOTE_C4, NOTE_D4, NOTE_D4, NOTE_D4, NOTE_F4, NOTE_G4, NOTE_G4, NOTE_G4, NOTE_A4, NOTE_A4, NOTE_A4, NOTE_A4, NOTE_G4,  NOTE_A4, NOTE_D4,  NOTE_D4, NOTE_E3, NOTE_F4, NOTE_F4, NOTE_G4, NOTE_A4,  NOTE_D4,  NOTE_D4, NOTE_F4, NOTE_E4, NOTE_E4, NOTE_F4, NOTE_D4};
int tempo6[] = {  4, 8, 4, 8, 4, 8,  4, 8, 8, 8, 8, 4, 4, 8, 8, 4, 4, 8, 8, 4, 4, 8, 8,  8, 4, 8, 8, 8, 4, 4, 8, 8, 4, 4, 8, 8, 4, 4, 8, 4,  4, 8, 8, 8, 8, 4, 4, 8, 8, 4, 4, 8, 8, 4, 4, 8, 8,  8, 4, 8, 8, 8, 4, 4, 4, 8, 4, 8, 8,};
int lenght6 = 66;

//Crazy frog
int melody7[] = {  NOTE_D4, NOTE_F4, NOTE_D4, NOTE_D4, NOTE_G4, NOTE_D4, NOTE_C4,  NOTE_D4,  NOTE_A4, NOTE_D4,  NOTE_D4, NOTE_AS4, NOTE_A4, NOTE_F4,  NOTE_D4, NOTE_A4, NOTE_D5, NOTE_D4, NOTE_C4,  NOTE_C4, NOTE_A3, NOTE_E4, NOTE_D4,  NOTE_D4, NOTE_D4};
int tempo7[] = {  8, 8, 6, 16, 16, 16, 8, 8, 8,   8, 8, 6, 16, 16, 16, 8, 8, 8,  8, 8, 8, 16, 16, 16, 16, };
int lenght7 = 23;

//titanic
int melody8[] = {NOTE_E4, NOTE_B4, NOTE_E5, NOTE_E5, NOTE_E5, NOTE_B4, NOTE_E4, NOTE_E4, NOTE_B4, NOTE_E5, NOTE_E5, NOTE_E5, NOTE_B4, NOTE_E4, NOTE_E4, NOTE_B4, NOTE_E5, NOTE_E5, NOTE_E5, NOTE_B4, NOTE_E4,  NOTE_E4, NOTE_B4, NOTE_E5, NOTE_E5, NOTE_E5, NOTE_D5, NOTE_E4, NOTE_B4, NOTE_E5, NOTE_E5, NOTE_E5, NOTE_B4, NOTE_E4, NOTE_E4, NOTE_B4, NOTE_E5, NOTE_E5, NOTE_E5, NOTE_B4, NOTE_F5,  NOTE_E4, NOTE_B4, NOTE_E5, NOTE_E5, NOTE_E5, NOTE_B4, NOTE_E4,  NOTE_E4, NOTE_B4, NOTE_E5, NOTE_E5, NOTE_E5, NOTE_D5, NOTE_E5, NOTE_E4, NOTE_E4, NOTE_E4, NOTE_D4, NOTE_B3, NOTE_E4, NOTE_E4, NOTE_E4, NOTE_B3, NOTE_E4,  NOTE_D4, NOTE_E4, NOTE_F4, NOTE_G4, NOTE_F4, NOTE_E4, NOTE_E4, NOTE_E4, NOTE_E4};
int tempo8[] = {  8, 8, 8, 8, 8, 8, 4, 8, 8, 8, 8, 8, 8, 4, 8, 8, 8, 8, 8, 8, 4, 8, 8, 8, 8, 4, 4, 8, 8, 8, 8, 8, 8, 4, 8, 8, 8, 8, 8, 8, 4, 8, 8, 8, 8, 8, 8, 1,  8, 8, 8, 8, 4, 4, 4, 8, 4, 4, 8, 8, 8, 8, 4, 8, 8, 4, 8, 4, 8, 8, 4, 8, 4, 1};
int lenght8 = 73;
