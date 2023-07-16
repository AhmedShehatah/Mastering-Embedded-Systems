typedef volatile unsigned int vuint32_t;

#define RCC_base 0x40021000
#define GPIOA_base 0x40010800
#define RCC_APB2ENR *((vuint32_t *)(RCC_base + 0x18))
#define GPIOA_CRH *((unsigned int *)(GPIOA_base + 0X04))
#define GPIOA_ODR *((unsigned int *)(GPIOA_base + 0X0C))

typedef union
{
	vuint32_t all_field;
	struct
	{
		vuint32_t revesed : 13;
		vuint32_t pin_13 : 1;
	} pin;

} R_ODR_t;

volatile R_ODR_t *R_ODR = (volatile R_ODR_t *)(GPIOA_base + 0x0c);

int main()
{
	RCC_APB2ENR |= 1 << 2;
	GPIOA_CRH &= 0xFF0FFFFF;
	GPIOA_CRH |= 0x00200000;

	while (1)
	{
		R_ODR->pin.pin_13 = 1;
		int i = 0;
		while (i++ <= 500)
			;
		R_ODR->pin.pin_13 = 0;
		i = 0;
		while (i++ <= 500)
			;
	}
}