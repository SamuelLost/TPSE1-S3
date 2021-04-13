/****************************************************************/
// Autor: Samuel Henrique
// Função: Contar quantos bits estão setados
// Data: 09/07/20
// Descrição: Usando lógica binária, vejo se o bit é 1.
/****************************************************************/
#include <stdio.h> 

// Usando bitwise and, consigo ver se o último bit é 1, se for incremento com count
// Depois, um deslocamento para a direita é feito, afim de pegar outro bit
unsigned int countSetBits(unsigned int n) 
{ 
	unsigned int count = 0; 
	while (n) { 
		count += n & 1; 
		n >>= 1; 
	} 
	return count; 
} 

int main() 
{ 
	int i = 9; 
	printf("%d", countSetBits(i)); 
	return 0; 
} 
