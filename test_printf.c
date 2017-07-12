/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_printf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvorona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/02 14:21:50 by mvorona           #+#    #+#             */
/*   Updated: 2017/04/01 16:47:17 by sandruse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdint.h>
#include "ft_printf.h"
#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"
/*
void	ft_test(char *str)
{
	while (*str != 5)
		str++;
}
*/

int main(void)
{
	char 	*str;
	char	chr;
	int		max = 1000;

//	chr = *ft_strchr("sSpdDioOuUxXcC", 'D');
//	printf("chr=%c\n", chr);
	str = "123456789";
//	ft_test(str);
//	str += 7;
//	printf("%5#0X\n", 13);
//	ft_printf("\n%15.20s", str, "Lucky");
//	printf("\noriginal result=% 15.20s\n", str, "Lucky");
//	ft_printf("%#33.23X\n", 16);
//	printf("%#33.23X\n", 16);
//	printf("test_dig=%# %% %%%  %% lx\n", 123);
//	printf("test_for_diD=%06 +i\n", 10);
//	printf("test_for_diD=%06- +i\n", 10);
//	printf("test_for_diD=%06.4- +i\n", 10);
int a;
	printf(ANSI_COLOR_GREEN "\n42cheker" ANSI_COLOR_RESET "\n");
a = ft_printf("my=%.4S", L"жM-M-^QжM-^XѓдЄM-еM-^O™зM-^LЂгM-M-^B");
    printf("\na=%d\n", a);
	    a = printf("or=%.4S", L"жM-M-^QжM-^XѓдЄM-еM-^O™зM-^LЂгM-M-^B");
		    printf("\na=%d\n", a);
//	ft_printf("%s\n", NULL);
//	printf("%s\n", NULL);
/*	ft_printf("@moulitest: %.o %.0o\n", 0, 0);
	printf("@moulitest: %.o %.0o\n", 0, 0);
	printf("\n");
	ft_printf("@moulitest: %5.o %5.0o\n", 0, 0);
	printf("@moulitest: %5.o %5.0o\n", 0, 0);
	printf("\n");
	ft_printf("@moulitest: %o %o\n", 0, 0);
	printf("@moulitest: %o %o\n", 0, 0);
	printf("\n");
	ft_printf("%hU\n", "4294967296");
	printf("%hU\n", "4294967296");
	printf("\n");
	ft_printf("%U\n", "4294967296");
	printf("%U\n", "4294967296");
	printf("\n");
	ft_printf("%.2s is a string\n", "");
	printf("%.2s is a string\n", "");
	printf("\n");
	ft_printf("%5.2s is a string\n", "");
	printf("%5.2s is a string\n", "");
	printf("\n");
	ft_printf("%-.2s is a string\n", "");
	printf("%-.2s is a string\n", "");
	printf("\n");
	ft_printf("%-5.2s is a string\n", "");
	printf("%-5.2s is a string\n", "");
	printf("\n");
	ft_printf("@moulitest: %#.x %#.0x\n", 0, 0);
	printf("@moulitest: %#.x %#.0x\n", 0, 0);
	printf("\n");
	ft_printf("@moulitest: %.x %.0x\n", 0, 0);
	printf("@moulitest: %.x %.0x\n", 0, 0);
	printf("\n");
	ft_printf("@moulitest: %5.x %5.0x\n", 0, 0);
	printf("@moulitest: %5.x %5.0x\n", 0, 0);
	printf("\n");
	ft_printf("%0+5d\n", -42);
	printf("%0+5d\n", -42);
	printf("\n");
	ft_printf("%hd\n", 32767);
	printf("%hd\n", 32767);
	printf("\n");
	ft_printf("%hd\n", -32768);
	printf("%hd\n", -32768);
	printf("\n");
	ft_printf("%hd\n", -32769);
	printf("%hd\n", -32769);
	printf("\n");
	ft_printf("%hhd\n", 127);
	printf("%hhd\n", 127);
	printf("\n");
	ft_printf("%hhd\n", 128);
	printf("%hhd\n", 128);
	printf("\n");
	ft_printf("%hhd\n", -129);
	printf("%hhd\n", -129);
	printf("\n");
	ft_printf("%ld\n", 2147483648);
	printf("%ld\n", 2147483648);
	printf("\n");
	ft_printf("%lld\n", 9223372036854775807);
	printf("%lld\n", 9223372036854775807);
	printf("\n");
	ft_printf("%jd\n", 9223372036854775807);
	printf("%jd\n", 9223372036854775807);
	printf("\n");
	ft_printf("%zd\n", 4294967295);
	printf("%zd\n", 4294967295);
	printf("\n");
	ft_printf("@moulitest: %.d %.0d\n", 0, 0);
	printf("@moulitest: %.d %.0d\n", 0, 0);
	printf("\n");
	ft_printf("@moulitest: %5.d %5.0d\n", 0, 0);
	printf("@moulitest: %5.d %5.0d\n", 0, 0);
	printf("\n");
	ft_printf("@moulitest: %.d %.0d\n", 42, 43);
	printf("@moulitest: %.d %.0d\n", 42, 43);
	printf("\n");
	printf(ANSI_COLOR_GREEN "\nПОЛОЖИТЕЛЬНЫЕ ЧИСЛА" ANSI_COLOR_RESET "\n");

	printf(ANSI_COLOR_MAGENTA "---Conversion = i---" ANSI_COLOR_RESET "\n");

	ft_printf("my1=%06.4 +i\n", 10);
	printf("or1=%06.4 +i\n", 10);
	ft_printf("%d\n", -42);
	printf("%d\n", -42);
	ft_printf("my2=%06 +i\n", 10);
	printf("or2=%06 +i\n", 10);
	ft_printf("my3=%.4 +i\n", 10);
	printf("or3=%.4 +i\n", 10);
	ft_printf("my4=%04 +i\n", 10);
	printf("or4=%04 +i\n", 10);
	ft_printf("my5=%2.6 +i\n", 10);
	printf("or5=%2.6 +i\n", 10);
	ft_printf("my6=%020 -i\n", 10);
	printf("or6=%020 -i\n", 10);
	ft_printf("my7=% +i\n", 10);
	printf("or7=% +i\n", 10);
	ft_printf("my8=%020 i\n", 10);
	printf("or8=%020 i\n", 10);
	ft_printf("my9=%020 -i\n", 10);
	printf("or9=%020 -i\n", 10);
	ft_printf("my10=%3+i\n", 0);
	printf("or10=%3+i\n", 0);
	ft_printf("my11=%3i\n", 0);
	printf("or11=%3i\n", 0);
	ft_printf("my12=%+i\n", 0);
	printf("or12=%+i\n", 0);
	ft_printf("my13=%3+i\n", 3);
	printf("or13=%3+i\n", 3);
	ft_printf("my13=%3 i\n", 3);
	printf("or13=%3 i\n", 3);

	
	printf(ANSI_COLOR_MAGENTA "---Conversion = d---" ANSI_COLOR_RESET "\n");

	ft_printf("my1=%06.4 +d\n", 10);
	printf("or1=%06.4 +d\n", 10);
	ft_printf("my2=%06 +d\n", 10);
	printf("or2=%06 +d\n", 10);
	ft_printf("my3=%.4 +d\n", 10);
	printf("or3=%.4 +d\n", 10);
	ft_printf("my4=%04 +d\n", 10);
	printf("or4=%04 +d\n", 10);
	ft_printf("my5=%2.6 +d\n", 10);
	printf("or5=%2.6 +d\n", 10);
	ft_printf("my6=%020 -d\n", 10);
	printf("or6=%020 -d\n", 10);
	ft_printf("my7=% +d\n", 10);
	printf("or7=% +d\n", 10);
	ft_printf("my8=%020 d\n", 10);
	printf("or8=%020 d\n", 10);
	ft_printf("my9=%020 -d\n", 10);
	printf("or9=%020 -d\n", 10);

	printf(ANSI_COLOR_MAGENTA "---Conversion = D---" ANSI_COLOR_RESET "\n");

	ft_printf("my1=%06.4 +D\n", 2310);
	printf("or1=%06.4 +D\n", 2310);
	ft_printf("my2=%06 +D\n", 2310);
	printf("or2=%06 +D\n", 2310);
	ft_printf("my3=%.4 +D\n", 2310);
	printf("or3=%.4 +D\n", 2310);
	ft_printf("my4=%04 +D\n", 2310);
	printf("or4=%04 +D\n", 2310);
	ft_printf("my5=%2.6 +D\n", 2310);
	printf("or5=%2.6 +D\n", 2310);
	ft_printf("my6=%020 -D\n", 2310);
	printf("or6=%020 -D\n", 2310);
	ft_printf("my7=% +D\n", 2310);
	printf("or7=% +D\n", 2310);
	ft_printf("my8=%020 D\n", 2310);
	printf("or8=%020 D\n", 2310);
	ft_printf("my9=%020 -D\n", 2310);
	printf("or9=%020 -D\n", 2310);
	
	printf("---------------------------------------------------------------------------\n");
	printf(ANSI_COLOR_GREEN "ОТРИЦАТЕЛЬНЫЕ ЧИСЛА" ANSI_COLOR_RESET "\n");
	printf(ANSI_COLOR_MAGENTA "---Conversion = i---" ANSI_COLOR_RESET "\n");
	ft_printf("my1=%06.4i\n", -10);
	printf("or1=%06.4i\n", -10);
	ft_printf("my2=%6.4i\n", -10);
	printf("or2=%6.4i\n", -10);
	ft_printf("my3=%.4i\n", -10);
	printf("or3=%.4i\n", -10);
	ft_printf("my4=%2i\n", -10);
	printf("or4=%2i\n", -10);
	ft_printf("my5=%5i\n", -10);
	printf("or5=%5i\n", -10);
	ft_printf("my6=%0-6.4i\n", -10);
	printf("or6=%0-6.4i\n", -10);
	ft_printf("my7=%i\n", -10);
	printf("or7=%i\n", -10);
	ft_printf("my8=% i\n", -10);
	printf("or8=% i\n", -10);
	ft_printf("my9=%020 i\n", -10);
	printf("or9=%020 i\n", -10);
	ft_printf("my10=%020- i\n", -10);
	printf("or10=%020 -i\n", -10);
	ft_printf("my11=%20.7 -i\n", -10);
	printf("or11=%20.7 -i\n", -10);
	ft_printf("my12=%.3 -i\n", -10);
	printf("or12=%.3 -i\n", -10);
	ft_printf("my13=%.3 -i\n", 0);
	printf("or13=%.3 -i\n", 0);
	ft_printf("my14=%3i\n", 0);
	printf("or14=%3i\n", 0);
	
	printf(ANSI_COLOR_MAGENTA "---Conversion = D---" ANSI_COLOR_RESET "\n");
	ft_printf("my1=%06.4D\n", -10);
	printf("or1=%06.4D\n", -10);
	ft_printf("my2=%6.4D\n", -10);
	printf("or2=%6.4D\n", -10);
	ft_printf("my3=%.4D\n", -10);
	printf("or3=%.4D\n", -10);
	ft_printf("my4=%2D\n", -10);
	printf("or4=%2D\n", -10);
	ft_printf("my5=%5D\n", -10);
	printf("or5=%5D\n", -10);
	ft_printf("my6=%0-6.4D\n", -10);
	printf("or6=%0-6.4D\n", -10);
	ft_printf("my7=%D\n", -10);
	printf("or7=%D\n", -10);
	ft_printf("my8=% D\n", -10);
	printf("or8=% D\n", -10);
	ft_printf("my9=%020 D\n", -10);
	printf("or9=%020 D\n", -10);
	ft_printf("my10=%020- D\n", -10);
	printf("or10=%020 -D\n", -10);
	ft_printf("my11=%20.7 -D\n", -10);
	printf("or11=%20.7 -D\n", -10);
	ft_printf("my12=%.3 -D\n", -10);
	printf("or12=%.3 -D\n", -10);
	ft_printf("my13=%.3 -D\n", 0);
	printf("or13=%.3 -D\n", 0);
	ft_printf("%.4d\n", -424242);
	printf("%.4d\n", -424242);
	ft_printf("%03.2d\n", -1);
	printf("%03.2d\n", -1);
	ft_printf("%15.4d\n", -424242);
	printf("%15.4d\n", -424242);
	ft_printf("@moulitest: %5.d %5.0d\n", 0, 0);
	printf("@moulitest: %5.d %5.0d\n", 0, 0);
	ft_printf("%15.4d\n", 424242);
	printf("%15.4d\n", 424242);
	ft_printf("%4.8d\n", -424242424);
	printf("%4.8d\n", -424242424);



	printf("---------------------------------------------------------------------------\n");
	printf(ANSI_COLOR_GREEN "ПОЛОЖИТЕЛЬНЫЕ ЧИСЛА uUoOxX" ANSI_COLOR_RESET "\n");
	printf(ANSI_COLOR_MAGENTA "---Conversion = u---" ANSI_COLOR_RESET "\n");
	ft_printf("my1=%06.4u\n", 10);
	printf("or=1%06.4u\n", 10);
	ft_printf("my2=%6.4u\n", 45);
	printf("or2=%6.4u\n", 45);
	ft_printf("my3=%.4u\n", 5410);
	printf("or3=%.4u\n", 5410);
	ft_printf("my4=%2u\n", 10);
	printf("or4=%2u\n", 10);
	ft_printf("my5=%5u\n", 0);
	printf("or5=%5u\n", 0);
	ft_printf("my6=%0-6.4u\n", 1023);
	printf("or6=%0-6.4u\n", 1023);
	ft_printf("my7=%u\n", 10);
	printf("or7=%u\n", 10);
	ft_printf("my8=% u\n", 10);
	printf("or8=% u\n", 10);
	ft_printf("my9=%020 u\n", 4310);
	printf("or9=%020 u\n", 4310);
	ft_printf("my10=%020- u\n", 10);
	printf("or10=%020 -u\n", 10);
	ft_printf("my11=%20.7 -u\n", 3000);
	printf("or11=%20.7 -u\n", 3000);
	ft_printf("my12=%.3 -u\n", 10);
	printf("or12=%.3 -u\n", 10);

	printf(ANSI_COLOR_MAGENTA "---Conversion = U---" ANSI_COLOR_RESET "\n");
	ft_printf("my1=%06.4U\n", 10);
	printf("or1=%06.4U\n", 10);
	ft_printf("my2=%6.4U\n", 45);
	printf("or2=%6.4U\n", 45);
	ft_printf("my3=%.4U\n", 5410);
	printf("or3=%.4U\n", 5410);
	ft_printf("my4=%2U\n", 10);
	printf("or4=%2U\n", 10);
	ft_printf("my5=%5U\n", 0);
	printf("or5=%5U\n", 0);
	ft_printf("my6=%0-6.4U\n", 1023);
	printf("or6=%0-6.4U\n", 1023);
	ft_printf("my7=%U\n", 10);
	printf("or7=%U\n", 10);
	ft_printf("my8=% U\n", 10);
	printf("or8=% U\n", 10);
	ft_printf("my9=%020 U\n", 4310);
	printf("or9=%020 U\n", 4310);
	ft_printf("my10=%020- U\n", 10);
	printf("or10=%020 -U\n", 10);
	ft_printf("my11=%20.7 -U\n", -3000);
	printf("or11=%20.7 -U\n", -3000);
	ft_printf("my12=%.3 -U\n", 10);
	printf("or12=%.3 -U\n", 10);

	printf(ANSI_COLOR_MAGENTA "---Conversion = x---" ANSI_COLOR_RESET "\n");
	ft_printf("my1=%06.4x\n", 10);
	printf("or1=%06.4x\n", 10);
	ft_printf("my2=%6.4x\n", 45);
	printf("or2=%6.4x\n", 45);
	ft_printf("my3=%# .4x\n", 5410);
	printf("or3=%# .4x\n", 5410);
	ft_printf("my4=%2x\n", 10);
	printf("or4=%2x\n", 10);
	ft_printf("my5=%5#x\n", 0);
	printf("or5=%5#x\n", 0);
	ft_printf("my6=%0#-6.4x\n", 1023);
	printf("or6=%0#-6.4x\n", 1023);
	ft_printf("my7=%x\n", 10);
	printf("or7=%x\n", 10);
	ft_printf("my8=% #x\n", 10);
	printf("or8=% #x\n", 10);
	ft_printf("my9=%020 x\n", 4310);
	printf("or9=%020 x\n", 4310);
	ft_printf("my10=%020- #x\n", 10);
	printf("or10=%020- #x\n", 10);
	ft_printf("my11=%20.7 -x\n", -3000);
	printf("or11=%20.7 -x\n", -3000);
	ft_printf("my12=%.3 -x\n", 10);
	printf("or12=%.3 -x\n", 10);
	ft_printf("my13=%5#x\n", 15);
	printf("or13=%5#x\n", 15);

	printf(ANSI_COLOR_MAGENTA "---Conversion = X---" ANSI_COLOR_RESET "\n");
	ft_printf("my1=%06.4X\n", 10);
	printf("or1=%06.4X\n", 10);
	ft_printf("my2=%6.4X\n", 45);
	printf("or2=%6.4X\n", 45);
	ft_printf("my3=%# .4X\n", 5410);
	printf("or3=%# .4X\n", 5410);
	ft_printf("my4=%2X\n", 10);
	printf("or4=%2X\n", 10);
	ft_printf("my5=%5#X\n", 0);
	printf("or5=%5#X\n", 0);
	ft_printf("my6=%0#-6.4X\n", 1023);
	printf("or6=%0#-6.4X\n", 1023);
	ft_printf("my7=%X\n", 10);
	printf("or7=%X\n", 10);
	printf("or8=% #X\n", 10);
	ft_printf("my8=% #X\n", 10);
	ft_printf("my9=%020 X\n", 4310);
	printf("or9=%020 X\n", 4310);
	ft_printf("my10=%020- #X\n", 10);
	printf("or10=%020- #X\n", 10);
	ft_printf("my11=%20.7 -X\n", -3000);
	printf("or11=%20.7 -X\n", -3000);
	ft_printf("my12=%.3 -X\n", 10);
	printf("or12=%.3 -X\n", 10);
	ft_printf("my13=%5#X\n", 15);
	printf("or13=%5#X\n", 15);

	printf(ANSI_COLOR_MAGENTA "---Conversion = o---" ANSI_COLOR_RESET "\n");
	ft_printf("my1=%06.4o\n", 10);
	printf("or1=%06.4o\n", 10);
	ft_printf("my2=%6.4o\n", 45);
	printf("or2=%6.4o\n", 45);
	ft_printf("my3=%# .4o\n", 5410);
	printf("or3=%# .4o\n", 5410);
	ft_printf("my4=%2o\n", 10);
	printf("or4=%2o\n", 10);
	ft_printf("my5=%5#o\n", 0);
	printf("or5=%5#o\n", 0);
	ft_printf("my6=%0#-6.4o\n", 1023);
	printf("or6=%0#-6.4o\n", 1023);
	ft_printf("my7=%o\n", 10);
	printf("or7=%o\n", 10);
	ft_printf("my8=% #o\n", 10);
	printf("or8=% #o\n", 10);
	ft_printf("my9=%020 o\n", 4310);
	printf("or9=%020 o\n", 4310);
	ft_printf("my10=%020- #o\n", 10);
	printf("or10=%020- #o\n", 10);
	ft_printf("my11=%#o\n", -2147483648);
	printf("or11=%#o\n", -2147483648);
	ft_printf("my12=%.3 -o\n", 10);
	printf("or12=%.3 -o\n", 10);
	ft_printf("my13=%5#o\n", 15);
	printf("or13=%5#o\n", 15);

	printf(ANSI_COLOR_MAGENTA "---Conversion = O---" ANSI_COLOR_RESET "\n");
	ft_printf("my1=%06.4O\n", 10);
	printf("or1=%06.4O\n", 10);
	ft_printf("my2=%6.4O\n", 45);
	printf("or2=%6.4O\n", 45);
	ft_printf("my3=%# .4O\n", 5410);
	printf("or3=%# .4O\n", 5410);
	ft_printf("my4=%2O\n", 10);
	printf("or4=%2O\n", 10);
	ft_printf("my5=%5#O\n", 0);
	printf("or5=%5#O\n", 0);
	ft_printf("my6=%0#-6.4O\n", 1023);
	printf("or6=%0#-6.4O\n", 1023);
	ft_printf("my7=%O\n", 10);
	printf("or7=%O\n", 10);
	ft_printf("my8=% #O\n", 10);
	printf("or8=% #O\n", 10);
	ft_printf("my9=%020 O\n", 4310);
	printf("or9=%020 O\n", 4310);
	ft_printf("my10=%020- #O\n", 10);
	printf("or10=%020- #O\n", 10);
	ft_printf("my11=%20.7 -O\n", -3000);
	printf("or11=%20.7 -O\n", -3000);
	ft_printf("my12=%.3 -O\n", 10);
	printf("or12=%.3 -O\n", 10);
	ft_printf("my13=%5#O\n", 15);
	printf("or13=%5#O\n", 15);

	printf("---------------------------------------------------------------------------\n");
	printf(ANSI_COLOR_GREEN "Pointer address" ANSI_COLOR_RESET "\n");
	printf(ANSI_COLOR_MAGENTA "---Conversion = p---" ANSI_COLOR_RESET "\n");
	ft_printf("my1=%06.4p\n", 10);
	printf("or1=%06.4p\n", 10);
	ft_printf("my2=%6.4p\n", 45);
	printf("or2=%6.4p\n", 45);
	ft_printf("my3=%.4p\n", 5410);
	printf("or3=%.4p\n", 5410);
	ft_printf("my4=%2p\n", 10);
	printf("or4=%2p\n", 10);
	ft_printf("my5=%5p\n", 0);
	printf("or5=%5p\n", 0);
	ft_printf("my6=%0-6.4p\n", 1023);
	printf("or6=%0-6.4p\n", 1023);
	ft_printf("my7=%p\n", 10);
	printf("or7=%p\n", 10);
	ft_printf("my8=% p\n", 10);
	printf("or8=% p\n", 10);
	ft_printf("my9=%020 p\n", 4310);
	printf("or9=%020 p\n", 4310);
	ft_printf("my10=%020- p\n", 10);
	printf("or10=%020 -p\n", 10);
	ft_printf("my11=%20.7 -p\n", 3000);
	printf("or11=%20.7 -p\n", 3000);
	ft_printf("my12=%.3 -p\n", 10);
	printf("or12=%.3 -p\n", 10);
	ft_printf("my13=%.3 -p\n", str);
	printf("or13=%.3 -p\n", str);
	ft_printf("my13=%.3 -p\n", &max);
	printf("or13=%.3 -p\n", &max);
	ft_printf("my14=%2.20- p\n", NULL);
	printf("or14=%2.20 -p\n", NULL);
	ft_printf("my15=%4.0 -p\n", NULL);
	printf("or15=%4.0 -p\n", NULL);
	ft_printf("%.0p, %.p\n", 0, 0);
	printf("%.0p, %.p\n", 0, 0);
	ft_printf("{%-15p}\n", 0);
	printf("{%-15p}\n", 0);
	ft_printf("%.p, %.0p\n", 0, 0);
	printf("%.p, %.0p\n", 0, 0);
	ft_printf("%.5p\n", 0);
	printf("%.5p\n", 0);
	ft_printf("%p\n", 0);
	printf("%p\n", 0);
	
	
	printf("---------------------------------------------------------------------------\n");
	printf(ANSI_COLOR_GREEN "CHAR OUTPUT" ANSI_COLOR_RESET "\n");
	printf(ANSI_COLOR_MAGENTA "---Conversion = c---" ANSI_COLOR_RESET "\n");
	ft_printf("my1=%06.4c\n", 'a');
	printf("or1=%06.4c\n", 'a');
	ft_printf("my2=%6.4c\n", 'c');
	printf("or2=%6.4c\n", 'c');
	ft_printf("my3=%.4c\n", '0');
	printf("or3=%.4c\n", '0');
*/	ft_printf("my4=%2c\n", 0);
	printf("or4=%2c\n", 0);
/*	printf("|  %i", ft_printf("my5=%5c", 201));
	printf("\n");
	printf("|  %i", printf("or5=%5c", 201));
	printf("\n");
	ft_printf("my6=%0-6.4c\n", 'c');
	printf("or6=%0-6.4c\n", 'c');
	ft_printf("my7=%c\n", 'a');
	printf("or7=%c\n", 'a');
	ft_printf("my8=% c\n", 'f');
	printf("or8=% c\n", 'f');
	ft_printf("my9=%020 c\n", 'a');
	printf("or9=%020 c\n", 'a');
	ft_printf("my10=%020- c\n", 'r');
	printf("or10=%020 -c\n", 'r');
	ft_printf("my11=%20.7 -c\n", 3000);
	printf("or11=%20.7 -c\n", 3000);
	printf("|  %i", ft_printf("my=%5c", 3000));
	printf("\n");
	printf("|  %i", printf("or=%5c", 3000));
	printf("\n");
	ft_printf("my12=%.3 -c\n", 'q');
	printf("or12=%.3 -c\n", 'q');

	ft_printf("my13=%.3 -c %c\n", 'q', 'q');
	printf("or13=%.3 -c %c\n", 'q', 'q');
	
	printf("---------------------------------------------------------------------------\n");
	printf(ANSI_COLOR_GREEN "STR OUTPUT" ANSI_COLOR_RESET "\n");
	printf(ANSI_COLOR_MAGENTA "---Conversion = s---" ANSI_COLOR_RESET "\n");
	ft_printf("my1=%06.4s\n", "aaaaaa");
	printf("or1=%06.4s\n", "aaaaaa");
	ft_printf("my2=%6.4s\n", "cccccc");
	printf("or2=%6.4s\n", "cccccc");
	ft_printf("my3=%.4s\n", "000000");
	printf("or3=%.4s\n", "000000");
	ft_printf("my4=%2s\n", 0);
	printf("or4=%2s\n", 0);
	printf("|  %i", ft_printf("my5=%5s", "201"));
	printf("\n");
	printf("|  %i", printf("or5=%5s", "201"));
	printf("\n");
	ft_printf("my6=%0-6.4s\n", "dddddd");
	printf("or6=%0-6.4s\n", "dddddd");
	ft_printf("my7=%s\n", "aaaaaa");
	printf("or7=%s\n", "aaaaaa");
	ft_printf("my8=% s\n", "ffffff");
	printf("or8=% s\n", "ffffff");
	ft_printf("my9=%020 s\n", "bbbbbb");
	printf("or9=%020 s\n", "bbbbbb");
	ft_printf("my10=%020- s\n", "rrrrrr");
	printf("or10=%020- s\n", "rrrrrr");
	ft_printf("my11=%20.7 -s\n", "3000");
	printf("or11=%20.7 -s\n", "3000");
	printf("|  %i", ft_printf("my=%5s", "3000"));
	printf("\n");
	printf("|  %i", printf("or=%5s", "3000"));
	printf("\n");
	ft_printf("my12=%.3 -s\n", "qqqqqq");
	printf("or12=%.3 -s\n", "qqqqqq");

	ft_printf("my13=%.3 -s %s\n", "qqq", "000");
	printf("or13=%.3 -s %s\n", "qqq", "000");
	int a;
	a = ft_printf("%.4s", "42");
	printf("\na == %d\n", a);
	a = printf("%.4s", "42");
	printf("\na == %d\n", a);
	a = ft_printf("%15.4s", "42 is the answer");
	printf("\na == %d\n", a);
	a = printf("%15.4s", "42 is the answer");
	printf("\na == %d\n", a);
	a = ft_printf("%ls", L"жM-M-^QжM-^XѓдЄM-еM-^O™зM-^LЂгM-M-^B");
	printf("\na == %d\n", a);
	a = printf("%ls", L"жM-M-^QжM-^XѓдЄM-еM-^O™зM-^LЂгM-M-^B");
	printf("\na == %d\n", a);
//	ft_printf("{%05.s}\n", 0);
//	printf("{%05.s}\n", 0);
*/
	ft_printf("my14=%10.3s\n", NULL);// ловит сигфолт
//	printf("or14=%10.3s\n", 0);//
/*
	printf("---------------------------------------------------------------------------\n");
	//printf(ANSI_COLOR_GREEN "Пропускает или нет  %" ANSI_COLOR_RESET "\n");

	ft_printf("my1=%%%06.4c\n", 'a');
	printf("or1=%%%06.4c\n", 'a');
	ft_printf("my2%%=% 6.4c\n", 'a');
	printf("or2%%=%6.4c\n", 'a');

//	printf("or2=%t\n", 'a');
//	printf("test%=% %%li\n", 130);
//	printf("testZ=% %Zli\n", 130);
	ft_printf("test_my=%010-k20k\n", 130);
	printf("test_or=%010-k20k\n", 130);
	
	ft_printf("test_my=% kkak\n", 130);
	printf("test_or=% kkak\n", 130);
	ft_printf("test_my=% 20kkak\n", 130);
	printf("test_or=% 20kkak\n", 130);
	ft_printf("test_my=% 020kkak\n", 130);
	printf("test_or=% 020kkak\n", 130);
	

	printf("---------------------------------------------------------------------------\n");
	int gl;
	
	gl = ft_printf("%");
//	printf("[%d]", gl);
	gl = printf("%");
//	printf("[%d]", gl);
	ft_printf("my2=%5%\n");
	printf("or2=%5%\n");
	ft_printf("my3=%-5%\n");
	printf("or3=%-5%\n");
	ft_printf("my4=%.0%\n");
	printf("or4=%.0%\n");
	ft_printf("my5=%   %\n", "test");
	printf("or5=%   %\n", "test");
	ft_printf("my6=%    %\n", "test");
	printf("or6=%    %\n", "test");
//	ft_printf("my%%012=%012d\n", 34567);
//	printf("or%%012=%012d\n", 34567);
	ft_printf("my%%012=%012i\n", 34567);
	printf("or%%012=%012i\n", 34567);
	ft_printf("my%%012=%012D\n", 34567);
	printf("or%%012=%012D\n", 34567);
	ft_printf("my%%.0=%.0i\n", 34567);
	printf("or%%.0=%.0i\n", 34567);
	ft_printf("my%%.0=%.0i\n", NULL);// выводит "0", а должно ничего не выводить
	printf("or%%.0=%.0i\n", NULL);
	ft_printf("my%%.0=%.0D\n", 0);// выводит "0", а должно ничего не выводить
	printf("or%%.0=%.0D\n", 0);
	ft_printf("my%%.0=%.0O\n", 0);// выводит "0", а должно ничего не выводить
	printf("or%%.0=%.0O\n", 0);
	ft_printf("%%\n");
	printf("%%\n");
	ft_printf("%5%\n");
	printf("%5%\n");
	ft_printf("%-5%\n");
	printf("%-5%\n");
	ft_printf("%.0%\n");
	printf("%.0%\n");
	ft_printf("my =%%\n", "test");
	printf("or =%%\n", "test");
	ft_printf("my =%   %\n", "abcd");
	printf("or =%   %\n", "abcd");
	ft_printf("my=% d\n", 4);
	printf("or=% d\n", 4);

	ft_printf("my%%#.0=%#.0O\n", 0);
	printf("or%%#.0=%#.0O\n", 0);
	ft_printf("my%%#.=%#.O\n", 0);
	printf("or%%#.=%#.O\n", 0);
	ft_printf("my%%#.=%#.O\n", 123);
	printf("or%%#.=%#.O\n", 123);
	ft_printf("my20.8.12.-6=%20.8.12.-0# +-6i\n", 34567);
	printf("or20.8.12.-6=%20.8.12.-#0+ -6i\n", 34567);
	ft_printf("my=%#08x\n", 42);
	printf("or=%#08x\n", 42);
	ft_printf("my=%#.x %#.0x\n", 0, 0);
	printf("or=%#.x %#.0x\n", 0, 0);
	ft_printf("my=%#.X %#.0X\n", 0, 0);
	printf("or=%#.X %#.0X\n", 0, 0);
	ft_printf("my=%#.o %#.0o\n", 0, 0);
	printf("or=%#.o %#.0o\n", 0, 0);


	ft_printf("my=%ld\n", -2147483649);
	printf("or=%ld\n", -2147483649);
	ft_printf("my=%lld\n", -9223372036854775808);
	printf("or=%lld\n", -9223372036854775808);
	ft_printf("my=%d\n", -92);
	printf("or=%d\n", -92);
	ft_printf("my=%lld\n", 9223372036854775807);
	printf("or=%lld\n", 9223372036854775807);
	ft_printf("my=%ld\n", 2147483648);
	printf("or=%ld\n", 2147483648);

	ft_printf("my=%#5.d %#5.0d\n", 0, 0);
	printf("or=%#5.d %#5.0d\n", 0, 0);
	ft_printf("my=%u\n", 010);
	printf("or=%u\n", 010);
	ft_printf("%10s is a string\n", "this");
	printf("%10s is a string\n", "this");

	ft_printf("%zj", "9223372036854775807");

	ft_printf("%15.4d\n", -424242);
	printf("%15.4d\n", -424242);
	ft_printf("%.4d\n", -424242);
	printf("%.4d\n", -424242);

	ft_printf("%zu, %.0u\n", 0, 0);
	printf("%zu, %.0u\n", 0, 0);

	ft_printf("{%3c}\n", 0);
	printf("{%3c}\n", 0);
	printf("%i\n", ft_printf("%\n"));
	printf("%i\n",printf("%\n"));
	ft_printf("{%5.s}\n", 0);
	printf("{%5.s}\n", 0);
	printf("%i|", ft_printf("%s", ""));
	printf("\n");
	printf("%i|",printf("%s", ""));
	printf("\n");
	ft_printf("%C\n", 'A');

	ft_printf("{%030X}", 0xFFFF);
	printf("\n");
	printf("{%030X}", 0xFFFF);

	ft_printf("%#.3o", 1);
	printf("\n");
	printf("%#.3o", 1);

//	printf("\n");
//	printf("|%i", printf("|%-5.3s|", "LYDI"));
	
	printf("\n\n");
	printf("%%-5.3s LYDI == |%-5.3s|\n%% 4.5 42 == |% 4.5i|\n%%04.5i 42 == |%04.5i|\n%%04.3i 42 == |%04.3i|\n%%04.2i 42 == |%04.2i|", "LYDI", 42, 42, 42, 42);
	printf("\n\n");
	ft_printf("%%-5.3s LYDI == |%-5.3s|\n%% 4.5 42 == |% 4.5i|\n%%04.5i 42 == |%04.5i|\n%%04.3i 42 == |%04.3i|\n%%04.2i 42 == |%04.2i|", "LYDI", 42, 42, 42, 42);
	printf("\n\n");
	ft_printf("{%#.5x}", 1);
	printf("\n");
	printf("{%#.5x}", 1);
*/

//	ft_printf("%%   %", "test");
//	printf("\n");
//	ft_printf("% ");
//	printf("\n");
//	ft_printf("% ");
//	printf("\n");
//	printf("or=% +");
//	printf("\n");
//	ft_printf("% +-");
//	printf("\n% 20-20.3l");
//	ft_printf("%%  %i", 32);
//	ft_printf("% c", 0);
//	printf("\n");
//	printf("% c", 0);
	//	ft_printf("%00-2147483648d", 34);
//	printf("%002323-2147483648d", 34);

	//	printf("\n");
//	printf("%i|", printf("%"));

	/*	ft_printf("%.0p, %.p\n", 0, 0);
	printf("%.0p, %.p\n", 0, 0);
	ft_printf("@moulitest: %s\n", NULL);
	printf("@moulitest: %s\n", NULL);
*//*	printf("testZ=%Zli\n", 130);
*///	printf("\nВЫВОД 'c'\n");
//	ft_printf("my1=%5.2c\n", 'c');
//	printf("or1=%5.2c\n", 'c');

//	printf("%#020-p\n", max);
//	printf("%#x\n", &max);
//	printf("%05c", 'a');
//	printf("\noriginal result=%6.005s\n", str);
//	printf("%3i", 59876);
//	printf("str_move=%s\n", str);
//	ft_printf("%##-+23.014-#hhhh-12 hh-.67 hhl .-0 0 00hi\n", 123);
//	printf("%##-+23.014-#-12 -.67 .-0 0 00+00O\n", 123);
//	ft_printf("%##q-+23.014-#-12 -.67 .-0 0 00+i\n", str);
//	ft_printf("%##q-+23.014-#-12hh -.67 .-0 0 00+D\n", str);
//	ft_printf("%##q-+23.014-#-12lll -hh.67jz .-0 0 00+X\n", str);
//	ft_printf("%FF3  .123456789 #s\n", str);
	int x = 127;
//	printf("chr=%020c", 'H');
//	printf("x=%hi\n", (short int)(char)x);
//	printf("test=%i\n", test(2, "abc"));
//	printf("%0#20+X\n", 100);
//	printf("%#  %% 20  qwwli", 300);
//	ft_printf("%s\n", str);
//	printf("%-10kaka\n");
//	printf("%lll018ll09 %li\n %i",32,  3000000000, 21);
//	printf("%0q#q20sqqs\n", str);
//	printf("%h#10.5   35.5  05*.*i i2=%lzc", 20 ,10, 16, 100);*/
	return (0);
}
