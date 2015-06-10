#define FLOATM 16384
#define FLOAT_ADD_INT(x,n) (x+n*FLOATM)
#define FLOAT_TO_INT_NEAR(x) (x>=0?((x+FLOATM/2)/FLOATM):((x-FLOATM/2)/FLOATM))
#define FLOAT_DIV(x,y) ((int64_t)(x))*FLOATM/(y)
#define FLOAT_MUL(x,y) ((int64_t)(x))*(y)/FLOATM
#define INT_TO_FLOAT(x) (x)*FLOATM

