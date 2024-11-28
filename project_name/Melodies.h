/*********************************************************************
 * @file  Melodies.h
 * @author Julie Champagne
 * @brief Mélodies
 *********************************************************************/


#define C_3 261.63
#define Cd_3 277.18
#define D_3 293.66
#define Dd_3 311.13
#define E_3 329.63
#define F_3 349.23
#define Fd_3 369.99
#define G_3 392.00
#define Gd_3 415.30
#define A_3 440.00
#define Ad_3 466.16
#define B_3 493.88
#define rest 0 
#define end

//Melodie 0
float * Mel_n_0[11] = {C_3, C_3, C_3, D_3, E_3, D_3, C_3, E_3,D_3, D_3,C_3};
int * Mel_b_0[11] = {1,1,1,1,2,2,1,1,1,1,1};
int Mel_t_0 = 120;

//Melodie 1
float * Mel_n_1[14] = {C_3, C_3, C_3, D_3, E_3, D_3, C_3, E_3,D_3, D_3,C_3};
int * Mel_b_1[14] = {1,1,1,1,2,2,1,1,1,1,1};
int Mel_t_1 = 120;
