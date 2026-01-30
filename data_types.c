#include <stdio.h>
#include <stdint.h>


int main(int argc, char* argv[])
{
	// Платформозависимые типы (в плане размера) platform dependent types
	int age = 25;							    // целочисленное
	long int dino_age = 10101010222;			// больше
	long long int planet_age = 940404041121123; // еще больше
	float pi= 3.14159265;					    // дробь
	double pi= 3.141592651123123123123123;		// большая дробь
	char letter = 'A';							// буква
												//
	// Platform independent types (Платформонезависимые типы)
	uint8_t unsigned_char_analogue = 255;
	int8_t signed_char_analogue = -127;

	uint16_t unsigned_word_analogue = 65535;
	int16_t signed_word_analogue = -32767;

	uint32_t unsigned_int_analogue = INT_MAX;
	int32_t signed_int_analogue = INT_MIN;

	uint64_t unsigned_llu_analogue = INT64_MAX;
	int64_t signed_lli_analogue = INT64_MIN;

	unsigned int bigger_null_int = 100;

	printf("Hello world, %s\n", argv[1]);
	printf("Age: %i\n", age);

	printf("Long: %lli\n", planet_age);

	printf("u64: %" PRIu64 "\n", unsigned_llu_analogue);

	return 0;
}

