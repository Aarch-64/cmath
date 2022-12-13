typedef struct lan_EN
{
  char op1[16];
  char op2[21];
  char op3[42];
  char errOP[31];

  char b1[23];
  char b2[23];

  char Ir[16];
  
  char memdir[20];

  char prss[20];
} lan1;

typedef struct lan_ES
{
  char op1[25];
  char op2[28];
  char op3[44];
  char errOP[31];

  char b1[25];
  char b2[25];

  char Ir[15];
  
  char memdir[20];

  char prss[20];
} lan2;

extern lan1 lang_en;
extern lan2 lang_es;

void LangMain();

void defvar();
