typedef volatile unsigned int vuint32_t;

#define RCC_BASE        0x40021000
#define GPIOA_BASE      0x40010800
#define RCC_APB2ENR     *(vuint32_t*)(RCC_BASE + 0x18)
#define GPIOA_CRH       *(vuint32_t*)(GPIOA_BASE + 0x04)
#define GPIOA_ODR_ADD   (GPIOA_BASE + 0x0c)
#define RCC_IOPAEN      (1<<2)

typedef union {
    vuint32_t all_fields;
    struct {
        vuint32_t reserved:13;
        vuint32_t pin_13:1;
    }PIN;
}R_ODR_t;
volatile R_ODR_t * R_ODR = (volatile R_ODR_t *) GPIOA_ODR_ADD;

void main(void){
    int i;
    RCC_APB2ENR |= RCC_IOPAEN;
    GPIOA_CRH   &= 0xff0fffff;
    GPIOA_CRH   |= 0x00200000;
    while(1)
    {
        R_ODR->PIN.pin_13 = 1;
        for ( i = 0; i < 5000; ++i);
        R_ODR->PIN.pin_13 = 0;
        for ( i = 0; i < 5000; ++i);
    }
}


