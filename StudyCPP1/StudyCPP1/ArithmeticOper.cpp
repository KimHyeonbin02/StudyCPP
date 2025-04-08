#include <iostream>
using namespace std;

int a;
int b;

int result;

int main() {
	a = 10;
	b = 3;

	cout << ( a + b ) << endl; // µ¡¼À
	cout << ( a - b ) << endl; // »¬¼À
	cout << ( a * b ) << endl; // °ö¼À
	cout << ( a / b ) << endl; // ³ª´°¼À (¸ò)
	cout << ( a % b ) << endl; // ³ª´°¼À (³ª¸ÓÁö)


	// º¯¼ö ¾ÈÀÇ °ªÀ» ¿¬»êÇÏ¿© °ªÀ» ¹Ù²Ü ¼ö ÀÖ´Ù
	a += 1;
	b = b + 1;
	cout << a << " " << b << endl;

	a -= 1;
	b = b - 1;

	cout << a << " " << b << endl;
	a *= 2;
	b = b * 2;

	cout << a << " " << b << endl;
	a /= 3;
	b = b / 3;

	cout << a << " " << b << endl;
	a %= 4;
	b = b % 4;

	cout << a << " " << b << endl;

	// 1¾¿ Áõ°¡½ÃÅ°°Å³ª 1¾¿ °¨¼Ò½ÃÅ°´Â °ÍÀ» ½±°Ô ¸¸µé¾îÁÖ´Â ¿¬»êÀÌ ÀÖ´Ù

	b = ++a; // ÀüÄ¡ ÇØ´ç ÁÙ¿¡¼­ ¸ÕÀú ½ÇÇà
	cout << "ÀüÄ¡ µ¡¼À a = " << a << endl;
	cout << "ÀüÄ¡ µ¡¼À b = " << b << endl;

	b = a++; // ÈÄÄ¡ ÇØ´ç ÁÙÀÇ ÄÚµå°¡ ³¡³­ ÈÄ ½ÇÇà
	cout << "ÈÄÄ¡ µ¡¼À a = " << a << endl;
	cout << "ÈÄÄ¡ µ¡¼À b = " << b << endl;

	b = --a; // ÀüÄ¡
	cout << "ÀüÄ¡ »¬¼À a = " << a << endl;
	cout << "ÀüÄ¡ »¬¼À b = " << b << endl;

	b = a--; // ÈÄÄ¡ 
	cout << "ÈÄÄ¡ »¬¼À a = " << a << endl;
	cout << "ÈÄÄ¡ »¬¼À b = " << b << endl;

	// ¿¬»êÀÚ ¿ì¼± ¼øÀ§ / not¿¬»ê - °ö¼À »¬¼À - µ¡¼À ³ª´°¼À - ºñÆ®½ÃÇÁÆ® - ºñ±³¿¬»ê - ºñÆ®¿¬»ê - ³í¸®¿¬»ê - ´ëÀÔ¿¬»ê 

}